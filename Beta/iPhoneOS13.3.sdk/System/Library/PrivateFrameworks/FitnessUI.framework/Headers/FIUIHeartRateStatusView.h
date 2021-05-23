/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class FIUIAnimatingSpriteImageView, NSBundle, NSString, UIImageView;

@interface FIUIHeartRateStatusView : UIView

{
    NSString *_heartSpriteImageName;
    long long _heartSpriteImageFrameCount;
    long long _heartSpriteImageColumnCount;
    NSBundle *_resourceBundle;
    unsigned long long _state;
    double _beatsPerMinute;
    _Bool _delayedStartMeasuringAnimation;
    _Bool _isBeatingHeart;
    _Bool _animationsSuspended;
    UIImageView *_fullHeartImageView;
    FIUIAnimatingSpriteImageView *_animatingImageView;
    UIImageView *_reloadOutlineView;
    UIImageView *_reloadArrowView;
}

@property (retain, nonatomic) UIImageView *fullHeartImageView;
@property (retain, nonatomic) FIUIAnimatingSpriteImageView *animatingImageView;
@property (retain, nonatomic) UIImageView *reloadOutlineView;
@property (retain, nonatomic) UIImageView *reloadArrowView;
@property (nonatomic) _Bool animationsSuspended;

- (void)setState:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_resumeAnimations;
- (void)setBeatsPerMinute:(double)arg1;
- (void)_suspendAnimations;
- (void)_startMeasuringAnimationAnimated:(_Bool)arg1;
- (void)_startBeatingHeart;
- (void)_beatFullHeartOnce;
- (void)_finishedHeartbeat;
- (id)_loadHeartMeasuringImage;
- (id)initWithFrame:(struct CGRect)arg1 heartFilledImageName:(id)arg2 heartSpriteImageName:(id)arg3 spriteFrameCount:(long long)arg4 spriteColumnCount:(long long)arg5 resourceBundle:(id)arg6;
- (void)setReloadHeartOutlineImage:(id)arg1;
- (void)setReloadArrowImage:(id)arg1;
- (void)unloadAnimationAssets;

@end
