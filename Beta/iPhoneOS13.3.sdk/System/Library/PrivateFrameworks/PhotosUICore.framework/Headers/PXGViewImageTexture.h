/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGImageTexture.h>

@interface PXGViewImageTexture : PXGImageTexture

{
    _Bool _isOpaque;
    unsigned int _orientation;
    struct CGImage *_imageRef;
}

@property (nonatomic, readonly) struct CGImage *imageRef;
@property (nonatomic, readonly) unsigned int orientation;

- (void)dealloc;
- (_Bool)isOpaque;
- (struct CGSize)pixelSize;
- (id)initWithImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
- (int)presentationType;
- (long long)estimatedByteSize;

@end
