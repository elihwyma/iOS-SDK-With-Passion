/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;

@interface WFExtensionInputVariable : WFVariable

{
    id <WFVariableProvider> _variableProvider;
}

- (id)name;
- (_Bool)isAvailable;
- (id)icon;
- (id)initWithVariableProvider:(id)arg1 aggrandizements:(id)arg2;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
- (id)variableProvider;

@end
