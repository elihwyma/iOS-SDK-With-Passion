/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@protocol AKAuthorizationDaemonProtocol

- (unsigned short)performAuthorization:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performAuthorizationWithContext:withUserProvidedInformation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getCredentialStateForRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPresentationContextForRequestContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAppleIDAuthorizationURLSetWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAppleOwnedDomainSetWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)continueFetchingIconForRequestContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)establishConnectionWithNotificationHandlerEndpoint:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startDiscoveryWithCompletion: /* Error: Ran out of types for this method. */;

@end
