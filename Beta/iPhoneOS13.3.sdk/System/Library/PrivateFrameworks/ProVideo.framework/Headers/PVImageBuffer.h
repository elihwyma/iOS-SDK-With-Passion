/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@protocol PVImageBufferImpl;

@interface PVImageBuffer : NSObject

{
    id <PVImageBufferImpl> _imageBufferImpl;
    struct HGSynchronizable *_lock;
}

+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithHGBitmap:(HGRef_0776e7a8)arg1;
+ (id)imageWithHGCVPixelBuffer:(HGRef_55a77cc8)arg1;

- (void)dealloc;
- (id)description;
- (struct CGSize)size;
- (id)debugQuickLookObject;
- (struct CGImage *)cgImage;
- (id)uiImage;
- (struct __CVBuffer *)cvPixelBuffer;
- (_Bool)canCreateCVPixelBuffer;
- (_Bool)cvPixelBufferRequiresCopy;
- (_Bool)canCreateHGBitmap;
- (HGRef_0776e7a8)hgBitmap;
- (id)initWithImageBufferImpl:(id)arg1;
- (struct __CVBuffer *)cvPixelBufferWithColorSpace:(id)arg1;
- (HGRef_0776e7a8)hgBitmapWithColorSpace:(id)arg1;

@end
