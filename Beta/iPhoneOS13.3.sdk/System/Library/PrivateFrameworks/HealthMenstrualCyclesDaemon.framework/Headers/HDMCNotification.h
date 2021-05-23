/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HDMCNotification : NSObject

{
    long long _dayIndex;
    NSString *_category;
}

@property (nonatomic, readonly) long long dayIndex;
@property (copy, nonatomic, readonly) NSString *category;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDayIndex:(long long)arg1 category:(id)arg2;

@end
