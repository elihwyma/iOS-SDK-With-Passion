/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, HKMedicationRecordType, NSArray, NSLocale, NSString, NSUUID;

@interface HKMedicationRecord : HKMedicalRecord <Swift>

{
    NSArray *_medicationCodings;
    long long _assertionType;
    NSString *_asserter;
    HKMedicalDate *_assertionDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    NSArray *_reasonForUseCodings;
    _Bool _notTaken;
    NSArray *_reasonsNotTakenCodings;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalDate *_effectiveEndDate;
    HKConcept *_medication;
    HKConcept *_status;
    HKConcept *_reasonForUse;
    NSArray *_reasonsNotTaken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKMedicationRecordType *medicationRecordType;
@property (copy, readonly) NSString *asserter;
@property (copy, readonly) HKMedicalDate *assertionDate;
@property (readonly) long long assertionType;
@property (copy, readonly) NSArray *dosages;
@property (copy, readonly) HKMedicalDate *earliestDosageDate;
@property (copy, readonly) HKMedicalDate *effectiveEndDate;
@property (copy, readonly) HKMedicalDate *effectiveStartDate;
@property (copy, readonly) HKConcept *medication;
@property (copy, readonly) NSArray *medicationCodings;
@property (readonly) _Bool notTaken;
@property (copy, readonly) HKConcept *reasonForUse;
@property (copy, readonly) NSArray *reasonForUseCodings;
@property (copy, readonly) NSArray *reasonsNotTaken;
@property (copy, readonly) NSArray *reasonsNotTakenCodings;
@property (copy, readonly) HKConcept *status;
@property (copy, readonly) HKMedicalCoding *statusCoding;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (id)reasonForUseCodingsPreferredSystems;
+ (id)reasonsNotTakenCodingsPreferredSystems;
+ (id)_newMedicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 assertionType:(long long)arg12 asserter:(id)arg13 assertionDate:(id)arg14 statusCoding:(id)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 reasonForUseCodings:(id)arg18 notTaken:(_Bool)arg19 reasonsNotTakenCodings:(id)arg20 effectiveStartDate:(id)arg21 effectiveEndDate:(id)arg22 config:(CDUnknownBlockType)arg23;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 assertionType:(long long)arg12 asserter:(id)arg13 assertionDate:(id)arg14 statusCoding:(id)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 reasonForUseCodings:(id)arg18 notTaken:(_Bool)arg19 reasonsNotTakenCodings:(id)arg20 effectiveStartDate:(id)arg21 effectiveEndDate:(id)arg22;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 medicationCodings:(id)arg10 assertionType:(long long)arg11 asserter:(id)arg12 assertionDate:(id)arg13 statusCoding:(id)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 reasonForUseCodings:(id)arg17 notTaken:(_Bool)arg18 reasonsNotTakenCodings:(id)arg19 effectiveStartDate:(id)arg20 effectiveEndDate:(id)arg21;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setStatus:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)medicationCodingsCollection;
- (id)medicationCodingsContext;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setMedication:(id)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)medicalRecordPreferredSystems;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (id)statusCodingTasks;
- (id)medicationCodingsTasks;
- (id)reasonForUseCodingsTasks;
- (id)reasonsNotTakenCodingsTasks;
- (id)reasonForUseCodingsCollection;
- (id)reasonForUseCodingsContext;
- (id)reasonsNotTakenCodingsCollection;
- (id)reasonsNotTakenCodingsContexts;
- (void)_setAssertionType:(long long)arg1;
- (void)_setAsserter:(id)arg1;
- (void)_setAssertionDate:(id)arg1;
- (void)_setReasonForUseCodings:(id)arg1;
- (void)_setNotTaken:(_Bool)arg1;
- (void)_setReasonsNotTakenCodings:(id)arg1;
- (void)_setReasonForUse:(id)arg1;
- (void)_setReasonsNotTaken:(id)arg1;

@end
