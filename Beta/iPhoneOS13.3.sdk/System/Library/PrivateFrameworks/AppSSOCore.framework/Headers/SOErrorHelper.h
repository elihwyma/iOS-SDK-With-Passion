/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@interface SOErrorHelper : NSObject

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (_Bool)error:(id)arg1 hasCode:(long long)arg2;
+ (void)raiseExceptionOnError:(id)arg1;
+ (id)internalErrorWithMessage:(id)arg1;
+ (id)parameterErrorWithMessage:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 moreInfo:(id)arg3;
+ (id)silentInternalErrorWithMessage:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3;
+ (id)errorWithCode:(long long)arg1 subcode:(long long)arg2 message:(id)arg3;
+ (id)missingEntitlementError:(id)arg1;
+ (id)errorNotSupported;
+ (_Bool)error:(id)arg1 hasCode:(long long)arg2 subcode:(long long)arg3;
+ (id)invalidURLError:(id)arg1;
+ (id)doNotHandleBreakingRecursionWithCallerBundleIdentifier:(id)arg1;

@end
