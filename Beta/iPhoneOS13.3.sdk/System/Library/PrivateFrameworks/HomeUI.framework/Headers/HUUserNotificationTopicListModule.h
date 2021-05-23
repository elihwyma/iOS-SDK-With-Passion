/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFUserNotificationServiceTopicItemProvider, HMHome;

@interface HUUserNotificationTopicListModule : HFItemModule

{
    HMHome *_home;
    HFUserNotificationServiceTopicItemProvider *_notificationTopicItemProvider;
}

@property (nonatomic, readonly) HFUserNotificationServiceTopicItemProvider *notificationTopicItemProvider;
@property (nonatomic, readonly) HMHome *home;

+ (id)sectionID;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (void)_buildItemProviders;
- (id)topicForItem:(id)arg1;

@end
