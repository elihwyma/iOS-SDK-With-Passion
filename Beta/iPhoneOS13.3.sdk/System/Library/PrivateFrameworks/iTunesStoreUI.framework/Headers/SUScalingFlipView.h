/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@protocol SUScalingFlipViewDelegate;

@interface SUScalingFlipView : UIView

{
    UIView *_backView;
    id <SUScalingFlipViewDelegate> _delegate;
    long long _direction;
    double _duration;
    struct CGRect _fromFrame;
    UIView *_frontView;
    struct CGRect _toFrame;
}

@property (nonatomic) id <SUScalingFlipViewDelegate> delegate;
@property (nonatomic) long long direction;
@property (nonatomic) double duration;

- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (id)_frontLayerAnimation;
- (id)_backLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;
- (id)_fixedAnimationForAnimation:(id)arg1;
- (id)_transformAnimationWithStart:(struct CATransform3D)arg1 middle:(struct CATransform3D)arg2 end:(struct CATransform3D)arg3;
- (void)performFlip;

@end
