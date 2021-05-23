/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayViewController.h>

@class NSString, SBPowerDownView;

@protocol SBPowerDownViewControllerDelegate;

@interface SBPowerDownViewController : SBTransientOverlayViewController

{
    unsigned long long _aggdStartTime;
    _Bool _canAlterScreenBrightness;
    SBPowerDownView *_powerDownView;
    id <SBPowerDownViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBPowerDownViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (int)_preferredStatusBarVisibility;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewWillAnimateIn:(id)arg1;
- (void)powerDownViewWillAnimateOut:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (long long)idleTimerMode;
- (void)_beginTimeTracking;
- (void)_incrementCountForKey:(id)arg1;
- (void)_endTimeTrackingIncludingReportWithKey:(id)arg1;
- (void)_resetScreenBrightness;
- (void)powerDownViewDidBeginSlide:(id)arg1;
- (void)powerDownView:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)powerDownViewDidCompleteSlide:(id)arg1;
- (void)powerDownViewDidCancelSlide:(id)arg1;
- (void)powerDownViewDidReceiveCancelButtonAction:(id)arg1;
- (void)powerDownViewDidFireIdleTimer:(id)arg1;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (_Bool)shouldDisableBanners;
- (_Bool)shouldDisableControlCenter;
- (_Bool)shouldDisableSiri;
- (_Bool)shouldPendAlertItems;

@end
