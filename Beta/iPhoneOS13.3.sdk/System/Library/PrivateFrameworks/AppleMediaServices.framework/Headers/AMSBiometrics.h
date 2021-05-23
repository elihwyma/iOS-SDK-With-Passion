/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSBiometrics : NSObject

+ (long long)type;
+ (long long)state;
+ (long long)deviceState;
+ (id)setState:(long long)arg1 forAccount:(id)arg2;
+ (id)disableForAccount:(id)arg1;
+ (id)headersWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3;
+ (_Bool)deleteKeysWithError:(id *)arg1;
+ (id)ACLVersionForConstraints:(id)arg1;
+ (_Bool)isActionSupported:(long long)arg1 withConstraints:(id)arg2;
+ (id)minimumACLVersionForAction:(long long)arg1;
+ (_Bool)_deleteKeysWithOptions:(id)arg1 error:(id *)arg2;
+ (id)signChallenge:(id)arg1 withAccount:(id)arg2 clientInfo:(id)arg3 options:(id)arg4;
+ (id)_stateHeaderValueForAccount:(id)arg1;
+ (long long)stateForAccount:(id)arg1;
+ (void)setDeviceState:(long long)arg1;
+ (id)ACLVersionForAccessControl:(struct __SecAccessControl *)arg1;
+ (id)handleResponse:(id)arg1 session:(id)arg2 taskInfo:(id)arg3 shouldFallbackToPassword:(_Bool *)arg4;
+ (_Bool)isActionSupported:(long long)arg1 withAccessControl:(struct __SecAccessControl *)arg2;

@end
