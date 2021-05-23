/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class NSString, PHImageRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedImageURLRequest : _PXPhotoKitAdjustedUIMediaRequest

{
    PLPhotoEditRenderer *_renderer;
    PHImageRequestOptions *_options;
    NSString *_pairingIdentifier;
    CDUnknownBlockType _resultHandler;
}

@property (nonatomic, readonly) PHImageRequestOptions *options;
@property (copy, nonatomic, readonly) NSString *pairingIdentifier;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

- (void)start;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)_renderIfNeeded;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (void)_handleExportFinished:(id)arg1;

@end
