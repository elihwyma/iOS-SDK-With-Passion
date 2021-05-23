/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFPinboardAccessResource : WFAccessResource

+ (id)pinboardUsername;
+ (id)pinboardPassword;
+ (id)pinboardToken;

- (id)name;
- (id)username;
- (id)icon;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (_Bool)canLogOut;
- (void)logOut;

@end
