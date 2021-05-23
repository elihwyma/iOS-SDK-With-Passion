/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItem, HFUserNotificationServiceSettings, HUCameraSmartDetectionSettingsModule, HUTriggerConditionEditorItemModule;

@protocol HFServiceLikeItem, HFUserNotificationServiceSettingsProviding;

@interface HUStatusAndNotificationsItemManager : HFItemManager

{
    _Bool _showStatusSection;
    _Bool _showsCameraSnapshotSection;
    _Bool _showsMotionNotificationSection;
    _Bool _showsCameraSmartNotificationSection;
    _Bool _showsTriggerConditionSection;
    _Bool _showsDoorbellSection;
    _Bool _showsSmartActivitySection;
    _Bool _showsCameraStatusChangeSection;
    _Bool _serviceItemBelongsToCamera;
    HFStaticItem *_includeInStatusItem;
    HFStaticItem *_allowNotificationsItem;
    HFStaticItem *_allowMotionNotificationsItem;
    HFStaticItem *_allowCameraSnapshotsItem;
    HFStaticItem *_allowDoorbellNotificationsItem;
    HFStaticItem *_allowActivityNotificationsItem;
    HFStaticItem *_allowCameraStatusChangesItem;
    HFItem<HFServiceLikeItem> *_serviceItem;
    HUTriggerConditionEditorItemModule *_conditionModule;
    HUCameraSmartDetectionSettingsModule *_cameraSmartDetectionSettingsModule;
}

@property (retain, nonatomic) HFStaticItem *includeInStatusItem;
@property (retain, nonatomic) HFStaticItem *allowNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowMotionNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowCameraSnapshotsItem;
@property (retain, nonatomic) HFStaticItem *allowDoorbellNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowActivityNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowCameraStatusChangesItem;
@property (nonatomic) _Bool showsCameraSnapshotSection;
@property (nonatomic) _Bool showsMotionNotificationSection;
@property (nonatomic) _Bool showsCameraSmartNotificationSection;
@property (nonatomic) _Bool showsTriggerConditionSection;
@property (nonatomic) _Bool showsDoorbellSection;
@property (nonatomic) _Bool showsSmartActivitySection;
@property (nonatomic) _Bool showsCameraStatusChangeSection;
@property (nonatomic) _Bool serviceItemBelongsToCamera;
@property (nonatomic, readonly) id <HFUserNotificationServiceSettingsProviding> notificationSettingsProvider;
@property (nonatomic, readonly) HFUserNotificationServiceSettings *notificationSettings;
@property (nonatomic) _Bool showStatusSection;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceItem;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionModule;
@property (nonatomic, readonly) HUCameraSmartDetectionSettingsModule *cameraSmartDetectionSettingsModule;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithServiceItem:(id)arg1 delegate:(id)arg2 home:(id)arg3;
- (id)homeStatusVisibleObject;
- (id)_updateNotificationSettings:(id)arg1;
- (id)updateAllowNotifications:(_Bool)arg1;
- (id)updateAllowMotionNotifications:(_Bool)arg1;
- (id)updateAllowDoorbellNotifications:(_Bool)arg1;
- (id)updateAllowSnapshotsInNotifications:(_Bool)arg1;
- (id)updateAllowSmartActivityNotifications:(_Bool)arg1;
- (id)updateAllowCameraStatusChangeNotifications:(_Bool)arg1;
- (id)updateNotificationCondition:(id)arg1;
- (id)updateCameraSmartNotificationCondition:(id)arg1;

@end
