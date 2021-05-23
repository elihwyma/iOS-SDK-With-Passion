/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDScheduleTime;

@interface DNDScheduleTimePeriod : NSObject

{
    DNDScheduleTime *_startTime;
    DNDScheduleTime *_endTime;
}

@property (copy, nonatomic, readonly) DNDScheduleTime *startTime;
@property (copy, nonatomic, readonly) DNDScheduleTime *endTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithPeriod:(id)arg1;
- (id)_initWithStartTime:(id)arg1 endTime:(id)arg2;

@end
