/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface _AABasicGetRequest : AARequest

{
    ACAccount *_account;
}

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;

@end
