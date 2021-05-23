/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, NSDictionary;

@interface AALoginDelegatesRequest : AARequest

{
    NSDictionary *_loginParameters;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2;

@end
