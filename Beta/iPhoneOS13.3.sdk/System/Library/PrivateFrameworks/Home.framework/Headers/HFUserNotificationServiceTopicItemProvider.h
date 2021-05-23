/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSSet *_topicItems;
}

@property (copy, nonatomic) NSSet *topicItems;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) HMHome *home;

- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
