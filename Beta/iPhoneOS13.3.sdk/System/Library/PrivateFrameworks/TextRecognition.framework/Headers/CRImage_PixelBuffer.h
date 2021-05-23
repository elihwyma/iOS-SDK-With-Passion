/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRImage_PixelBuffer

+ (void)drawVerticalLineAtXOffset:(double)arg1 image:(id)arg2;

- (void)dealloc;
- (unsigned long long)width;
- (unsigned long long)height;
- (struct __CVBuffer *)pixelBuffer;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (struct CGImage *)cgImage;
- (void)writeToFile:(id)arg1;
- (id)imageByRotating180;
- (struct vImage_Buffer)vImage;
- (id)imageByRotating90CW;
- (id)imageByCroppingRectangle:(struct CGRect)arg1;
- (id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByConvertingToColorSpace:(int)arg1;
- (id)initWithContentsOfURL:(id)arg1 toColorSpace:(int)arg2;
- (id)imageByCorrectingFromOrientation:(unsigned int)arg1;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3 mask:(struct CGImage *)arg4;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCenter:(_Bool)arg3;
- (struct vImage_Buffer)createFloatBuffer;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByPaddingX:(unsigned long long)arg1 paddingY:(unsigned long long)arg2;
- (id)imageByDilating;
- (id)imageByApplyingBinaryMask:(id)arg1;
- (id)imageByInvertingIntensity;
- (id)imageByOverlayingImage:(id)arg1 opacity:(float)arg2;
- (id)imageByOverlayingRects:(struct CGRect *)arg1 count:(long long)arg2;
- (struct __CVBuffer *)_pixelBufferFromUrl:(id)arg1;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3 mask:(struct CGImage *)arg4 format:(unsigned int)arg5;
- (struct __CVBuffer *)pixelBufferWithFormat:(unsigned int)arg1;

@end
