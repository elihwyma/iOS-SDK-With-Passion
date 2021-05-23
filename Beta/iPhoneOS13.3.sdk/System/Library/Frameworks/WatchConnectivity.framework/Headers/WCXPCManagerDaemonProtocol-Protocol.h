/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <WatchConnectivity/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol WCXPCManagerDaemonProtocol <Swift>

- (MISSING_TYPE *)sessionReadyForInitialStateForClientPairingID:supportsActiveDeviceSwitch:withErrorHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateApplicationContext:clientPairingID:errorHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)transferFile:sandboxToken:clientPairingID:errorHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cancelSendWithIdentifier: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)transferUserInfo:withURL:clientPairingID:errorHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acknowledgeFileIndexWithIdentifier:clientPairingID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acknowledgeFileResultIndexWithIdentifier:clientPairingID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acknowledgeUserInfoIndexWithIdentifier:clientPairingID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acknowledgeUserInfoResultIndexWithIdentifier:clientPairingID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cancelAllOutstandingMessages;
- (MISSING_TYPE *)sendMessage:clientPairingID:acceptanceHandler: /* Error: Ran out of types for this method. */;

@end
