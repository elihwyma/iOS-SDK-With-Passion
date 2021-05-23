/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface CMSkiData : NSObject

{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    double fRunDistance;
    double fRunAvgSpeed;
    double fRunMaxSpeed;
    double fRunSlope;
    double fRunElevationDescent;
}

@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double runDistance;
@property (nonatomic, readonly) double runAvgSpeed;
@property (nonatomic, readonly) double runMaxSpeed;
@property (nonatomic, readonly) double runSlope;
@property (nonatomic, readonly) double runElevationDescent;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 runDistance:(double)arg6 runAvgSpeed:(double)arg7 runMaxSpeed:(double)arg8 runSlope:(double)arg9 runElevationDescent:(double)arg10;
- (id)initWithSkiEntry:(const struct CLSkiEntry *)arg1;
- (void)convertToSkiEntry:(struct CLSkiEntry *)arg1;

@end
