/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AASigningSession, ACAccount, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest

{
    NSDictionary *appleIDParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3;
- (id)bodyDictionary;

@end
