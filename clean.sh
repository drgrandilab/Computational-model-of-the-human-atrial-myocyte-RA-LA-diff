make clean
if [ -d "global_result" ]; then
	cd global_result
	rm *
	cd ..
fi
if [ -d "BinaryFiles" ]; then
	cd BinaryFiles
	# find . -name '*.bin' | xargs rm -f
	rm *
	cd ..
fi
if [ -d "steady_state_output" ]; then
	cd steady_state_output
	rm *
	cd ..
fi
# if [ -d "steady_state_init" ] && [ -d "steady_state_output" ]; then
# 	cp ./steady_state_output/*.txt ./steady_state_init
# fi
rm pace_2
rm err_omp.txt
rm res_omp.txt
rm st-math