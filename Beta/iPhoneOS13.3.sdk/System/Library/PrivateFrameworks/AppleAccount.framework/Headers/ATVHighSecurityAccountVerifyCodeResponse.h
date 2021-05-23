/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSString *errorTitle;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) long long errorCode;

@end
