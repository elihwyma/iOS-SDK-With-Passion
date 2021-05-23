/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/Swift-Protocol.h>

@protocol AXIDCManagerSecurityDelegate;

@protocol AXIDCRemoteControllerDelegate <Swift>

@property (weak, nonatomic) id <AXIDCManagerSecurityDelegate> securityDelegate;

- (unsigned short)controller:didReceiveData: /* Error: Ran out of types for this method. */;
- (unsigned short)controller:didFinishSendingData: /* Error: Ran out of types for this method. */;
- (unsigned short)controllerDidFinishConnecting: /* Error: Ran out of types for this method. */;
- (unsigned short)controller:didCloseConnectionWithError: /* Error: Ran out of types for this method. */;

@end
