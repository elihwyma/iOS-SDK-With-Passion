/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@interface SOSmartcard : NSObject

+ (id)searchForCachedIdentityWithSerial:(struct __CFData *)arg1 withIssuer:(struct __CFData *)arg2 withTokenID:(id)arg3;
+ (struct __SecIdentity *)getLocalAuthIdentityForCert:(id)arg1 withLAContext:(id)arg2;
+ (int)getIdentityForPersistentRef:(struct __CFData *)arg1 identityToReturn:(struct __SecIdentity **)arg2;
+ (_Bool)pollSmartcardForIdentityWithSerialNumber:(id)arg1 withIssuer:(id)arg2 withTokenID:(id)arg3;

@end
