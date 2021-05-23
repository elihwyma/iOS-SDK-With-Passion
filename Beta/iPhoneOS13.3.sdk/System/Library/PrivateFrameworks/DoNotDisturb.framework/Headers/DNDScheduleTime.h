/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@interface DNDScheduleTime : NSObject

{
    unsigned long long _hour;
    unsigned long long _minute;
}

@property (nonatomic, readonly) unsigned long long hour;
@property (nonatomic, readonly) unsigned long long minute;

+ (_Bool)supportsSecureCoding;
+ (id)defaultStartTime;
+ (id)defaultEndTime;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dateComponents;
- (id)_initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)_initWithTime:(id)arg1;

@end
