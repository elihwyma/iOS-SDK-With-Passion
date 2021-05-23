/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString;

@interface WFPocketGetAction : WFAction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;

@end
