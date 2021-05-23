/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@protocol RPCompanionLinkXPCServerInterface

- (unsigned short)companionLinkActivateClient:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkTryPassword: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkRegisterEventID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkDeregisterEventID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkSendEventID:event:destinationID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkActivateAssertion:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkInvalidateAssertion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkUpdateClient: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkRegisterProfileID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkDeregisterProfileID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkRegisterRequestID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkDeregisterRequestID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)companionLinkSendRequestID:request:destinationID:options:responseHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcDiscoveryActivate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcDiscoveryUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcServerActivate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcServerUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcSessionActivate:completion: /* Error: Ran out of types for this method. */;

@end
