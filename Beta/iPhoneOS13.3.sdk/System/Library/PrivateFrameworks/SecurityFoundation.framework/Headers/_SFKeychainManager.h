/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class _SFCredentialStore;

@protocol OS_dispatch_queue;

@interface _SFKeychainManager : NSObject

{
    _SFCredentialStore *_credentialStore;
    NSObject<OS_dispatch_queue> *_keychainManagerQueue;
    NSObject<OS_dispatch_queue> *_keychainReplyQueue;
}

@property (retain) _SFCredentialStore *credentialStore;
@property (retain) NSObject<OS_dispatch_queue> *keychainManagerQueue;
@property (retain) NSObject<OS_dispatch_queue> *keychainReplyQueue;

+ (id)defaultManager;
+ (id)defaultOverCommitManager;

- (id)initManager;
- (id)initOverCommitManager;
- (id)_symmetricKeyAttributesForIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary *)_commonKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary *)_privateKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary *)_publicKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary *)_certificateAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2;
- (void)setKey:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)setData:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)keyForIdentifier:(id)arg1 specifier:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)identityForIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)dataForIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)keysFilteredBy:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)identitiesFilteredBy:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removeItemWithIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
