/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TMTumblrAuthenticator : NSObject

{
    NSString *_OAuthConsumerKey;
    NSString *_OAuthConsumerSecret;
    CDUnknownBlockType _threeLeggedOAuthCallback;
    NSString *_threeLeggedOAuthTokenSecret;
}

@property (copy, nonatomic) CDUnknownBlockType threeLeggedOAuthCallback;
@property (copy, nonatomic) NSString *threeLeggedOAuthTokenSecret;
@property (copy, nonatomic) NSString *OAuthConsumerKey;
@property (copy, nonatomic) NSString *OAuthConsumerSecret;

+ (id)sharedInstance;
+ (void)signRequest:(id)arg1 withParameters:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 token:(id)arg5 tokenSecret:(id)arg6;

- (_Bool)handleOpenURL:(id)arg1;
- (void)authenticate:(id)arg1 webView:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)xAuth:(id)arg1 password:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end
