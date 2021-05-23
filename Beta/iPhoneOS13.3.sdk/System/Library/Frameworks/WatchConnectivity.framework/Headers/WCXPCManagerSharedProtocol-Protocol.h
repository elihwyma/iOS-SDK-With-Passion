/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <WatchConnectivity/Swift-Protocol.h>

@protocol WCXPCManagerSharedProtocol <Swift>

- (unsigned short)handleRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)handleResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)handleSentMessageWithIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)handleApplicationContextWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleFileResultWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleIncomingFileWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleUserInfoResultWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleIncomingUserInfoWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleActiveDeviceSwitchStarted;
- (unsigned short)handleSessionStateChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)handleMessageSendingAllowed;

@end
