/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSData, NSDictionary, TKClientTokenSession;

@interface TKClientTokenObject : NSObject

{
    id _accessControlRef;
    TKClientTokenSession *_session;
    NSData *_objectID;
    NSData *_accessControl;
    NSData *_value;
    NSData *_publicKey;
    NSDictionary *_keychainAttributes;
}

@property (nonatomic, readonly) TKClientTokenSession *session;
@property (nonatomic, readonly) NSData *objectID;
@property (nonatomic, readonly) NSData *accessControl;
@property (nonatomic, readonly) struct __SecAccessControl *accessControlRef;
@property (nonatomic, readonly) NSData *value;
@property (nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly) NSDictionary *keychainAttributes;

- (id)operation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id *)arg5;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;
- (_Bool)bumpKeyWithError:(id *)arg1;
- (_Bool)commitKeyWithError:(id *)arg1;
- (_Bool)deleteWithError:(id *)arg1;
- (id)sign:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)exchangeKey:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)operationResult:(id)arg1 error:(id *)arg2;
- (id)initWithSession:(id)arg1 objectID:(id)arg2 attributes:(id)arg3;
- (id)decrypt:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id *)arg4;

@end
