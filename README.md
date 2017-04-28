# ModalSound

See the original source at: https://github.com/cxzheng/ModalSound

My modifications:
1. The program is now able to generate a continuous sound by synthsizing multiple clicks at a time and combine them together.
2. The sound can now be saved as .wav and .raw.
3. GUI and speaker is no longer required to run the program, which means the sound can be generated easily under linux environment.
4. Multithreading is now supported. And I added in some tunnable parameters to specify the quality of the generated sound. The speed is now up to 200 times faster than before!
5. A 'number of channel' bug fixed.

Usage:
1. Clone original source: https://github.com/cxzheng/ModalSound
2. Download my repository and replace src
3. Cmake
4. Before make, check your link.txt, and add '-liomp5 -lprotobuf -lpthread -lm' to it if they are not already in the link.txt .
5. make