/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface SASAnalytics : NSObject

{
    NSObject<OS_dispatch_queue> *_analyticsEventQueue;
    _Bool _shouldLogAnalyticsEvents;
    NSMutableArray *_pendingAnalyticsEventQueue;
}

@property (nonatomic) _Bool shouldLogAnalyticsEvents;
@property (retain, nonatomic) NSMutableArray *pendingAnalyticsEventQueue;

+ (id)new;
+ (id)analytics;

- (id)init;
- (id)_init;
- (void)_enqueueAnalyticsEvent:(id)arg1;
- (void)flushPendingAnalyticsEventQueue;
- (void)enqueueCurrentAnalyticsEventWithType:(long long)arg1 context:(id)arg2;

@end
