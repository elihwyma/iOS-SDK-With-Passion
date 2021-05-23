/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCellReorderControl.h>

@class NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl

{
    _UIFloatingContentView *_floatingContentView;
    UIPanGestureRecognizer *_panRecognizer;
    UITapGestureRecognizer *_upArrowButtonRecognizer;
    UITapGestureRecognizer *_downArrowButtonRecognizer;
    _Bool _cellHasReorderingAppearance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)wantsMaskingWhileAnimatingDisabled;
- (id)initWithTableViewCell:(id)arg1;
- (void)_updateFloatingViewForCurrentTraits;
- (_Bool)_shouldHandlePressEvent:(id)arg1;
- (void)_endIndirectTracking;
- (void)_updateFocusedFloatingContentView:(_Bool)arg1;
- (void)_panRecognizer:(id)arg1;
- (void)_upArrowButton:(id)arg1;
- (void)_downArrowButton:(id)arg1;
- (void)_beginIndirectTracking;
- (void)_arrowButton:(long long)arg1;

@end
