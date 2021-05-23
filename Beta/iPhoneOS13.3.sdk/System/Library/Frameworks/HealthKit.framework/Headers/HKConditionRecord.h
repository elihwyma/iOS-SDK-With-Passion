/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKConditionRecordType, HKInspectableValue, HKMedicalCoding, HKMedicalDate, NSArray, NSLocale, NSString, NSUUID;

@interface HKConditionRecord : HKMedicalRecord <Swift>

{
    NSArray *_conditionCodings;
    NSArray *_categoryCodings;
    NSString *_asserter;
    HKInspectableValue *_abatement;
    HKInspectableValue *_onset;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_clinicalStatusCoding;
    HKMedicalCoding *_verificationStatusCoding;
    NSArray *_severityCodings;
    NSArray *_bodySitesCodings;
    HKConcept *_condition;
    HKConcept *_category;
    HKConcept *_clinicalStatus;
    HKConcept *_verificationStatus;
    HKConcept *_severity;
    NSArray *_bodySites;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKConditionRecordType *conditionRecordType;
@property (copy, readonly) HKInspectableValue *abatement;
@property (copy, readonly) NSString *asserter;
@property (copy, readonly) NSArray *bodySites;
@property (copy, readonly) NSArray *bodySitesCodings;
@property (copy, readonly) HKConcept *category;
@property (copy, readonly) NSArray *categoryCodings;
@property (copy, readonly) HKConcept *clinicalStatus;
@property (copy, readonly) HKMedicalCoding *clinicalStatusCoding;
@property (copy, readonly) HKConcept *condition;
@property (copy, readonly) NSArray *conditionCodings;
@property (copy, readonly) HKInspectableValue *onset;
@property (copy, readonly) HKMedicalDate *recordedDate;
@property (copy, readonly) HKConcept *severity;
@property (copy, readonly) NSArray *severityCodings;
@property (copy, readonly) HKConcept *verificationStatus;
@property (copy, readonly) HKMedicalCoding *verificationStatusCoding;

+ (_Bool)supportsSecureCoding;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 conditionCodings:(id)arg11 categoryCodings:(id)arg12 asserter:(id)arg13 abatement:(id)arg14 onset:(id)arg15 recordedDate:(id)arg16 clinicalStatusCoding:(id)arg17 verificationStatusCoding:(id)arg18 severityCodings:(id)arg19 bodySitesCodings:(id)arg20;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 conditionCodings:(id)arg10 categoryCodings:(id)arg11 asserter:(id)arg12 abatement:(id)arg13 onset:(id)arg14 recordedDate:(id)arg15 clinicalStatusCoding:(id)arg16 verificationStatusCoding:(id)arg17 severityCodings:(id)arg18 bodySitesCodings:(id)arg19;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)conditionCodingsPreferredSystems;
+ (id)bodySitesCodingsPreferredSystems;
+ (id)categoryCodingsPreferredSystems;
+ (id)clinicalStatusCodingPreferredSystems;
+ (id)severityCodingsPreferredSystems;
+ (id)verificationStatusCodingPreferredSystems;
+ (id)_newConditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 conditionCodings:(id)arg11 categoryCodings:(id)arg12 asserter:(id)arg13 abatement:(id)arg14 onset:(id)arg15 recordedDate:(id)arg16 clinicalStatusCoding:(id)arg17 verificationStatusCoding:(id)arg18 severityCodings:(id)arg19 bodySitesCodings:(id)arg20 config:(CDUnknownBlockType)arg21;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setCategory:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)medicalRecordPreferredSystems;
- (void)_setCondition:(id)arg1;
- (void)_setClinicalStatus:(id)arg1;
- (void)_setVerificationStatus:(id)arg1;
- (void)_setSeverity:(id)arg1;
- (void)_setBodySites:(id)arg1;
- (id)bodySitesCodingsTasks;
- (id)categoryCodingsTasks;
- (id)clinicalStatusCodingTasks;
- (id)conditionCodingsTasks;
- (id)severityCodingsTasks;
- (id)verificationStatusCodingTasks;
- (void)_setAsserter:(id)arg1;
- (id)conditionCodingsCollection;
- (id)conditionCodingsContext;
- (id)categoryCodingsCollection;
- (id)categoryCodingsContext;
- (id)clinicalStatusCodingCollection;
- (id)clinicalStatusCodingContext;
- (id)verificationStatusCodingCollection;
- (id)verificationStatusCodingContext;
- (id)severityCodingsCollection;
- (id)severityCodingsContext;
- (id)bodySitesCodingsCollection;
- (id)bodySitesCodingsContexts;
- (void)_setConditionCodings:(id)arg1;
- (void)_setCategoryCodings:(id)arg1;
- (void)_setAbatement:(id)arg1;
- (void)_setOnset:(id)arg1;
- (void)_setRecordedDate:(id)arg1;
- (void)_setClinicalStatusCoding:(id)arg1;
- (void)_setVerificationStatusCoding:(id)arg1;
- (void)_setSeverityCodings:(id)arg1;
- (void)_setBodySitesCodings:(id)arg1;

@end
