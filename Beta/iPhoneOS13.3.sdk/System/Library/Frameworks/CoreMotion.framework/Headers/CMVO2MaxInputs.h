/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CMVO2MaxInputs : NSObject

{
    unsigned long long fRecordId;
    NSDate *fStartDate;
    double fMets;
    long long fMetSource;
    double fHeartRate;
    double fHeartRateConfidence;
    double fGrade;
    long long fGradeType;
    double fCadence;
    double fPace;
    _Bool fHasGPS;
    _Bool fHasStrideCal;
    long long fWorkoutType;
}

@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double mets;
@property (nonatomic, readonly) long long metSource;
@property (nonatomic, readonly) double heartRate;
@property (nonatomic, readonly) double heartRateConfidence;
@property (nonatomic, readonly) double grade;
@property (nonatomic, readonly) long long gradeType;
@property (nonatomic, readonly) double cadence;
@property (nonatomic, readonly) double pace;
@property (nonatomic, readonly) _Bool hasGPS;
@property (nonatomic, readonly) _Bool hasStrideCal;
@property (nonatomic, readonly) long long workoutType;

+ (_Bool)supportsSecureCoding;
+ (struct VO2MaxInput)VO2MaxInputFromCMVO2MaxInputs:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSample:(struct VO2MaxInput)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(_Bool)arg11 hasStrideCal:(_Bool)arg12 workoutType:(long long)arg13;

@end
