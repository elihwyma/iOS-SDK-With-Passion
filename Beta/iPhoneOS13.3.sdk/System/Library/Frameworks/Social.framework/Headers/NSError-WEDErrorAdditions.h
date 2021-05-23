/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSError.h>

@interface NSError (WEDErrorAdditions)

+ (id)APIParameterErrorFromErrorCode:(long long)arg1;
+ (id)APILimitErrorFromErrorCode:(long long)arg1;
+ (id)APIAuthorizationErrorFromErrorCode:(long long)arg1;
+ (id)APIInternalServerErrorFromErrorCode:(long long)arg1;
+ (id)APIUserErrorFromErrorCode:(long long)arg1;
+ (id)APIFakeUserErrorFromErrorCode:(long long)arg1;
+ (id)APIGenericErrorFromErrorCode:(long long)arg1;
+ (id)errorFromTencentWeiboAPIResponseErrorWithType:(long long)arg1 code:(long long)arg2;

- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;

@end
