/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFOAuth2Account.h>

@interface WFImgurAccount : WFOAuth2Account

+ (id)clientID;
+ (id)responseType;
+ (id)sessionManager;
+ (id)clientSecret;
+ (id)localizedServiceName;
+ (id)serviceID;
+ (id)redirectURI;

- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
