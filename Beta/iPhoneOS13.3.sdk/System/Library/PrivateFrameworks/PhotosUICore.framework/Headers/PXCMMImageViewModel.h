/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMImageViewModel : PXObservable

{
    _Bool _highlighted;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
}

@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) id <PXUIImageProvider> mediaProvider;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;

- (void)setAsset:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setMediaProvider:(id)arg1;

@end
