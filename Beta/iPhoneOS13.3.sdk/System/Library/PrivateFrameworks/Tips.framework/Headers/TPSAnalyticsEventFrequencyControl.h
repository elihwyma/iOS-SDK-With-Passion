/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber, NSString;

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent

{
    NSString *_displayType;
    NSNumber *_displayCount;
    NSNumber *_notDisplayedDueToFrequencyControlCount;
    NSString *_experimentID;
    NSString *_experimentCampID;
}

@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSNumber *displayCount;
@property (retain, nonatomic) NSNumber *notDisplayedDueToFrequencyControlCount;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithDisplayType:(id)arg1 displayCount:(id)arg2 notDisplayedDueToFrequencyControlCount:(id)arg3;

@end
