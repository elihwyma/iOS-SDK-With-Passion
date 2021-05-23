/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKMedicalCodingCollection, HKSampleType, NSString;

@interface HKMedicalCodingContext : NSObject <Swift>

{
    HKMedicalCodingCollection *_collection;
    HKSampleType *_sampleType;
    NSString *_keyPath;
}

@property (copy, nonatomic, readonly) HKMedicalCodingCollection *collection;
@property (copy, nonatomic, readonly) HKSampleType *sampleType;
@property (copy, nonatomic, readonly) NSString *keyPath;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithCodings:(id)arg1 sampleType:(id)arg2 keyPath:(id)arg3;
+ (id)contextWithCollection:(id)arg1 sampleType:(id)arg2 keyPath:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollection:(id)arg1 sampleType:(id)arg2 keyPath:(id)arg3;

@end
