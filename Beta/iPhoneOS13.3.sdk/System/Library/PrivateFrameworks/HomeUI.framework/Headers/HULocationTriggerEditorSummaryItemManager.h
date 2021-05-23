/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFLocationTriggerBuilder, HUPresenceUserPickerItemModule, HUTriggerConditionEditorItemModule, NSString;

@interface HULocationTriggerEditorSummaryItemManager : HFItemManager

{
    HFLocationTriggerBuilder *_triggerBuilder;
    HUPresenceUserPickerItemModule *_userPickerModule;
    HUTriggerConditionEditorItemModule *_conditionEditorModule;
    HFItem *_locationItem;
    HFItem *_usersInstructionsItem;
}

@property (retain, nonatomic) HFItem *usersInstructionsItem;
@property (retain, nonatomic) HFItem *locationItem;
@property (nonatomic, readonly) HFLocationTriggerBuilder *triggerBuilder;
@property (nonatomic, readonly) HUPresenceUserPickerItemModule *userPickerModule;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionEditorModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)usersHeaderSectionID;
+ (id)usersListSectionID;
+ (id)usersListFooterSectionID;
+ (id)locationSectionID;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 triggerBuilder:(id)arg2;
- (_Bool)isInstructionsItem:(id)arg1;
- (id)locationEventRegion;
- (_Bool)canAddRegionToTriggerBuilder;
- (void)updateLocationEventWithRegion:(id)arg1;
- (void)userPickerModule:(id)arg1 didUpdatePresenceEvent:(id)arg2;
- (id)_userPickerOptions;
- (_Bool)_canEditLocation;
- (_Bool)_hasCustomLocation;
- (_Bool)canChangeLocation;

@end
