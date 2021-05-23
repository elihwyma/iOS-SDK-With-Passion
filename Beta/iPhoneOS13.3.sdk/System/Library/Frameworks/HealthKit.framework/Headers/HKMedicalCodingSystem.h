/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface HKMedicalCodingSystem : NSObject <Swift>

{
    _Bool _hasDisplayStrings;
    NSString *_identifier;
    NSString *_name;
    NSString *_OID;
    unsigned long long _type;
    NSArray *_synonyms;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) _Bool hasDisplayStrings;

+ (_Bool)supportsSecureCoding;
+ (id)textSystem;
+ (id)externalCodeSystems;
+ (id)codeSystemWithIdentifier:(id)arg1;
+ (id)systemWithSystemDefinition:(CDStruct_b04166ad)arg1;
+ (id)LOINCCodeSystem;
+ (id)SNOMEDCodeSystem;
+ (id)RxNormCodeSystem;
+ (id)UCUMSystem;
+ (id)CVXSystem;
+ (id)NDCSystem;
+ (id)ICD10System;
+ (id)ICD10USSystem;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRObservationStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRProcedureStatus;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)adHocConceptSystem;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 OID:(id)arg3 type:(unsigned long long)arg4 synonyms:(id)arg5 hasDisplayStrings:(_Bool)arg6;
- (id)initWithCustomIdentifier:(id)arg1;
- (long long)codingSystemOntologyIdentifier;

@end
