/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/ATVHighSecurityAccountSendCode.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode

{
    NSString *_hsaCode;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3;

@end
