/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface ABRequestHandler : NSObject

{
    struct AuthBrokerAuthenticator *authenticator;
}

- (id)init;
- (void)fetchProxyCredential:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
