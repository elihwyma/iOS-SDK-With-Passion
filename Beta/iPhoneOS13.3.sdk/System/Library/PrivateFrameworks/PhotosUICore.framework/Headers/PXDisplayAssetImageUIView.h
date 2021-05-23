/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, UIImageView;

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <Swift>

{
    UIImageView *_imageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)contentView;
- (long long)playbackStyle;
- (double)loadingProgress;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (_Bool)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)_updateImageViewFilters;

@end
