/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class NSString;

@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration

{
    long long _category;
    NSString *_domainName;
}

@property (nonatomic, readonly) long long category;
@property (copy, nonatomic, readonly) NSString *domainName;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2;

@end
