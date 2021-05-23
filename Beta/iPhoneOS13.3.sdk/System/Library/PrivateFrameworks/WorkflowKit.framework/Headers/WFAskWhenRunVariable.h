/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariable.h>

@interface WFAskWhenRunVariable : WFVariable

- (id)init;
- (id)name;
- (_Bool)isAvailable;
- (id)icon;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)supportsAggrandizements;
- (_Bool)requiresModernVariableSupport;

@end
