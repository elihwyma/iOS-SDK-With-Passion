/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAAddEmailUIRequest : AARequest

{
    ACAccount *_account;
}

@property (retain, nonatomic) ACAccount *account;

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 account:(id)arg2;

@end
