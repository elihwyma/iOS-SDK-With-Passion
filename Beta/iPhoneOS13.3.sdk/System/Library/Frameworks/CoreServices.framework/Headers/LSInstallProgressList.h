/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LSInstallProgressList : NSObject

{
    NSMutableDictionary *_progresses;
    NSMutableDictionary *_subscriptions;
}

- (id)init;
- (id)description;
- (id)progressForBundleID:(id)arg1;
- (id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2;
- (void)setProgress:(id)arg1 forBundleID:(id)arg2;
- (void)removeProgressForBundleID:(id)arg1;
- (void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2;
- (void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3;

@end
