/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@interface SOKeychainHelper : NSObject

+ (struct __SecIdentity *)identityForUUIDString:(id)arg1;
+ (int)addCredentialsToKeychainWithService:(id)arg1 withUsername:(id)arg2 withPassword:(id)arg3 requireUserPresence:(_Bool)arg4;
+ (int)retrieveCredentialsFromKeychainWithService:(id)arg1 returnedUsername:(id *)arg2 returnedPassword:(id *)arg3;
+ (int)removeCredentialsFromKeychainWithService:(id)arg1;

@end
