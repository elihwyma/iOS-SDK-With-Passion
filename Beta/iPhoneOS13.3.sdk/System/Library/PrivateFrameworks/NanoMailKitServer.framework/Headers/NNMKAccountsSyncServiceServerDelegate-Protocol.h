/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKAccountsSyncServiceServerDelegate <Swift>

- (unsigned short)accountsSyncServiceServer:didSendProtobufSuccessfullyWithIDSIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsSyncServiceServer:didFailSendingProtobufWithIDSIdentifier:errorCode: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsSyncServiceServer:didChangeAccountSourceType: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsSyncServiceServer:didReceivedAccountAuthenticationStatus:requestTime: /* Error: Ran out of types for this method. */;

@end
