/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CIIntegralImageProcessorCPU : CIImageProcessorKernel

+ (int)outputFormat;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (_Bool)canReduceOutputChannels;

@end
