/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class LAContext, NSData;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKTokenRefSEP : NSObject

{
    NSData *_ACMContext;
    LAContext *_LAContext;
}

@property (readonly) NSData *ACMContext;
@property (readonly) LAContext *LAContext;

- (id)description;
- (id)accessControlOfObject:(id)arg1 error:(id *)arg2;
- (id)createOrUpdateObject:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (_Bool)deleteObject:(id)arg1 error:(id *)arg2;
- (id)publicKeyOfObject:(id)arg1 error:(id *)arg2;
- (id)keyOperation:(long long)arg1 onObject:(id)arg2 algorithm:(id)arg3 mode:(long long)arg4 in1:(id)arg5 in2:(id)arg6 error:(id *)arg7;
- (id)attestUsingKey:(id)arg1 attestedKey:(id)arg2 nonce:(id)arg3 error:(id *)arg4;
- (_Bool)lifetimeControlKey:(id)arg1 lifetimeControlType:(long long)arg2 error:(id *)arg3;
- (id)initWithTokenID:(id)arg1 LAContext:(id)arg2 testMode:(id)arg3;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;

@end
