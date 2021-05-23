/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariable.h>

@class NSString, WFAction;

@protocol WFVariableProvider;

@interface WFActionOutputVariable : WFVariable

{
    id <WFVariableProvider> _variableProvider;
    WFAction *_action;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *outputUUID;
@property (weak, nonatomic, readonly) WFAction *action;

- (id)UUID;
- (_Bool)isAvailable;
- (id)icon;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
- (id)variableProvider;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;
- (id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;
- (id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4;

@end
