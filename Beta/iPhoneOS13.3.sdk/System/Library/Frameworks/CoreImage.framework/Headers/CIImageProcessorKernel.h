/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIImageProcessorKernel : NSObject

+ (int)outputFormat;
+ (id)applyWithExtent:(struct CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (_Bool)synchronizeInputs;
+ (_Bool)canReduceOutputChannels;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (_Bool)allowSRGBTranferFuntionOnOutput;
+ (_Bool)outputIsOpaque;
+ (_Bool)allowPartialOutputRegion;
+ (_Bool)skipFormatChecks;
+ (unsigned long long)_digestForArgs:(id)arg1;

@end
