/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class AVPlayerItem, ISLivePhotoUIView, NSString;

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <Swift>

{
    ISLivePhotoUIView *_livePhotoView;
    long long _requestID;
    AVPlayerItem *_videoPlayerItem;
}

@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)contentView;
- (void)updateContent;
- (long long)playbackStyle;
- (void)imageDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (_Bool)isDisplayingFullQualityContent;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_updateLivePhotoPlayerItem;

@end
