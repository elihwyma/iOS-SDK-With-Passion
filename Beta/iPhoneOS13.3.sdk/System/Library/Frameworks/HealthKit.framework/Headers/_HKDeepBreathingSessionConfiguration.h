/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface _HKDeepBreathingSessionConfiguration : NSObject

{
    NSUUID *_UUID;
    NSDate *_startDate;
    double _sessionDuration;
    double _inhaleExhaleRatio;
    double _respirationsPerMinute;
}

@property (readonly) NSUUID *UUID;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double sessionDuration;
@property (nonatomic) double inhaleExhaleRatio;
@property (nonatomic) double respirationsPerMinute;

+ (_Bool)supportsSecureCoding;
+ (id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;

@end
