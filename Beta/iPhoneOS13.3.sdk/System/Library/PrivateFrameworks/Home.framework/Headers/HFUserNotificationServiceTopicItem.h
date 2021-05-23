/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFUserNotificationServiceTopic, HMHome;

@interface HFUserNotificationServiceTopicItem : HFItem

{
    HMHome *_home;
    HFUserNotificationServiceTopic *_topic;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserNotificationServiceTopic *topic;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 topic:(id)arg2;

@end
