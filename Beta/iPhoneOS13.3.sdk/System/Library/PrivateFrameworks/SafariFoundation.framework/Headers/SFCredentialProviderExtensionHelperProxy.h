/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface SFCredentialProviderExtensionHelperProxy : NSObject

{
    NSXPCConnection *_connection;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_proxyObject;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCredentialProviderExtensionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
