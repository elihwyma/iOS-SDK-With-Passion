/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface PercentileClipProcessor_RGBA8_CPU : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (_Bool)canReduceOutputChannels;
+ (int)formatForInputAtIndex:(int)arg1;
+ (struct CGPoint)centerInImg:(id)arg1 fromRect:(struct CGRect)arg2 toRect:(struct CGRect)arg3 offset:(struct CGPoint)arg4;
+ (_Bool)allowPartialOutputRegion;

@end
