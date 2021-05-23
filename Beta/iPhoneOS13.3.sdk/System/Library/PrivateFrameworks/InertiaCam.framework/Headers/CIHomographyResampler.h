/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <InertiaCam/ImageHomographyResampler.h>

@class CIContext, CIImage;

@interface CIHomographyResampler : ImageHomographyResampler

{
    CIContext *_ctx;
    CIImage *_fillImage;
    struct CGRect _lastFillRect;
}

- (id)init;
- (struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;
- (struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3 pixelBufferPool:(struct __CVPixelBufferPool *)arg4;
- (short)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3 toPixelBuffer:(struct __CVBuffer *)arg4;
- (void)updateBackgroundFill:(struct CGRect)arg1;

@end
