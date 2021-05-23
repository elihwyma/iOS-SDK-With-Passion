/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSError.h>

@interface NSError (HMIError)

+ (id)hmiPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmiPrivateErrorWithCode:(long long)arg1;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)_hmiErrorWithCode:(unsigned long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmiErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmiErrorWithCode:(long long)arg1;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;

@end
