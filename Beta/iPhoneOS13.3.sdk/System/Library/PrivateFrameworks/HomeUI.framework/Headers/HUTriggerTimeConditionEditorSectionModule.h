/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>

@class HFItem, HFTransformItem, NSArray;

@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule

{
    HFItem *_anyTimeOptionItem;
    HFTransformItem *_onlyDayOptionItem;
    HFTransformItem *_onlyNightOptionItem;
    HFTransformItem *_specificTimesOptionItem;
    HFTransformItem *_customOptionItem;
}

@property (retain, nonatomic) HFItem *anyTimeOptionItem;
@property (retain, nonatomic) HFTransformItem *onlyDayOptionItem;
@property (retain, nonatomic) HFTransformItem *onlyNightOptionItem;
@property (retain, nonatomic) HFTransformItem *specificTimesOptionItem;
@property (retain, nonatomic) HFTransformItem *customOptionItem;
@property (nonatomic, readonly) NSArray *optionItems;

- (id)noConditionSummaryTitle;
- (id)conditionTitle;
- (_Bool)conditionIsDisabled;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (_Bool)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)_conditionItemForType:(unsigned long long)arg1;
- (id)_createConditionItemForType:(unsigned long long)arg1;

@end
