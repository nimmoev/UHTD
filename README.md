# Unified Hardware Trojan Detection Toolset

This repository provides a one command-line interface for my Hardware Trojan Detection tools. These tools support currently only combinational circuits.

Current Toolset:
 * ATPG: This tool computes a minimized set of test vectors to determine if any Wires are Stuck-At-Fault.

Planned Toolset:
 * Import: This tool imports a verilog/VHDL file to work with the other tools in this toolset.
 * Compute Controllability/Observability: This tool computes the Controllability and Observability scores for all Wires to determine if any Wire is likely to be connected to a Trojan gate.

## Instructions
On first clone, remember to  
```
git submodule update --init
```