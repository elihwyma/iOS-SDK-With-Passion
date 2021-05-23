/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSError;

@protocol NSXPCProxyCreating;

@interface _SFCredentialStore : NSObject

{
    id _credentialStoreInternal;
    id <NSXPCProxyCreating> _serverConnection;
    NSError *_serverError;
}

+ (id)defaultCredentialStore;
+ (id)_serverConnectionWithError:(id *)arg1;

- (id)_init;
- (void)fetchPasswordCredentialForPersistentIdentifier:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)serverProxyWithResultHandler:(CDUnknownBlockType)arg1;
- (id)serverProxyWithDualResultHandler:(CDUnknownBlockType)arg1;
- (id)serverProxyWithBooleanHandler:(CDUnknownBlockType)arg1;
- (void)addCredential:(id)arg1 withAccessPolicy:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)lookupCredentialsForServiceIdentifiers:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)removeCredentialWithPersistentIdentifier:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)replaceOldCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)replaceCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
