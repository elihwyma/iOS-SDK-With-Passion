/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AASigningSession, ACAccount, NSDictionary;

@interface AASetupAssistantSetupDelegatesRequest : AARequest

{
    NSDictionary *setupParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 withSetupParameters:(id)arg2 signingSession:(id)arg3;

@end
