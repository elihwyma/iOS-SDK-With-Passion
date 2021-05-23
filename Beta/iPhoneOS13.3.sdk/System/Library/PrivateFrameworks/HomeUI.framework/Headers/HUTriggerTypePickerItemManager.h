/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFStaticItem, HUInstructionsItem;

@interface HUTriggerTypePickerItemManager : HFItemManager

{
    HFStaticItem *_leavingLocationTriggerItem;
    HFStaticItem *_arrivingAtLocationTriggerItem;
    HFStaticItem *_timerTriggerItem;
    HFStaticItem *_characteristicTriggerItem;
    HFStaticItem *_alarmTriggerItem;
    HUInstructionsItem *_instructionsItem;
}

@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *leavingLocationTriggerItem;
@property (retain, nonatomic) HFStaticItem *arrivingAtLocationTriggerItem;
@property (retain, nonatomic) HFStaticItem *timerTriggerItem;
@property (retain, nonatomic) HFStaticItem *characteristicTriggerItem;
@property (retain, nonatomic) HFStaticItem *alarmTriggerItem;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_createLocationItemForType:(unsigned long long)arg1;
- (id)_createTimeItem;
- (id)_createCharacteristicItemForSource:(unsigned long long)arg1;
- (_Bool)_hasMinimumRequiredTriggerableServices:(unsigned long long)arg1;
- (_Bool)_hasMinimumRequiredTriggeringServices:(long long)arg1;

@end
