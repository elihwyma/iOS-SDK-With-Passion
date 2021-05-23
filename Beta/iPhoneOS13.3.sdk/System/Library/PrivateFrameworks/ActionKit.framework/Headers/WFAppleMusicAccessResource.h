/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFAppleMusicAccessResource : WFAccessResource

+ (_Bool)isSystemResource;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
