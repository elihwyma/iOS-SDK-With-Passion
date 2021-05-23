/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CIMetalProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (_Bool)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (_Bool)allowSRGBTranferFuntionOnOutput;
+ (_Bool)allowPartialOutputRegion;
+ (void)setFilterParams:(id)arg1 arguments:(id)arg2 filter:(id)arg3;
+ (void)setFilterParamsAndImages:(id)arg1 arguments:(id)arg2 filter:(id)arg3;

@end
