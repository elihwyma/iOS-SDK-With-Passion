/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSError.h>

@interface NSError (WFAdditions)

+ (id)wf_errorWithCode:(unsigned long long)arg1;
+ (id)wf_errorWithCode:(unsigned long long)arg1 encapsulatedError:(id)arg2 userInfo:(id)arg3;
+ (id)wf_errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;

@end
