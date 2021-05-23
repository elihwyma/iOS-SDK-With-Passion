/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIView.h>

@class MediaControlsContainerView, MediaControlsSeparatorView, MediaControlsTimeControl, MediaControlsTransportStackView;

__attribute__((visibility("hidden")))
@interface MediaControlsParentContainerView : UIView

{
    long long _style;
    long long _selectedMode;
    MediaControlsContainerView *_containerView;
    UIView *_routingView;
    MediaControlsSeparatorView *_topDividerView;
    MediaControlsSeparatorView *_bottomDividerView;
    UIView *_mediaControlsRoutingPickerView;
    long long _routingViewControllerAnimationCount;
}

@property (retain, nonatomic) UIView *mediaControlsRoutingPickerView;
@property (nonatomic) long long routingViewControllerAnimationCount;
@property (nonatomic) long long style;
@property (nonatomic) long long selectedMode;
@property (retain, nonatomic) MediaControlsContainerView *containerView;
@property (retain, nonatomic) MediaControlsTransportStackView *transportStackView;
@property (retain, nonatomic) MediaControlsTimeControl *timeControl;
@property (retain, nonatomic) UIView *routingView;
@property (retain, nonatomic) MediaControlsSeparatorView *topDividerView;
@property (retain, nonatomic) MediaControlsSeparatorView *bottomDividerView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateTimeControlVisibility:(id)arg1;
- (void)_updateRoutingPickerVisibilityAnimated:(_Bool)arg1;
- (void)_toggleRoutingPickerAnimated:(_Bool)arg1;
- (void)_setInitialFrameForRoutingView:(id)arg1;

@end
