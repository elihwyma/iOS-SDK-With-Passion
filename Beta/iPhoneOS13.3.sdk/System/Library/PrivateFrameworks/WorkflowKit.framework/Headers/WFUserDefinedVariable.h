/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariable.h>

@class NSString;

@protocol WFVariableProvider;

@interface WFUserDefinedVariable : WFVariable

{
    id <WFVariableProvider> _variableProvider;
}

@property (nonatomic, readonly) NSString *name;

- (id)UUID;
- (_Bool)isAvailable;
- (id)icon;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
- (id)variableProvider;
- (_Bool)requiresModernVariableSupport;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;
- (id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;

@end
