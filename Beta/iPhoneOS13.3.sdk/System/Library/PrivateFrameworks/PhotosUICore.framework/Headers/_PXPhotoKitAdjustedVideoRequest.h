/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PHVideoRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedVideoRequest : _PXPhotoKitAdjustedUIMediaRequest

{
    PLPhotoEditRenderer *_renderer;
    PHVideoRequestOptions *_options;
    CDUnknownBlockType _resultHandler;
}

@property (nonatomic, readonly) PHVideoRequestOptions *options;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

- (void)start;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)_renderIfNeeded;
- (void)_handlePlayerItem:(id)arg1 error:(id)arg2;

@end
