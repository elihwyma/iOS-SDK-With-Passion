/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class AVPlayer, NSString, UIViewPropertyAnimator, _MPAVPlayerViewPlayerLayerView;

@interface _MPAVPlayerView : UIView

{
    _MPAVPlayerViewPlayerLayerView *_playerLayerView;
    NSString *_targetVideoGravity;
    UIViewPropertyAnimator *_videoGravityAnimator;
}

@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic, readonly) struct CGRect videoBounds;
@property (nonatomic, readonly) _MPAVPlayerViewPlayerLayerView *playerLayerView;
@property (copy, nonatomic) NSString *targetVideoGravity;
@property (retain, nonatomic) UIViewPropertyAnimator *videoGravityAnimator;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)setVideoGravity:(id)arg1 duration:(float)arg2;
- (_Bool)_isDescendantOfScrollView;
- (void)_updatePlayerLayerViewFrame;
- (void)_updatePlayerLayerViewFrame:(id)arg1;
- (id)_mediaTimingFunctionForCurrentAnimationCurve;

@end
