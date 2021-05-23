/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKMedicalCodingCollection, NSArray;

@interface HKMedicalCodingTask : NSObject <Swift>

{
    HKMedicalCodingCollection *_codings;
    NSArray *_preferredSystems;
}

@property (copy, nonatomic, readonly) HKMedicalCodingCollection *codings;
@property (copy, nonatomic, readonly) NSArray *preferredSystems;

+ (_Bool)supportsSecureCoding;
+ (id)taskWithCodings:(id)arg1 preferredSystems:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodings:(id)arg1 preferredSystems:(id)arg2;

@end
