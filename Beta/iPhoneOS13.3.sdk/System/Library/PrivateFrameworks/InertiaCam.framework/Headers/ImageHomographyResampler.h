/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <Foundation/NSObject.h>

@interface ImageHomographyResampler : NSObject

{
    double homographyMatrix[9];
}

- (id)init;
- (void)setHomographyMatrix:(double *)arg1;
- (struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;
- (void)EraseCVPixelBuffer:(struct __CVBuffer *)arg1;
- (struct CGImage *)ResampleCGImage:(struct CGImage *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;
- (void)ClearOutOfBoundsPixels:(struct WorkingPixmapRecord *)arg1;
- (short)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3 toPixelBuffer:(struct __CVBuffer *)arg4;

@end
