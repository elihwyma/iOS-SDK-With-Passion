/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

#import <CardKit/CRKCardViewController.h>

@class NSLayoutConstraint, NSProgress, NSString, SUICProgressIndicatorViewController, SUICProgressStateMachine, UIView, VCUIActionStatusView;

@interface VCUIProgressCardViewController : CRKCardViewController

{
    NSProgress *_progress;
    _Bool _animatesStateTransitions;
    NSLayoutConstraint *_statusViewSuccessHeightConstraint;
    NSLayoutConstraint *_statusViewFailureHeightConstraint;
    VCUIActionStatusView *_statusView;
    SUICProgressIndicatorViewController *_progressIndicatorViewController;
    UIView *_hairlineView;
    SUICProgressStateMachine *_progressStateMachine;
}

@property (retain, nonatomic, getter=_statusView, setter=_setStatusView:) VCUIActionStatusView *statusView;
@property (retain, nonatomic, getter=_progressIndicatorViewController, setter=_setProgressIndicatorViewController:) SUICProgressIndicatorViewController *progressIndicatorViewController;
@property (retain, nonatomic, getter=_hairlineView, setter=_setHairlineView:) UIView *hairlineView;
@property (retain, nonatomic, getter=_progressStateMachine, setter=_setProgressStateMachine:) SUICProgressStateMachine *progressStateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (double)contentHeightForWidth:(double)arg1;
- (void)handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(_Bool)arg3;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;
- (_Bool)shouldAnimateTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 forProgressIndicatorViewController:(id)arg3;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;
- (id)progressViewController;
- (void)_setUpViews;
- (void)actionStatusView:(id)arg1 didAddViewFromProgressViewController:(id)arg2;
- (void)_setUpHelpers;
- (void)_updateDelegateOnBoundsDidChange;

@end
