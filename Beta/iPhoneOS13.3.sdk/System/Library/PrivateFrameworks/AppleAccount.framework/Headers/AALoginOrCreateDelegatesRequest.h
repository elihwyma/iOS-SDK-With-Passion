/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AASigningSession, ACAccount, NSDictionary;

@interface AALoginOrCreateDelegatesRequest : AARequest

{
    ACAccount *_account;
    NSDictionary *_parameters;
    AASigningSession *_signingSession;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 signingSession:(id)arg3;

@end
