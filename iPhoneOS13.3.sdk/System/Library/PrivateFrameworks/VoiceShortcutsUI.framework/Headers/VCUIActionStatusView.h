//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VoiceShortcutsUI/SUICProgressStateMachineObserving-Protocol.h>

@class _VCUIActionStatusErrorView;
@protocol VCUIActionStatusViewDelegate;

@interface VCUIActionStatusView : UIView <SUICProgressStateMachineObserving>
{
    id <VCUIActionStatusViewDelegate> _delegate;
    UIView *_activityView;
    _VCUIActionStatusErrorView *_errorView;
}

@property(retain, nonatomic) _VCUIActionStatusErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) __weak id <VCUIActionStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateAcitivityViewSubviewWithDelegateProvidedView;
- (void)_setUpViews;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(NSUInteger)arg2;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(NSUInteger)arg2 fromState:(NSUInteger)arg3 forEvent:(NSUInteger)arg4;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)resetState;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

