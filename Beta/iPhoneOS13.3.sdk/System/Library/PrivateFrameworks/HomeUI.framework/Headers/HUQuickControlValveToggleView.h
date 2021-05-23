/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUCircleView, HUIconView, HUQuickControlViewProfile, NSString, UIColor;

@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlValveToggleView : UIView

{
    _Bool _open;
    _Bool _userInteractionActive;
    id _value;
    HUQuickControlViewProfile *_profile;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    HUIconView *_iconView;
    HUCircleView *_circleView;
}

@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (nonatomic, readonly) UIColor *backgroundOnColor;
@property (nonatomic, readonly) UIColor *backgroundOffColor;
@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) HUCircleView *circleView;
@property (nonatomic) _Bool open;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (copy, nonatomic) HUQuickControlViewProfile *profile;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)intrinsicSizeDescriptor;

- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)_updateAppearance;
- (void)_handleTap:(id)arg1;
- (void)_setupIconView;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_updateIconDescriptor;

@end
