/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFStaticItem, HFTimerTriggerBuilder, HUInstructionsItem, HUTriggerConditionEditorItemModule, NSDateComponents, NSMutableDictionary, NSSet;

@interface HUTimerTriggerEditorItemManager : HFItemManager

{
    _Bool _datePickerShown;
    NSDateComponents *_defaultFireTimeComponents;
    HFTimerTriggerBuilder *_timerTriggerBuilder;
    HUTriggerConditionEditorItemModule *_conditionModule;
    HFStaticItem *_sunriseOptionItem;
    HFStaticItem *_sunsetOptionItem;
    HFStaticItem *_timeOptionItem;
    HFStaticItem *_datePickerItem;
    HFStaticItem *_recurrencesItem;
    HUInstructionsItem *_instructionsItem;
    HUInstructionsItem *_recurrencesInstructionsItem;
    NSMutableDictionary *_significantEventToDefaultOffsetMap;
}

@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *sunriseOptionItem;
@property (retain, nonatomic) HFStaticItem *sunsetOptionItem;
@property (retain, nonatomic) HFStaticItem *timeOptionItem;
@property (retain, nonatomic) HFStaticItem *datePickerItem;
@property (retain, nonatomic) HUInstructionsItem *recurrencesInstructionsItem;
@property (retain, nonatomic) HFStaticItem *recurrencesItem;
@property (retain, nonatomic) HUTriggerConditionEditorItemModule *conditionModule;
@property (nonatomic, readonly) NSMutableDictionary *significantEventToDefaultOffsetMap;
@property (retain, nonatomic) NSDateComponents *defaultFireTimeComponents;
@property (nonatomic, readonly) HFTimerTriggerBuilder *timerTriggerBuilder;
@property (nonatomic) _Bool datePickerShown;
@property (nonatomic, readonly) NSSet *dateOptionsItems;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithTimerTriggerBuilder:(id)arg1 delegate:(id)arg2;
- (void)setDefaultOffset:(id)arg1 forSignificantEvent:(id)arg2;
- (id)defaultOffsetForSignificantEvent:(id)arg1;
- (void)updateForSignificantEventOffsetChange;

@end
