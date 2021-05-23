/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMAccelerometerData.h>

@class NSDate;

@interface CMRecordedAccelerometerData : CMAccelerometerData

{
    double _startDateValue;
    CDStruct_31142d93 _accelerationValue;
    double _timestampValue;
    unsigned long long _identifier;
}

@property (readonly) double startTime;
@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timestamp;
- (CDStruct_31142d93)acceleration;
- (void)resetWithData:(struct CMAccel100 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (id)initWithData:(struct CMAccel100 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;

@end
