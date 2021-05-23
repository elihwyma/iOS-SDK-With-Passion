/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMAmbientPressureData.h>

@class NSDate;

@interface CMRecordedPressureData : CMAmbientPressureData

{
    double _startDateValue;
    float _pressureValue;
    double _timestampValue;
    float _temperatureValue;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;
@property (readonly) double startTime;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timestamp;
- (CDStruct_c3b9c2ee)ambientPressure;
- (void)resetWithData:(struct CMPressure *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (id)initWithData:(struct CMPressure *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;

@end
