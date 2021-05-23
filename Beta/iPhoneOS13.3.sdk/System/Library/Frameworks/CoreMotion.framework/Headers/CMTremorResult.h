/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CMTremorResult : NSObject

{
    float _percentUnknown;
    float _percentNone;
    float _percentSlight;
    float _percentMild;
    float _percentModerate;
    float _percentStrong;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) float percentUnknown;
@property (nonatomic, readonly) float percentNone;
@property (nonatomic, readonly) float percentSlight;
@property (nonatomic, readonly) float percentMild;
@property (nonatomic, readonly) float percentModerate;
@property (nonatomic, readonly) float percentStrong;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult *)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentUnknown:(float)arg3 percentNone:(float)arg4 percentSlight:(float)arg5 percentMild:(float)arg6 percentModerate:(float)arg7 percentStrong:(float)arg8;

@end
