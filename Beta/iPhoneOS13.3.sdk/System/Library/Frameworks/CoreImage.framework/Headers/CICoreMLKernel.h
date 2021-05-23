/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CICoreMLKernel : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (int)formatForInputAtIndex:(int)arg1;
+ (void)copyInput:(id)arg1 toBuffer:(struct __CVBuffer **)arg2 usingFormat:(unsigned int)arg3;
+ (void)copyToOutput:(id)arg1 fromBuffer:(struct __CVBuffer **)arg2 usingFormat:(unsigned int)arg3;

@end
