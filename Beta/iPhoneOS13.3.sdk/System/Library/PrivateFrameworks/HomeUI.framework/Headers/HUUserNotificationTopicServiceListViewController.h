/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFUserNotificationServiceTopic, HMHome, HUUserNotificationTopicServiceListModuleController;

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController

{
    HMHome *_home;
    HFUserNotificationServiceTopic *_topic;
    HUUserNotificationTopicServiceListModuleController *_moduleController;
}

@property (retain, nonatomic) HUUserNotificationTopicServiceListModuleController *moduleController;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserNotificationServiceTopic *topic;

- (id)initWithHome:(id)arg1 topic:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(_Bool)arg2;

@end
