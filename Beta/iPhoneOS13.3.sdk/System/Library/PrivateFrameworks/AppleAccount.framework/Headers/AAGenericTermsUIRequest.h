/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, NSDictionary;

@interface AAGenericTermsUIRequest : AARequest

{
    NSDictionary *_requestDictionary;
    ACAccount *_account;
    _Bool _preferPassword;
}

+ (Class)responseClass;

- (id)initWithParameters:(id)arg1;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(_Bool)arg3;

@end
