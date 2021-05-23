/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CIGenericMetalProcessor : CIImageProcessorKernel

+ (id)applyWithExtent:(struct CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (_Bool)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)arg1;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 roiMethods:(id)arg4 insetRects:(id)arg5 scaleFactors:(id)arg6 arguments:(id)arg7 error:(id *)arg8;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 arguments:(id)arg4 error:(id *)arg5;
+ (_Bool)outputIsOpaque;
+ (_Bool)skipFormatChecks;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 insetRects:(id)arg4 arguments:(id)arg5 error:(id *)arg6;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 scaleFactors:(id)arg4 arguments:(id)arg5 error:(id *)arg6;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 className:(id)arg4 arguments:(id)arg5 error:(id *)arg6;

@end
