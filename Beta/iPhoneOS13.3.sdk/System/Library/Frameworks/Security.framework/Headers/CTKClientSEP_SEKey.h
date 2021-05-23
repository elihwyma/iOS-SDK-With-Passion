/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_SEKey : NSObject

{
    long long _SEKeyType;
    struct aks_ref_key_s *_AKSRefKey;
    struct __SecAccessControl *_accessControl;
    id _keyType;
    struct __SecKey *_key;
}

@property (readonly) struct __SecKey *key;
@property (readonly) struct __SecAccessControl *accessControl;
@property (readonly) id objectID;
@property (readonly) id keyType;
@property (readonly) NSDictionary *attributes;

+ (_Bool)hasSystemUIK;
+ (id)protectionForKeyClass:(int)arg1;
+ (int)keyClassForProtection:(id)arg1;
+ (_Bool)hasSEP;
+ (void)setupKeybagForTesting:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)error:(id *)arg1 withAKSReturn:(int)arg2 ACMContext:(id)arg3 AKSOperation:(id)arg4 message:(id)arg5;
- (id)parametersWithContext:(id)arg1;
- (id)initWithKeyType:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 applePayEnabled:(_Bool)arg3 ACMContext:(id)arg4 error:(id *)arg5;
- (_Bool)deleteWithACMContext:(id)arg1 error:(id *)arg2;
- (id)initWithObjectID:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)publicKeyWithError:(id *)arg1;
- (id)signDigest:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)computeSharedSecret:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)recryptData:(id)arg1 attributes:(id)arg2 ACMContext:(id)arg3 error:(id *)arg4;
- (id)attestKey:(id)arg1 nonce:(id)arg2 ACMContext:(id)arg3 error:(id *)arg4;
- (_Bool)lifetimeControlWithType:(long long)arg1 ACMContext:(id)arg2 error:(id *)arg3;

@end
