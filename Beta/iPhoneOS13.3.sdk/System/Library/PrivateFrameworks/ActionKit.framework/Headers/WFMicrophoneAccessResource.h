/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFMicrophoneAccessResource : WFAccessResource

+ (_Bool)isSystemResource;

- (id)name;
- (id)icon;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
