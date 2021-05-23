/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

#import <HealthKit/Swift-Protocol.h>

@class HKElectrocardiogramSessionConfiguration;

@interface HKElectrocardiogramSessionTaskConfiguration : HKTaskConfiguration <Swift>

{
    HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
}

@property (copy, nonatomic) HKElectrocardiogramSessionConfiguration *sessionConfiguration;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
