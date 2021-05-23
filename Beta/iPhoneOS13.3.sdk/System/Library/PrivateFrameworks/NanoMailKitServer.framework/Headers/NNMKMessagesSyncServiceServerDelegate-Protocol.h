/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKMessagesSyncServiceServerDelegate <Swift>

- (unsigned short)messagesSyncServiceServer:didSendProtobufSuccessfullyWithIDSIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServer:didFailSendingProtobufWithIDSIdentifier:errorCode: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServer:didUpdateMessagesStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServer:didDeleteMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServer:didWarnMessagesFilteredOut: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServer:didRequestCompactMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServer:didRequestSendMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServer:didUpdateMailboxSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServerSpaceBecameAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesSyncServiceServerConnectivityChanged: /* Error: Ran out of types for this method. */;

@end
