/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSDate, NSString;

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent

{
    NSDate *_desiredOutcomePerformedDate;
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    NSString *_experimentID;
    NSString *_experimentCampID;
    NSString *_displayType;
    double _timeToDesiredOutcome;
}

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;
@property (retain, nonatomic) NSString *displayType;
@property (nonatomic) double timeToDesiredOutcome;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1;
- (id)initWithContentID:(id)arg1 desiredOutcomePerformedDate:(id)arg2;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 experimentID:(id)arg4 experimentCampID:(id)arg5 displayType:(id)arg6 timeToDesiredOutcome:(double)arg7;

@end
