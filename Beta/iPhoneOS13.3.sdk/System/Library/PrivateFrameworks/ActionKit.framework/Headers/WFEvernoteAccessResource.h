/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFEvernoteAccessResource : WFAccessResource

+ (id)evernoteSession;
+ (id)evernoteCallbackScheme;

- (void)dealloc;
- (id)username;
- (id)initWithDefinition:(id)arg1;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (_Bool)canLogOut;
- (void)logOut;

@end
