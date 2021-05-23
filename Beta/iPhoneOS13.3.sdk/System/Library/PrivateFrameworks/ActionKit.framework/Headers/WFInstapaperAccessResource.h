/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFInstapaperAccessResource : WFAccessResource

+ (void)initialize;
+ (id)instapaperUsername;
+ (id)instapaperToken;
+ (id)instapaperTokenSecret;

- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (_Bool)canLogOut;
- (void)logOut;

@end
