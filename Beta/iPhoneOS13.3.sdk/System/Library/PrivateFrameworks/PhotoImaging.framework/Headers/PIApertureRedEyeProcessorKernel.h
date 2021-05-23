/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIImageProcessorKernel.h>

@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (int)formatForInputAtIndex:(int)arg1;
+ (CDStruct_996ac03c)ROIForCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
+ (void)convertFloat:(const float *)arg1 toFixed16:(unsigned short *)arg2 count:(unsigned long long)arg3;
+ (void)convertFixed16:(const unsigned short *)arg1 toFloat:(float *)arg2 count:(unsigned long long)arg3;

@end
