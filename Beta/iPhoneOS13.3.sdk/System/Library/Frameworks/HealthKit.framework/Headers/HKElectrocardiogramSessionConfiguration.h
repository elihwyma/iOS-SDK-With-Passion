/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSUUID;

@interface HKElectrocardiogramSessionConfiguration : NSObject <Swift>

{
    _Bool _wornOnRightArm;
    NSUUID *_sessionUUID;
    long long _mode;
    double _maximumDuration;
}

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) long long mode;
@property (nonatomic) double maximumDuration;
@property (nonatomic) _Bool wornOnRightArm;

+ (_Bool)supportsSecureCoding;
+ (id)sessionConfigurationWithUUID:(id)arg1 mode:(long long)arg2 maximumDuration:(double)arg3 wornOnRightArm:(_Bool)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
