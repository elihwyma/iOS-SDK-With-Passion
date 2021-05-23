/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFTumblrAccessResource : WFAccessResource

{
    NSString *_OAuthToken;
    NSString *_OAuthTokenSecret;
}

@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;

+ (id)tumblrOAuthToken;
+ (void)setTumblrOAuthToken:(id)arg1;
+ (id)tumblrOAuthTokenSecret;
+ (void)setTumblrOAuthTokenSecret:(id)arg1;

- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (_Bool)canLogOut;
- (void)logOut;

@end
