#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Module for handling Layers.

Layers in the brain are composed of neurons grouped in minicolumns.
"""
from brain.minicolumn import SimpleMiniColumnFactory
from util.factory import Factory, ConstantFactory


class Layer:
    """A layer consisting of various minicolumns."""

    def __init__(self, minicolumns):
        """Initialize the layer."""
        self._minicolumns = minicolumns

    def connect(self, other):
        """Connect this layer to the outputs of another."""
        for minicolumn in self._minicolumns:
            minicolumn.connect(other._minicolumns)

    @property
    def num_minicolumns(self):
        return len(self._minicolumns)


class LayerFactory(Factory):
    """A factory class for the Layers."""

    def __init__(self, num_minicolumns_factory, minicolumn_factory):
        """Initialize the factory."""
        self._num_minicolumns_factory = num_minicolumns_factory
        self._minicolumn_factory = minicolumn_factory

    def create(self):
        """Create the Layer."""
        num_minicolumns = self._num_minicolumns_factory()
        minicolumns = [self._minicolumn_factory()
                       for _ in range(num_minicolumns)]
        return Layer(minicolumns)


class SimpleLayerFactory(LayerFactory):
    """A simple factory class for Layers."""

    def __init__(self,
                 num_minicolumns,
                 num_neurons,
                 num_synapses,
                 neuron_threshold=0.5,
                 synapse_threshold=0.5):
        """Initialize the factory."""
        num_minicolumns_factory = ConstantFactory(num_minicolumns)
        minicolumn_factory = SimpleMiniColumnFactory(
            num_neurons, num_synapses, neuron_threshold, synapse_threshold)

        super().__init__(num_minicolumns_factory, minicolumn_factory)