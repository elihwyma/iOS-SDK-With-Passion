/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSKeychain : NSObject

{
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (id)init;
- (void)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getPublicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)createAttestationDataForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteKeychainTokensForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getPublicKeyDataForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)keyCountForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)signData:(id)arg1 reason:(id)arg2 fallback:(id)arg3 cancel:(id)arg4 forAccountIdentifier:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)signData:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
