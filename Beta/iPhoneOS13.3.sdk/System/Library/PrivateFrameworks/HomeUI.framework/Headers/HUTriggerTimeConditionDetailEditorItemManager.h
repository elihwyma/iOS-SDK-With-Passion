/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFTimeRangeCondition;

@interface HUTriggerTimeConditionDetailEditorItemManager : HFItemManager

{
    HFItem *_startConditionPickerItem;
    HFItem *_endConditionPickerItem;
    HFTimeRangeCondition *_rangeCondition;
}

@property (retain, nonatomic) HFItem *startConditionPickerItem;
@property (retain, nonatomic) HFItem *endConditionPickerItem;
@property (retain, nonatomic) HFTimeRangeCondition *rangeCondition;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 rangeCondition:(id)arg2;
- (id)primitiveConditionForPickerItem:(id)arg1;
- (void)setPrimitiveCondition:(id)arg1 forPickerItem:(id)arg2;

@end
