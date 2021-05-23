/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

@class NSString, _HKStringSampleType;

@interface _HKStringSample : HKSample

{
    NSString *_stringValue;
    _HKStringSampleType *_stringType;
}

@property (readonly) _HKStringSampleType *stringType;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)stringSampleWithType:(id)arg1 stringValue:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (void)_setPayload:(id)arg1;

@end
