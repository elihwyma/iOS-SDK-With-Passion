/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <SoftwareUpdateServicesUI/Swift-Protocol.h>

@protocol SUSUICommandLineToolServerInterface <Swift>

- (unsigned short)setPasscodePolicy: /* Error: Ran out of types for this method. */;
- (unsigned short)showMiniAlert:usingFakeData:errorCode: /* Error: Ran out of types for this method. */;
- (unsigned short)showFollowUp: /* Error: Ran out of types for this method. */;
- (unsigned short)showAuthenticationUIWithOptions:result: /* Error: Ran out of types for this method. */;
- (unsigned short)showEmergencyCallUIWithOptions:result: /* Error: Ran out of types for this method. */;
- (unsigned short)toggleSettingsBadge: /* Error: Ran out of types for this method. */;
- (unsigned short)reboot: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateComingFromOTAUpdate;
- (unsigned short)downloadDidFinish;

@end
