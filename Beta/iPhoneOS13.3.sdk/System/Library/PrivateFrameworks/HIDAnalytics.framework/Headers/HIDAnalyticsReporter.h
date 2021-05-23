/*
 Image: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDAnalyticsReporter : NSObject

{
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)logAnalyticsEvent:(id)arg1;
- (id)createBucketData:(id)arg1 fieldvalue:(id)arg2 fieldDescription:(id)arg3;
- (void)logAnalyticsEvent:(id)arg1 eventDescription:(id)arg2 eventValue:(id)arg3;
- (void)registerEvent:(id)arg1;
- (void)unregisterEvent:(id)arg1;
- (void)dispatchAnalyticsForEvent:(id)arg1;

@end
