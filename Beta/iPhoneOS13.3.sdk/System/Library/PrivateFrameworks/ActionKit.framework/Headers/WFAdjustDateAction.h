/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFAdjustDateAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)transformDate:(id)arg1 operation:(unsigned long long)arg2;
- (void)finishWithInput:(id)arg1 dateTransform:(CDUnknownBlockType)arg2;

@end
