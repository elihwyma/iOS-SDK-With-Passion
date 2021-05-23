/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/Swift-Protocol.h>

@class NSObject, STRootViewModel;

@protocol STContentPrivacyViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STUsageDetailsViewModelCoordinator;

@protocol STRootViewModelCoordinator <Swift>

@property (nonatomic, readonly) STRootViewModel *viewModel;
@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property (readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property (readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (nonatomic) _Bool hasShownMiniBuddy;
@property (nonatomic) _Bool hasAlreadyEnteredPINForSession;
@property (nonatomic, readonly, getter=isPasscodeEnabled) _Bool passcodeEnabled;

- (unsigned short)validatePIN: /* Error: Ran out of types for this method. */;
- (unsigned short)enableScreenTimeWithPIN:recoveryAltDSID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setScreenTimeSyncingEnabled:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setScreenTimeEnabled:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)coordinatorForChild:deviceIdentifier:usageReportType: /* Error: Ran out of types for this method. */;
- (unsigned short)setShareWebUsageEnabled:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setPIN:recoveryAltDSID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setPIN:completionHandler: /* Error: Ran out of types for this method. */;

@end
