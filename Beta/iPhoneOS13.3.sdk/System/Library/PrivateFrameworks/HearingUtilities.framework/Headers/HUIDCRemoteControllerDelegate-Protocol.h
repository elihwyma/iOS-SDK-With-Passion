/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/Swift-Protocol.h>

@protocol HUIDCManagerSecurityDelegate;

@protocol HUIDCRemoteControllerDelegate <Swift>

@property (weak, nonatomic) id <HUIDCManagerSecurityDelegate> securityDelegate;

- (unsigned short)controller:didReceiveData: /* Error: Ran out of types for this method. */;
- (unsigned short)controller:didFinishSendingData: /* Error: Ran out of types for this method. */;
- (unsigned short)controllerDidFinishConnecting: /* Error: Ran out of types for this method. */;
- (unsigned short)controller:didCloseConnectionWithError: /* Error: Ran out of types for this method. */;

@end
