/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface _HKActivityStatisticsStandHourInfo : NSObject

{
    double _timeStamp;
    long long _state;
}

@property (nonatomic) double timeStamp;
@property (nonatomic) long long state;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStamp:(double)arg1 state:(long long)arg2;

@end
