/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAiCloudTermsAgreeRequest : AARequest

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    _Bool _preferPassword;
}

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) _Bool preferPassword;

- (id)urlRequest;
- (id)initWithURLString:(id)arg1 account:(id)arg2;

@end
