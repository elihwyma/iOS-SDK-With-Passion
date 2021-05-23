/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIScalingFlipView : UIView

{
    UIView *_backView;
    CDUnknownBlockType _completionBlock;
    long long _direction;
    double _duration;
    struct CGRect _fromFrame;
    UIView *_frontView;
    struct CGRect _toFrame;
}

@property (nonatomic) long long direction;
@property (nonatomic) double duration;

- (id)_timingFunction;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (void)performFlipWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_frontLayerAnimation;
- (id)_backLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;

@end
