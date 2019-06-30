#ifndef LAYER_PARAMETER_H
#define LAYER_PARAMETER_H

#define KERNEL_DIM 3
#define PAD 1
#define INPUT_CHANNEL 3
#define INPUT_WIDTH (416+2*PAD)
#define INPUT_HEIGHT (416+2*PAD)
#define REAL_INPUT_HEIGHT (416+2*PAD)
#define OUTPUT_CHANNEL 16
#define OUTPUT_WIDTH 416
#define OUTPUT_HEIGHT 416

#define LEAKY 1

#define WINDOW_AREA KERNEL_DIM*KERNEL_DIM
#define KERNEL_AREA WINDOW_AREA*INPUT_CHANNEL
#define KERNEL_NUM OUTPUT_CHANNEL //should be equal to or smaller than OUTPUT_CHANNEL
								  //depend on resource available

#define STREAM_TX_SIZE (((KERNEL_NUM+1)/2-1)/((INPUT_CHANNEL+1)/2)+1)

#endif
