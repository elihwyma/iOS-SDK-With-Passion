//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SUICProgressIndicatorViewController, SUICProgressStateMachine;

@protocol SUICProgressIndicatorViewControllerDataSource <NSProgressReporting>
- (SUICProgressStateMachine *)stateMachineForProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg1;

@optional
- (BOOL)shouldAnimateTransitionToState:(NSUInteger)arg1 fromState:(NSUInteger)arg2 forProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg3;
@end

