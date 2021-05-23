/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class ISWrappedAVPlayer, NSArray, PXVideoView, UIImage, UIImageView;

@protocol PXVideoPlayerViewDelegate;

@interface PXVideoPlayerView : UIView

{
    PXVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    long long _placeholderVisibilityRequestID;
    CDUnknownBlockType _visibilityChangeCompletionHandler;
    _Bool _displayingPlaceholder;
    _Bool _allowsEdgeAntialiasing;
    id <PXVideoPlayerViewDelegate> _delegate;
    ISWrappedAVPlayer *_player;
    UIImage *_placeholderImage;
    NSArray *_placeholderImageFilters;
    double _videoAppearanceCrossfadeDuration;
    long long _placeholderDisplayMode;
    long long _videoViewContentMode;
    struct CGRect _placeholderImageContentsRect;
}

@property (weak, nonatomic) id <PXVideoPlayerViewDelegate> delegate;
@property (retain, nonatomic) ISWrappedAVPlayer *player;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (copy, nonatomic) NSArray *placeholderImageFilters;
@property (nonatomic) double videoAppearanceCrossfadeDuration;
@property (nonatomic) struct CGRect placeholderImageContentsRect;
@property (nonatomic) long long placeholderDisplayMode;
@property (nonatomic, readonly, getter=isDisplayingPlaceHolder) _Bool displayingPlaceholder;
@property (nonatomic) long long videoViewContentMode;
@property (nonatomic) _Bool allowsEdgeAntialiasing;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setPlaceholderDisplayMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateVideoView;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;
- (void)_setDisplayingPlaceholder:(_Bool)arg1 requestID:(long long)arg2;
- (void)_runVisibilityChangeCompletionHandler;
- (id)generateSnapshotImage;

@end
