/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/Swift-Protocol.h>

@protocol PVImageBufferImpl <Swift>

- (unsigned short)size;
- (unsigned short)cgImage;
- (unsigned short)canCreateCVPixelBuffer;
- (unsigned short)cvPixelBufferRequiresCopy;
- (unsigned short)canCreateHGBitmap;
- (unsigned short)cvPixelBufferWithColorSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)hgBitmapWithColorSpace: /* Error: Ran out of types for this method. */;

@end
