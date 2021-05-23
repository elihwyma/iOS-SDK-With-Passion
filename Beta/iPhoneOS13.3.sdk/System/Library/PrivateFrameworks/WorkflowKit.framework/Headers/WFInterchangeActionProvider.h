/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFActionProvider.h>

@interface WFInterchangeActionProvider : WFActionProvider

- (void)updateCache:(CDUnknownBlockType)arg1;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1;
- (id)actionWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (void)deleteCache;

@end
