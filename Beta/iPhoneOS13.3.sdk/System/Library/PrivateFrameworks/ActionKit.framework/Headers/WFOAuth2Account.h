/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFAccount.h>

@class WFOAuth2Credential;

@interface WFOAuth2Account : WFAccount

{
    WFOAuth2Credential *_credential;
}

@property (copy, nonatomic) WFOAuth2Credential *credential;

+ (id)clientID;
+ (id)responseType;
+ (id)scopes;
+ (id)sessionManager;
+ (id)clientSecret;
+ (id)redirectURI;
+ (id)migrate:(id)arg1;
+ (id)accountWithCredential:(id)arg1;

- (_Bool)isValid;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
