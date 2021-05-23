/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFSwitchParameter.h>

@interface WFTumblrComposeInAppParameter : WFSwitchParameter

- (_Bool)isHidden;
- (_Bool)parameterStateIsValid:(id)arg1;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;

@end
