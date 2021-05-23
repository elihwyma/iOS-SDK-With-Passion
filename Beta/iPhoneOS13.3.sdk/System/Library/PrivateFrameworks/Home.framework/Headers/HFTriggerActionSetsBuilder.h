/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFMutableSetDiff, HFSetDiff, HFTriggerAnonymousActionSetBuilder, HMHome, HMShortcutAction, NSArray, WFHomeWorkflow;

@interface HFTriggerActionSetsBuilder : NSObject

{
    HFTriggerAnonymousActionSetBuilder *_anonymousActionSetBuilder;
    HMHome *_home;
    HFMutableSetDiff *_actionSetBuilders;
    HMShortcutAction *_shortcutAction;
}

@property (retain, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder;
@property (retain, nonatomic) HFMutableSetDiff *actionSetBuilders;
@property (retain, nonatomic) HMShortcutAction *shortcutAction;
@property (nonatomic, readonly) NSArray *allActionSets;
@property (nonatomic, readonly) NSArray *allActionBuilders;
@property (nonatomic, readonly) NSArray *namedActionSets;
@property (nonatomic, readonly) NSArray *anonymousActionBuilder;
@property (nonatomic, readonly) HFSetDiff *namedActionSetsDiff;
@property (nonatomic, readonly) _Bool hasActions;
@property (nonatomic, readonly, getter=areActionsAffectedByEndEvents) _Bool actionsAffectedByEndEvents;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) _Bool isShortcutOwned;
@property (retain, nonatomic) WFHomeWorkflow *homeWorkflow;

- (id)actionSetsSummary;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2;
- (id)_generateSummaryInformation;
- (id)_generateSummaryInformationForShortcutOwnedTrigger;
- (id)_generateSummaryInformationForStandardTrigger;
- (void)_generateStandaloneServices:(id)arg1 andMediaAccessories:(id)arg2;
- (id)_uniqueServiceGroupForServices:(id)arg1;
- (id)mediaAccessoriesForPlaybackAction:(id)arg1;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2 filterEmptyActionSets:(_Bool)arg3;
- (id)_removeDuplicateActionSets:(id)arg1;
- (id)_removeEmptyActionSets:(id)arg1;
- (void)removeActionSetBuilder:(id)arg1;
- (void)addActionSetBuilder:(id)arg1;
- (void)convertToHomeWorkflowActionSetIfNeeded;
- (void)_removeAllNamedActionsSets;
- (void)updateFromTriggerActionSetsBuilder:(id)arg1;
- (void)updateActionSetBuilder:(id)arg1;
- (void)addAnonymousActionBuilder:(id)arg1;
- (void)updateAnonymousActionBuilder:(id)arg1;
- (void)removeAnonymousActionBuilder:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)resetAllActionSets;
- (void)resetActionSetBuilders;
- (void)addActionSetIfNotPresent:(id)arg1;
- (void)removeActionSetIfPresent:(id)arg1;
- (void)convertToHomeWorkflowActionSet:(id)arg1;
- (void)defaultActionsForShortcut;

@end
