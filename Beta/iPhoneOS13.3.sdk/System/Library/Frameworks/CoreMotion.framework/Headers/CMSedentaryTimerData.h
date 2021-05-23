/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CMSedentaryTimerData : NSObject

{
    double fStartDate;
    double fFiredDate;
    long long fAlarmType;
    _Bool fDidWake;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *firedDate;
@property (nonatomic, readonly) long long alarmType;
@property (nonatomic, readonly) _Bool didWake;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(long long)arg3 didWake:(_Bool)arg4;

@end
