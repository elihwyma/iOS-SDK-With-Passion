/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@protocol RPRemoteDisplayXPCDaemonInterface

- (unsigned short)remoteDisplayActivateDiscovery:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDisplayActivateServer:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDisplayActivateSession:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDisplayInvalidateSessionID: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDisplayTryPassword: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDisplaySendEventID:event:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteDisplaySendRequestID:request:options:responseHandler: /* Error: Ran out of types for this method. */;

@end
