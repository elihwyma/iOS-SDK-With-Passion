/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PVHGBitmapImageBufferImpl : NSObject

{
    HGRef_0776e7a8 _bitmap;
    struct CGImage *_generatedCGImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGSize)size;
- (id).cxx_construct;
- (struct CGImage *)cgImage;
- (_Bool)canCreateCVPixelBuffer;
- (_Bool)cvPixelBufferRequiresCopy;
- (_Bool)canCreateHGBitmap;
- (id)initWithHGBitmap:(HGRef_0776e7a8)arg1;
- (HGRef_55a77cc8)cvPixelBufferWithColorSpace:(id)arg1;
- (HGRef_0776e7a8)hgBitmapWithColorSpace:(id)arg1;

@end
