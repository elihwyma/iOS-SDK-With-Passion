/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFResource.h>

@interface WFUserInteractionResource : WFResource

+ (_Bool)isSingleton;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)refreshAvailability;

@end
