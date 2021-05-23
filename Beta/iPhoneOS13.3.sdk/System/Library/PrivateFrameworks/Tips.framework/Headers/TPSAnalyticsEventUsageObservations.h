/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber, NSString;

@interface TPSAnalyticsEventUsageObservations : TPSAnalyticsEvent

{
    NSString *_eventID;
    NSNumber *_eventCount;
    NSString *_experimentID;
    NSString *_experimentCampID;
}

@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSNumber *eventCount;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic, readonly) NSString *experimentCampID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithEventID:(id)arg1 eventCount:(id)arg2;

@end
