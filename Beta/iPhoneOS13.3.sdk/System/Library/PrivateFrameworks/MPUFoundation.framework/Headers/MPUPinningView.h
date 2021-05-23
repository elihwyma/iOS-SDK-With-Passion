/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIView.h>

@class CALayer;

@interface MPUPinningView : UIView

{
    UIView *_containerView;
    CALayer *_effectivePinningSourceLayer;
    UIView *_contentView;
    UIView *_pinningSourceView;
    CALayer *_pinningSourceLayer;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *pinningSourceView;
@property (retain, nonatomic) CALayer *pinningSourceLayer;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_prepareForDefaultImageSnapshotNotification:(id)arg1;
- (void)_unregisterKVOObserversForLayer:(id)arg1;
- (void)_configureMatchMoveAnimation;
- (_Bool)_updateEffectivePinningSourceView;
- (void)_registerKVOObserversForLayer:(id)arg1;

@end
