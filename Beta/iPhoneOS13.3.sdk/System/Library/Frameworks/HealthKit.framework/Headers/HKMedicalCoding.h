/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKMedicalCodingSystem, NSString;

@interface HKMedicalCoding : NSObject <Swift>

{
    HKMedicalCodingSystem *_codingSystem;
    NSString *_codingVersion;
    NSString *_code;
    NSString *_displayString;
}

@property (copy, nonatomic, readonly) HKMedicalCodingSystem *codingSystem;
@property (copy, nonatomic, readonly) NSString *codingVersion;
@property (copy, nonatomic, readonly) NSString *code;
@property (copy, nonatomic, readonly) NSString *displayString;

+ (_Bool)supportsSecureCoding;
+ (id)medicalCodingWithSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4;
+ (id)_ucumUnitWithCode:(id)arg1 displayString:(id)arg2;
+ (id)ucum_meterUnitCoding;
+ (id)ucum_centimeterUnitCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_validateConfiguration;
- (id)synthesizedIdentifier;
- (id)initWithCodingSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4;

@end
