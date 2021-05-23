/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>

@class HFItem, HFTransformItem, NSString;

@interface HUTriggerLocationConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule

{
    HFItem *_anyLocationOptionItem;
    HFTransformItem *_anyUserAtHomeOptionItem;
    HFTransformItem *_currentUserAtHomeOptionItem;
    HFTransformItem *_noUserAtHomeOptionItem;
    HFTransformItem *_currentUserNotAtHomeOptionItem;
    HFTransformItem *_customOptionItem;
}

@property (retain, nonatomic) HFItem *anyLocationOptionItem;
@property (retain, nonatomic) HFTransformItem *anyUserAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *currentUserAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *noUserAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *currentUserNotAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *customOptionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3;
- (id)noConditionSummaryTitle;
- (id)conditionTitle;
- (_Bool)conditionIsDisabled;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)_conditionItemForPresenceEvent:(id)arg1;
- (id)_createConditionItemForPresenceEventType:(unsigned long long)arg1 userType:(unsigned long long)arg2;

@end
