/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMStrideCalibrationEntry : NSObject

{
    CDStruct_9878d8f4 _strideCalStruct;
}

@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) int steps;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double percentGrade;
@property (nonatomic, readonly) long long gpsSource;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)score;
- (int)session;
- (unsigned int)pacebin;
- (double)kvalue;
- (double)kvalueTrack;
- (id)initWithCLStrideCalEntry:(CDStruct_9878d8f4)arg1;

@end
