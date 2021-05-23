/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXGDisplayAssetPixelBufferSource <Swift>

@property (nonatomic, readonly) struct __CVBuffer *currentPixelBuffer;
@property (nonatomic, readonly) struct CGAffineTransform videoRotationTransform;
@property (copy, nonatomic) CDUnknownBlockType pixelBufferDidChangeHandler;

@end
