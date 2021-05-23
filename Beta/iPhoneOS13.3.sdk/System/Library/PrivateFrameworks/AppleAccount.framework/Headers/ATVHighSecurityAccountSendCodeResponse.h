/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse

@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSDictionary *userDisplayStrings;
@property (nonatomic, readonly) NSString *errorTitle;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) long long errorCode;

@end
