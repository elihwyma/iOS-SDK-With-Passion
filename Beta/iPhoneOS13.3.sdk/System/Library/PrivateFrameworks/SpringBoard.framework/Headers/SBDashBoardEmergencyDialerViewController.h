/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class NSString, SBLockScreenEmergencyDialerController, TUCallCenter;

@interface SBDashBoardEmergencyDialerViewController : CSCoverSheetViewControllerBase

{
    TUCallCenter *_callCenter;
    SBLockScreenEmergencyDialerController *_controller;
    _Bool _inEmergencyCall;
    _Bool _inEmergencyCallMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationType;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_deactivateEmergencyDialerController;
- (void)_activateEmergencyDialerController;
- (void)_updateEmergencyCallMode:(id)arg1;
- (void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2;

@end
