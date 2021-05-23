/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@interface CMCalorieUserInfo : CMLogItem

{
    double fAge;
    long long fGender;
    double fHeight;
    double fWeight;
    long long fCondition;
}

@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) double age;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double weight;
@property (nonatomic, readonly) long long condition;

+ (_Bool)supportsSecureCoding;
+ (id)genderString:(long long)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5;
- (id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4;

@end
