/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItem, HFStaticItemProvider, HFTriggerBuilder, HFTriggerDurationSummaryItem, HUShortcutItem, HUTriggerActionFlow, HUTriggerBuilderItem;

@interface HUTriggerSummaryItemManager : HFItemManager

{
    _Bool _durationPickerShown;
    HFTriggerBuilder *_triggerBuilder;
    HUTriggerActionFlow *_currentFlow;
    HFStaticItemProvider *_unsupportedItemProvider;
    HFItem *_serviceActionsInstructionItem;
    HFItem *_enableItem;
    HFItem *_mediaRowItem;
    HFItem *_testTriggerItem;
    HFItem *_addActionItem;
    HFItem *_deleteTriggerItem;
    HFStaticItem *_actionSetsGridItem;
    HFStaticItem *_serviceActionsGridItem;
    HUShortcutItem *_shortcutItem;
    HFTriggerDurationSummaryItem *_durationSummaryItem;
    HFItem *_durationPickerItem;
    HFItem *_durationFooterItem;
    HUTriggerBuilderItem *_triggerBuilderItem;
    HFItem *_triggersInstructionItem;
    HFItem *_actionSetsInstructionItem;
    HFItem *_shortcutsInstructionItem;
    HFItem *_mediaInstructionsItem;
    HFStaticItemProvider *_staticItemProvider;
}

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HUTriggerActionFlow *currentFlow;
@property (retain, nonatomic) HUTriggerBuilderItem *triggerBuilderItem;
@property (retain, nonatomic) HFItem *triggersInstructionItem;
@property (retain, nonatomic) HFItem *actionSetsInstructionItem;
@property (retain, nonatomic) HFItem *shortcutsInstructionItem;
@property (retain, nonatomic) HUShortcutItem *shortcutItem;
@property (retain, nonatomic) HFItem *serviceActionsInstructionItem;
@property (retain, nonatomic) HFItem *enableItem;
@property (retain, nonatomic) HFItem *mediaRowItem;
@property (retain, nonatomic) HFItem *mediaInstructionsItem;
@property (retain, nonatomic) HFItem *testTriggerItem;
@property (retain, nonatomic) HFItem *addActionItem;
@property (retain, nonatomic) HFItem *deleteTriggerItem;
@property (retain, nonatomic) HFStaticItem *actionSetsGridItem;
@property (retain, nonatomic) HFStaticItem *serviceActionsGridItem;
@property (retain, nonatomic) HFTriggerDurationSummaryItem *durationSummaryItem;
@property (retain, nonatomic) HFItem *durationPickerItem;
@property (retain, nonatomic) HFItem *durationFooterItem;
@property (retain, nonatomic) HFStaticItemProvider *unsupportedItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (nonatomic) _Bool durationPickerShown;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (_Bool)_isInEditMode;
- (id)_buildItemProvidersForHome:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;
- (void)triggerBuilderDidChange;
- (id)instructionSections;
- (long long)serviceActionsSection;
- (long long)actionSetsSection;
- (id)_currentSectionIdentifiers;
- (_Bool)_showTriggerSummary;
- (id)_unsupportedTriggers;
- (id)_buildShortcutOwnedTriggerItemProvidersForHome:(id)arg1;
- (id)_buildStandardTriggerItemProvidersForHome:(id)arg1;
- (_Bool)_showEnableSwitch;
- (_Bool)_showActionSetsInstructionItem;
- (_Bool)_shouldShowTestItem;
- (_Bool)_shouldShowDeleteItem;
- (id)_triggerTestActionsInstructionDescription;
- (id)_triggerServiceActionsInstructionDescription;
- (id)_triggerDeleteInstructionItemString;
- (_Bool)_shouldShowDurationItems;
- (id)_itemsToHideForStandardTriggerInSet:(id)arg1;
- (id)_currentSectionIdentifiersForShortcutOwnedTriggers;
- (id)_currentSectionIdentifiersForStandardTriggers;
- (long long)unsupportedItemSectionIndex;

@end
