/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface FBSProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)allowPartialOutputRegion;
+ (_Bool)skipFormatChecks;

@end
