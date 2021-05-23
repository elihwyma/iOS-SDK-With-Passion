/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, HKMedicationOrderType, NSArray, NSLocale, NSString, NSUUID;

@interface HKMedicationOrder : HKMedicalRecord <Swift>

{
    NSArray *_medicationCodings;
    NSString *_prescriber;
    long long _numberOfFills;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalDate *_writtenDate;
    HKMedicalDate *_endedDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_reasonCodings;
    NSArray *_reasonEndedCodings;
    HKConcept *_medication;
    HKConcept *_status;
    HKConcept *_reason;
    HKConcept *_reasonEnded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKMedicationOrderType *medicationOrderType;
@property (copy, readonly) NSArray *dosages;
@property (copy, readonly) HKMedicalDate *earliestDosageDate;
@property (copy, readonly) HKMedicalDate *endedDate;
@property (copy, readonly) HKConcept *medication;
@property (copy, readonly) NSArray *medicationCodings;
@property (readonly) long long numberOfFills;
@property (copy, readonly) NSString *prescriber;
@property (copy, readonly) HKConcept *reason;
@property (copy, readonly) NSArray *reasonCodings;
@property (copy, readonly) HKConcept *reasonEnded;
@property (copy, readonly) NSArray *reasonEndedCodings;
@property (copy, readonly) HKConcept *status;
@property (copy, readonly) HKMedicalCoding *statusCoding;
@property (copy, readonly) HKMedicalDate *writtenDate;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)_newMedicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 prescriber:(id)arg12 numberOfFills:(long long)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 writtenDate:(id)arg16 endedDate:(id)arg17 statusCoding:(id)arg18 reasonCodings:(id)arg19 reasonEndedCodings:(id)arg20 config:(CDUnknownBlockType)arg21;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 prescriber:(id)arg12 numberOfFills:(long long)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 writtenDate:(id)arg16 endedDate:(id)arg17 statusCoding:(id)arg18 reasonCodings:(id)arg19 reasonEndedCodings:(id)arg20;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 medicationCodings:(id)arg10 prescriber:(id)arg11 numberOfFills:(long long)arg12 dosages:(id)arg13 earliestDosageDate:(id)arg14 writtenDate:(id)arg15 endedDate:(id)arg16 statusCoding:(id)arg17 reasonCodings:(id)arg18 reasonEndedCodings:(id)arg19;
+ (id)statusCodingPreferredSystems;
+ (id)reasonCodingsPreferredSystems;
+ (id)reasonEndedCodingsPreferredSystems;

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
- (id)reasonCodingsCollection;
- (id)reasonCodingsContext;
- (id)reasonEndedCodingsCollection;
- (id)reasonEndedCodingsContext;
- (void)_setPrescriber:(id)arg1;
- (void)_setNumberOfFills:(long long)arg1;
- (void)_setWrittenDate:(id)arg1;
- (void)_setEndedDate:(id)arg1;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReasonEndedCodings:(id)arg1;
- (void)_setReason:(id)arg1;
- (void)_setReasonEnded:(id)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)medicalRecordPreferredSystems;
- (id)statusCodingTasks;
- (id)medicationCodingsTasks;
- (id)reasonCodingsTasks;
- (id)reasonEndedCodingsTasks;

@end
