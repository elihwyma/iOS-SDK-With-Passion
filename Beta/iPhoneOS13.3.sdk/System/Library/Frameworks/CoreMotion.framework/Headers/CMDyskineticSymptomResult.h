/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CMDyskineticSymptomResult : NSObject

{
    float _percentUnlikely;
    float _percentLikely;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) float percentUnlikely;
@property (nonatomic, readonly) float percentLikely;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentDyskinesiaUnlikely:(float)arg3 percentDyskinesiaLikely:(float)arg4;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult *)arg1;

@end
