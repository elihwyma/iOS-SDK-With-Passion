/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber;

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

{
    NSNumber *_contentViewTotal;
}

@property (nonatomic, readonly) double timeSinceLastNotification;
@property (nonatomic, readonly) NSNumber *notificationsPosted;
@property (nonatomic, readonly) NSNumber *appLaunches;
@property (nonatomic, readonly) NSNumber *contentViewTotal;
@property (nonatomic, readonly) NSNumber *desiredOutcomeTotal;

+ (_Bool)supportsSecureCoding;

- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)tipViewTotal;

@end
