/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView, _PUVideoView;

@protocol PUVideoPlayerViewDelegate;

@interface PUVideoPlayerView : UIView

{
    _PUVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    _Bool _isReadyForVideoDisplay;
    _Bool _isDisplayingPlaceholder;
    _Bool _allowsEdgeAntialiasing;
    _Bool _isDisplayingVideo;
    UIImage *_placeholderImage;
    unsigned long long _videoViewContentMode;
    id <PUVideoPlayerViewDelegate> _delegate;
    struct CGRect _placeholderImageContentsRect;
}

@property (nonatomic) _Bool isReadyForVideoDisplay;
@property (nonatomic) _Bool isDisplayingVideo;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct CGRect placeholderImageContentsRect;
@property (nonatomic) _Bool isDisplayingPlaceholder;
@property (nonatomic) unsigned long long videoViewContentMode;
@property (weak, nonatomic) id <PUVideoPlayerViewDelegate> delegate;
@property (nonatomic) _Bool allowsEdgeAntialiasing;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;
- (id)generateSnapshotImage;
- (void)configureWithAVPlayer:(id)arg1;
- (void)_installNewVideoViewIfNecessaryWithPlayer:(id)arg1;

@end
