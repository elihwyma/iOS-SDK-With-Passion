//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIViewController;
@protocol SBHUDViewControlling;

@protocol SBHUDControlling <NSObject>
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) BOOL isDismissed;
@property(readonly, nonatomic) BOOL isDismissing;
@property(readonly, nonatomic) BOOL isPresenting;
@property(readonly, nonatomic) BOOL isPresented;
@property(readonly, nonatomic, getter=isDismissalScheduled) BOOL dismissalScheduled;
@property(readonly, nonatomic) UIViewController<SBHUDViewControlling> *HUDViewController;
@property(readonly, nonatomic) NSString *identifier;
- (void)rescheduleDismissalTimer;
- (void)scheduleDismissalTimer;
- (void)invalidateDismissalTimer;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismiss;
- (void)presentWithDismissalInterval:(double)arg1 animated:(BOOL)arg2;
- (void)presentWithDismissalInterval:(double)arg1;
@end

