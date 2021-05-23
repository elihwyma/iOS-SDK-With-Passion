/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMGyroData.h>

@class NSDate;

@interface CMRecordedGyroData : CMGyroData

{
    double _startDateValue;
    CDStruct_31142d93 _rotationRate;
    double _timestampValue;
    float _temperatureValue;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;
@property (readonly) double startTime;
@property (readonly) float temperature;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timestamp;
- (CDStruct_31142d93)rotationRate;
- (void)resetWithData:(struct CMGyro50 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (id)initWithData:(struct CMGyro50 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;

@end
