/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariable.h>

@interface WFClipboardVariable : WFVariable

+ (void)setBackgroundClipboardRetriever:(CDUnknownBlockType)arg1;

- (id)name;
- (_Bool)isAvailable;
- (id)icon;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
- (id)initWithAggrandizements:(id)arg1;
- (_Bool)requiresModernVariableSupport;

@end
