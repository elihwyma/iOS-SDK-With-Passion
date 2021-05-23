/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFOAuth2Account.h>

@class NSString;

@interface WFSlackAccount : WFOAuth2Account

{
    NSString *_username;
    NSString *_teamName;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *teamName;

+ (id)clientID;
+ (id)scopes;
+ (id)sessionManager;
+ (id)clientSecret;
+ (id)localizedServiceName;
+ (id)serviceID;
+ (_Bool)allowsMultipleAccounts;
+ (id)redirectURI;

- (id)localizedName;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
