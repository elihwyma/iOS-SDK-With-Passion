/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFCameraSmartDetectionCondition, HFConditionCollection, HFItemProvider, HFStaticItem, NSSet, NSString, UIViewController;

@interface HUCameraSmartDetectionSettingsModule : HFItemModule

{
    NSSet *_itemProviders;
    NSSet *_cameraProfiles;
    HFConditionCollection *_conditionCollection;
    HFStaticItem *_anyMotionDetectedItem;
    HFStaticItem *_specificMotionDetectedItem;
    HFItemProvider *_motionDetectionSettingsItemProvider;
    HFItemProvider *_motionDetectionOffOnItemProvider;
    unsigned long long _settingsContext;
    HFCameraSmartDetectionCondition *_condition;
}

@property (nonatomic, readonly) HFItemProvider *motionDetectionSettingsItemProvider;
@property (nonatomic, readonly) HFItemProvider *motionDetectionOffOnItemProvider;
@property (nonatomic, readonly) unsigned long long settingsContext;
@property (retain, nonatomic) HFCameraSmartDetectionCondition *condition;
@property (retain, nonatomic) HFStaticItem *anyMotionDetectedItem;
@property (retain, nonatomic) HFStaticItem *specificMotionDetectedItem;
@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) HFConditionCollection *conditionCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (_Bool)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 conditionCollection:(id)arg3 settingsContext:(unsigned long long)arg4;
- (id)updateMotionDetectionSettingForItem:(id)arg1;
- (void)_dispatchUpdateForCameraProfile:(id)arg1;
- (id)_preferredConditionFromConditions:(id)arg1;
- (id)enableSmartMotion:(_Bool)arg1 forItem:(id)arg2;
- (id)updateMotionDetectionSetting:(unsigned long long)arg1;

@end
