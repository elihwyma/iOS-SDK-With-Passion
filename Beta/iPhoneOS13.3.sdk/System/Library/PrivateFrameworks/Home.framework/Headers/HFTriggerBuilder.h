/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFConditionCollection, HFDurationEventBuilder, HFMutableSetDiff, HFTriggerActionSetsBuilder, HMTrigger, NSArray, NSString;

@protocol HFTriggerBuilderContextProviding;

@interface HFTriggerBuilder : HFItemBuilder

{
    _Bool _enabled;
    NSString *_name;
    NSString *_displayName;
    HFTriggerActionSetsBuilder *_triggerActionSets;
    id <HFTriggerBuilderContextProviding> _context;
    HFConditionCollection *_conditionCollection;
    HFMutableSetDiff *_endEventBuildersDiff;
}

@property (retain, nonatomic) HFTriggerActionSetsBuilder *triggerActionSets;
@property (retain, nonatomic) HFMutableSetDiff *endEventBuildersDiff;
@property (retain, nonatomic) id <HFTriggerBuilderContextProviding> context;
@property (retain, nonatomic) HFConditionCollection *conditionCollection;
@property (nonatomic, readonly) _Bool supportsConditions;
@property (nonatomic, readonly) _Bool supportsEndEvents;
@property (nonatomic, readonly) HMTrigger *trigger;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) NSArray *endEventBuilders;
@property (nonatomic, readonly) _Bool requiresConfirmationToRun;
@property (nonatomic, readonly) _Bool secureActionsRequireConfirmationToRun;
@property (nonatomic, readonly) _Bool requiresLocationServicesAuthorization;
@property (nonatomic, readonly) _Bool requiresHomeHub;
@property (nonatomic, readonly) _Bool requiresUpdatedHomeHub;
@property (nonatomic, readonly) _Bool requiresFMFDeviceToRun;
@property (nonatomic, readonly, getter=areActionsAffectedByEndEvents) _Bool actionsAffectedByEndEvents;
@property (nonatomic, readonly) _Bool isShortcutOwned;
@property (nonatomic, readonly) HFDurationEventBuilder *designatedDurationEventBuilder;

+ (Class)homeKitRepresentationClass;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3;

- (void)setTrigger:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)_updateEnabledState;
- (id)_updateName;
- (void)setEndEvent:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)_performValidation;
- (id)commitItem;
- (_Bool)markTriggerAsHomeAppCreated;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)deleteTrigger;
- (void)setMarkTriggerAsHomeAppCreated:(_Bool)arg1;
- (id)replaceCurrentTriggerWithTrigger:(id)arg1;
- (id)initWithHome:(id)arg1 context:(id)arg2;
- (void)removeEndEventBuilder:(id)arg1;
- (void)removeAllEndEventBuilders;
- (void)addEndEventBuilder:(id)arg1;
- (id)_deleteTrigger:(id)arg1 fromHome:(id)arg2;
- (id)_commitAddTriggerToHome:(id)arg1;
- (id)_updateAnonymousActionSet;
- (id)_updateActionSets;
- (id)_updateConditions;
- (id)_updateEndEvents;
- (id)_uniquelyRenameTrigger:(id)arg1 pendingReplaceByNewTrigger:(id)arg2;
- (void)_didReplaceBackingTrigger;
- (void)updateEndEventBuilder:(id)arg1;

@end
