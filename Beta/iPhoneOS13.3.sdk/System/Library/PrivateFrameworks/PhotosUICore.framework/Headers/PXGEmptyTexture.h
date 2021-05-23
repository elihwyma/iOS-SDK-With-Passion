/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGBaseTexture.h>

@interface PXGEmptyTexture : PXGBaseTexture

- (_Bool)isOpaque;
- (struct CGImage *)imageRepresentation;
- (struct CGSize)pixelSize;
- (int)presentationType;
- (long long)estimatedByteSize;

@end
