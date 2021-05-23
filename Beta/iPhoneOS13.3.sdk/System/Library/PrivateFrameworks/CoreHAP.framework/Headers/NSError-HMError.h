/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <Foundation/NSError.h>

@interface NSError (HMError)

@property (nonatomic, readonly, getter=isHMError) _Bool hmError;

+ (id)errorWithOSStatus:(int)arg1;
+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmInternalErrorWithCode:(long long)arg1;
+ (id)hmPrivateErrorWithCode:(long long)arg1;
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hapErrorWithcode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;

- (_Bool)isHAPError;

@end
