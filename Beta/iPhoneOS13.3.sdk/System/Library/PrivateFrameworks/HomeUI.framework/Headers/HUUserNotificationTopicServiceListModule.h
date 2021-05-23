/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFTransformItemProvider, HFUserNotificationServiceTopic, HMHome;

@interface HUUserNotificationTopicServiceListModule : HFItemModule

{
    HMHome *_home;
    HFUserNotificationServiceTopic *_topic;
    struct HFTransformItemProvider *_transformServiceItemProvider;
    struct HFTransformItemProvider *_transformCameraItemProvider;
}

@property (nonatomic, readonly) HFTransformItemProvider *transformServiceItemProvider;
@property (nonatomic, readonly) HFTransformItemProvider *transformCameraItemProvider;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserNotificationServiceTopic *topic;

+ (id)_createTransformItemForItem:(id)arg1 notificationSettingsProvider:(id)arg2;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 topic:(id)arg3;
- (id)serviceLikeItemForItem:(id)arg1;

@end
