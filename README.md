# Synthetic MRI 1

Very primitive situation in git - may contain errors.

Revised version.


**This code needs [Eigen](http://eigen.tuxfamily.org/) - a C++ library header files**. 
The header files location must be with the proper PATH, or PATH should be added in time of compilation.
The optimizer also uses Eigen, and recent versions can be found [here](https://github.com/PatWie/CppNumericalSolvers).

Locations:
* The file to be executed for 3D ECM: ./TRY_EIGEN_3D/scheme_new_OSL_EM_29_GEM.cpp (or number 25 - single core)
    
    To compile:
        g++ scheme_new_OSL_EM_29_GEM.cpp -o test_29_3D -I /usr/include/eigen3 -O3 -lgsl -lgslcblas -lm -fopenmp
    
    To run:
        ./test_29_3D ../data/ZHRTS1.nii Dummy_sd_3D.txt 0

* The file to be executed for 2D ECM: ./TRY_EIGEN_2D/scheme_new_OSL_EM_29_GEM.cpp (or number 25 - single core)
    
    To compile:
        g++ scheme_new_OSL_EM_29_GEM.cpp -o test_29_2D -I /usr/include/eigen3 -O3 -lgsl -lgslcblas -lm -fopenmp
    
    To run:
        ./test_29_2D ../data/new_phantom.nii Dummy_sd.txt 0


* The file to be executed for OSL-EM: 
	./TRY_EIGEN_3D/scheme_new_OSL_EM_26_GEM.cpp
	and 
	./TRY_EIGEN_2D/scheme_new_OSL_EM_26_GEM.cpp

* The data: ./data/ZHRTS1.nii (or ./data/small.nii)

	OR
	    ./data/new_phantom.nii (or ./data/small_phantom.nii)
  (see `*' for any 2D file)
* The optimizer location: ./CppNumericalSolvers
* The old optimiser location: ./optim_cpp_solver/




(* new_phantom.nii is actually transformed from phantom.nii(2D)

You can use R('oro.nifti') to read phantom.nii and then use
dim_(phantom) <- c(4, 256, 256, 1, 18, 1, 1, 1) # or equivalent
to change the dimension - as the dim are written in X, Y, Z, T/M - in this order.
It wold be directly incorporated through Read_files_2.cpp later. 

To change the dim, dim function of base R  would not work.
'RNifti' package is faster, but can't change dim of internal image.
)
