/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDScheduleTime.h>

@interface DNDMutableScheduleTime : DNDScheduleTime

@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
