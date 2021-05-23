/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSCache, NSHashTable, NSMapTable, WFWorkflow;

@protocol OS_dispatch_queue;

@interface WFVariableAvailability : NSObject

{
    _Bool _extensionInputVariableUsed;
    WFWorkflow *_workflow;
    NSMapTable *_providingActionsByVariableName;
    NSMapTable *_variableScopeLevelsByGroupingIdentifier;
    NSMapTable *_variableScopeEndActionsByStartAction;
    NSMapTable *_actionOutputVariableActionsByUUID;
    NSCache *_cachedContentClassesForVariableNameAtIndex;
    NSHashTable *_variableObservers;
    NSObject<OS_dispatch_queue> *_actionOutputWorkQueue;
}

@property (retain, nonatomic) NSMapTable *providingActionsByVariableName;
@property (retain, nonatomic) NSMapTable *variableScopeLevelsByGroupingIdentifier;
@property (retain, nonatomic) NSMapTable *variableScopeEndActionsByStartAction;
@property (retain, nonatomic) NSMapTable *actionOutputVariableActionsByUUID;
@property (retain, nonatomic) NSCache *cachedContentClassesForVariableNameAtIndex;
@property (retain, nonatomic) NSHashTable *variableObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionOutputWorkQueue;
@property (weak, nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) _Bool extensionInputVariableUsed;

+ (_Bool)actionIsEligibleForOutputVariable:(id)arg1;

- (void)invalidateCache;
- (id)initWithWorkflow:(id)arg1;
- (void)populateCache;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (void)addVariableObserver:(id)arg1;
- (void)removeVariableObserver:(id)arg1;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)arg1;
- (id)availableVariableNamesAtIndex:(unsigned long long)arg1;
- (_Bool)areVariablesAvailableAtIndex:(unsigned long long)arg1;
- (_Bool)isVariableWithName:(id)arg1 availableAtIndex:(unsigned long long)arg2;
- (_Bool)isVariableAvailableAtIndex:(unsigned long long)arg1 withActionTest:(CDUnknownBlockType)arg2;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)areActionOutputVariablesAvailableAtIndex:(unsigned long long)arg1;
- (id)availableOutputActionsAtIndex:(unsigned long long)arg1;
- (void)populateActionOutputVariableActionsByUUID;
- (_Bool)isVariableWithOutputUUIDAvailable:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateActionOutputProviderCache;
- (id)actionsProvidingVariableName:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4;
- (id)possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)arg1;
- (void)notifyVariablesChanged;
- (void)notifyContentClassesChanged;
- (void)renameVariable:(id)arg1 to:(id)arg2 fromAction:(id)arg3;
- (void)invalidateContentClassCache;
- (void)actionsDidMove;

@end
