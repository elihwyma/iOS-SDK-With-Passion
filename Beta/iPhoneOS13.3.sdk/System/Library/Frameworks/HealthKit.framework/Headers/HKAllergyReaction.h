/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, NSArray, NSString;

@interface HKAllergyReaction : NSObject <Swift>

{
    NSArray *_manifestations;
    NSArray *_manifestionCodings;
    HKMedicalDate *_onsetDate;
    HKConcept *_severity;
    HKMedicalCoding *_severityCoding;
}

@property (copy, nonatomic, readonly) NSArray *manifestations;
@property (copy, nonatomic, readonly) NSArray *manifestionCodings;
@property (copy, nonatomic, readonly) HKMedicalDate *onsetDate;
@property (copy, nonatomic, readonly) HKConcept *severity;
@property (copy, nonatomic, readonly) HKMedicalCoding *severityCoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (id)allergyReactionWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;
+ (id)manifestationCodingsPreferredSystems;
+ (id)severityCodingPreferredSystems;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)initWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;

@end
