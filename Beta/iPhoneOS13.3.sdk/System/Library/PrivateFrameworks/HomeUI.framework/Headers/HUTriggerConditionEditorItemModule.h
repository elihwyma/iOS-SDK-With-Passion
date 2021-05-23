/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFConditionCollection, HMHome, HUTriggerConditionEditorExpandingSectionModule, HUTriggerCustomConditionEditorSectionModule, NSSet;

@interface HUTriggerConditionEditorItemModule : HFItemModule

{
    NSSet *_itemProviders;
    HFConditionCollection *_conditionCollection;
    HMHome *_home;
    NSSet *_blacklistedConditionTypes;
    HUTriggerConditionEditorExpandingSectionModule *_timeConditionModule;
    HUTriggerConditionEditorExpandingSectionModule *_locationConditionModule;
    HUTriggerCustomConditionEditorSectionModule *_customConditionsModule;
}

@property (retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *timeConditionModule;
@property (retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *locationConditionModule;
@property (retain, nonatomic) HUTriggerCustomConditionEditorSectionModule *customConditionsModule;
@property (retain, nonatomic) NSSet *itemProviders;
@property (nonatomic, readonly) HFConditionCollection *conditionCollection;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *blacklistedConditionTypes;

- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 conditionCollection:(id)arg3 blacklistedConditionTypes:(id)arg4;
- (id)conditionForOptionItem:(id)arg1;
- (id)_allSectionModules;
- (id)_moduleForConditionOptionItem:(id)arg1;
- (id)_sectionModuleForItem:(id)arg1;
- (void)_reloadConditionsFromConditionCollection;
- (id)_expandingSectionModuleForConditionType:(unsigned long long)arg1;
- (id)_expandingSectionModules;
- (_Bool)_isConditionOptionItem:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_reloadConditionForExpandingSectionModule:(id)arg1 remainingConditions:(id)arg2;
- (_Bool)isConditionOptionItem:(id)arg1;
- (_Bool)doesConditionOptionItemRequireInitialConfiguration:(id)arg1;
- (void)updateCondition:(id)arg1 forOptionItem:(id)arg2;
- (unsigned long long)conditionTypeForItem:(id)arg1;
- (void)conditionCollectionDidChange;
- (_Bool)shouldShowConditionOptionsForType:(unsigned long long)arg1;
- (void)setShowConditionOptions:(_Bool)arg1 forType:(unsigned long long)arg2;
- (void)setSelectedConditionOptionItem:(id)arg1 forType:(unsigned long long)arg2;
- (_Bool)isShowConditionOptionsItem:(id)arg1;
- (void)setCustomConditionEnabled:(_Bool)arg1 forItem:(id)arg2;
- (_Bool)isCustomConditionSwitchItem:(id)arg1;

@end
