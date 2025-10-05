C++ code for Kim et al. Mechanisms underlying local Ca2+ signalling differences between right and left atrial myocytes at normal and increased frequencies.
_____________________________________________________________________________________________________
### Contents:

* ```ReadMe.md```:					this file  

* ```Makefile```:					the default make file  
* ```build```:						folder of object files  

* ```pace_2.cpp```:					the main function with inputs: basic-cycle-length in ms, number of pacing beats, input file of tubular structure  
* ```lib_cell```: 					folder with all the functions  
* ```pool_tubule```: 				folder of input fles of tubular structures  

* ```global_result```:				folder of output files (whole-cell averaged ion concentrations and ion currents)  
* ```BinaryFiles```: 				folder of output binary files (local CRU calcium concentration)  

* ```steady_state_init```: 			folder of files with initial steady state variables  
* ```steady_state_output```: 		folder of files with varible values at the end of pacing period   
_____________________________________________________________________________________________________
### Sample command in the terminal command line:
```bash
bash clean.sh
make
mkdir -p global_result # create folders for data ouput
mkdir -p BinaryFiles
mkdir -p steady_state_output
RA: ./pace_2 1000 30 "pool_tubule/tub_input_ver2_17.txt" 1.0  "pool_serca/RA.txt"
LA: ./pace_2 1000 30 "pool_tubule/tub_input_ver2_10.txt" 0.85 "pool_serca/LA.txt"
```   
_____________________________________________________________________________________________________

### References:

Joon-Chul Kim, Hieu Trong Huynh, Phuong Kim Luong, Tran Nguyet Trinh, Yixuan Wu, Eleonora Grandi and Sun-Hee Woo. Mechanisms underlying local Ca2+ signalling differences between right and left atrial myocytes at normal and increased frequencies. The Journal of Physiology. https://doi.org/10.1113/JP287884

Please cite the above papers when using this model.
