/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAAppleTVRequest.h>

@class NSDictionary;

@interface ATVHighSecurityAccountSendCode : AAAppleTVRequest

{
    NSDictionary *_device;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 device:(id)arg2;

@end
