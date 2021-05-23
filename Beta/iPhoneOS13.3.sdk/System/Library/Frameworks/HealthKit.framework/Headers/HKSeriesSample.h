/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

@interface HKSeriesSample : HKSample

{
    _Atomic unsigned int _count;
    _Bool _frozen;
}

@property (nonatomic, getter=_isFrozen, setter=_setFrozen:) _Bool frozen;
@property (readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_valueDescription;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_setCount:(unsigned long long)arg1;
- (id)_validateSample;
- (_Bool)_shouldNotifyOnInsert;

@end
