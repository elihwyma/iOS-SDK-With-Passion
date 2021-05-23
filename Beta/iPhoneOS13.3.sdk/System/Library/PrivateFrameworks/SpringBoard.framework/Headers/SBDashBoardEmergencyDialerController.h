/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSCoverSheetViewController, NSString, SBDashBoardEmergencyDialerViewController;

@interface SBDashBoardEmergencyDialerController : NSObject <Swift>

{
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardEmergencyDialerViewController *_emergencyDialerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)isMakingEmergencyCall;
- (void)launchEmergencyDialer;
- (id)initWithCoverSheetViewController:(id)arg1;
- (void)launchEmergencyDialerAnimated:(_Bool)arg1;
- (void)exitEmergencyDialerAnimated:(_Bool)arg1;
- (void)launchInCallAlert;
- (void)emergencyDialerExitedWithError:(id)arg1;

@end
