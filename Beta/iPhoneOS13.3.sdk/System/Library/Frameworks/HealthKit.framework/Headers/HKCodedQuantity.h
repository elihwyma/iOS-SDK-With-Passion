/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKMedicalCoding, NSNumber, NSString;

@interface HKCodedQuantity : NSObject <Swift>

{
    NSString *_rawValue;
    HKMedicalCoding *_comparatorCoding;
    HKMedicalCoding *_unitCoding;
}

@property (copy, nonatomic, readonly) NSString *value;
@property (copy, nonatomic, readonly) NSString *rawValue;
@property (copy, nonatomic, readonly) NSString *localizedValue;
@property (copy, nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) double doubleValue;
@property (copy, nonatomic, readonly) HKMedicalCoding *comparatorCoding;
@property (copy, nonatomic, readonly) HKMedicalCoding *unitCoding;

+ (_Bool)supportsSecureCoding;
+ (id)_numberFormatter;
+ (id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
+ (id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
- (id)quantityRepresentationWithUCUMConverter:(id)arg1 error:(id *)arg2;

@end
