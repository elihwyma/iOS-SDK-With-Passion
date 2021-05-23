/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDScheduleTimePeriod.h>

@class DNDScheduleTime;

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (copy, nonatomic) DNDScheduleTime *startTime;
@property (copy, nonatomic) DNDScheduleTime *endTime;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
