/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UISlidingBarConfiguration, UISlidingBarStateRequest, UIViewController, _UIPanelAnimationState;

@protocol UIPanelControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPanelInternalState : NSObject <Swift>

{
    UIViewController *_mainViewController;
    UIViewController *_leadingViewController;
    UIViewController *_trailingViewController;
    UIViewController *_collapsedViewController;
    UIViewController *_preservedDetailController;
    id <UIPanelControllerDelegate> _delegate;
    UISlidingBarConfiguration *_configuration;
    UISlidingBarStateRequest *_stateRequest;
    UISlidingBarStateRequest *_externallyAnimatingStateRequest;
    long long _externallyAnimatingAffectedSides;
    _UIPanelAnimationState *_animationState;
    long long _collapsedState;
    double _keyboardAdjustment;
}

@property (retain, nonatomic) UIViewController *mainViewController;
@property (retain, nonatomic) UIViewController *leadingViewController;
@property (retain, nonatomic) UIViewController *trailingViewController;
@property (retain, nonatomic) UIViewController *collapsedViewController;
@property (retain, nonatomic) UIViewController *preservedDetailController;
@property (weak, nonatomic) id <UIPanelControllerDelegate> delegate;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (copy, nonatomic) UISlidingBarStateRequest *externallyAnimatingStateRequest;
@property (nonatomic) long long externallyAnimatingAffectedSides;
@property (retain, nonatomic) _UIPanelAnimationState *animationState;
@property (nonatomic) long long collapsedState;
@property (nonatomic) double keyboardAdjustment;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)_defaultWidthForViewController:(id)arg1 parentWidth:(double)arg2;
- (id)_allowedWidthsForViewController:(id)arg1 parentWidth:(double)arg2;
- (id)_allowedLeadingWidthsForParentWidth:(double)arg1;
- (id)_allowedTrailingWidthsForParentWidth:(double)arg1;
- (id)computePossibleStatesGivenParentView:(id)arg1 withSize:(struct CGSize)arg2;
- (id)_stateForInteractiveRequest:(id)arg1 withAffectedSides:(long long)arg2 inPossibleStates:(id)arg3;

@end
