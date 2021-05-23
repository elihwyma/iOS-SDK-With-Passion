/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableAggrandizement.h>

@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) Class coercionItemClass;

- (id)initWithDictionary:(id)arg1;
- (id)processedContentClasses:(id)arg1;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoercionItemClass:(Class)arg1;
- (id)coercionItemClasses;

@end
