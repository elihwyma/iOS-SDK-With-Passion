/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFDictionaryValueVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) NSString *dictionaryKey;

- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionaryKey:(id)arg1;
- (id)processedContentClasses:(id)arg1;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
