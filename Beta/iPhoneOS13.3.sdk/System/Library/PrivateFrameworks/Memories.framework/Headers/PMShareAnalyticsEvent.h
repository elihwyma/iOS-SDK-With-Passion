/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/PMCoreAnalyticsEvent.h>

@class NSString;

@interface PMShareAnalyticsEvent : PMCoreAnalyticsEvent

{
    NSString *_activityType;
    NSString *_orientation;
}

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)eventName;
- (id)eventPayload;
- (void)sendToCoreAnalytics;
- (id)initWithActivityType:(id)arg1 isLandscape:(_Bool)arg2;

@end
