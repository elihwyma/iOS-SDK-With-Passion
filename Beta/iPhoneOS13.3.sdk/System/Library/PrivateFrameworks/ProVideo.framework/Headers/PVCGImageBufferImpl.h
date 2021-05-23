/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PVCGImageBufferImpl : NSObject

{
    struct CGImage *_image;
    HGRef_55a77cc8 _generatedPixelBuffer;
    HGRef_0776e7a8 _generatedBitmap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGSize)size;
- (id).cxx_construct;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (struct CGImage *)cgImage;
- (_Bool)canCreateCVPixelBuffer;
- (_Bool)cvPixelBufferRequiresCopy;
- (_Bool)canCreateHGBitmap;
- (HGRef_55a77cc8)cvPixelBufferWithColorSpace:(id)arg1;
- (HGRef_0776e7a8)hgBitmapWithColorSpace:(id)arg1;

@end
