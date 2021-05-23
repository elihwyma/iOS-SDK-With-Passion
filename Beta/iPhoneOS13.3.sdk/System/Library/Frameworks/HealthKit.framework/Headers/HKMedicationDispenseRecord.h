/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKCodedQuantity, HKConcept, HKMedicalCoding, HKMedicalDate, HKMedicationDispenseRecordType, NSArray, NSLocale, NSString, NSUUID;

@interface HKMedicationDispenseRecord : HKMedicalRecord <Swift>

{
    NSArray *_medicationCodings;
    HKCodedQuantity *_quantityDispensed;
    HKMedicalDate *_preparationDate;
    HKMedicalDate *_handOverDate;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalCoding *_statusCoding;
    HKCodedQuantity *_daysSupplyQuantity;
    HKConcept *_medication;
    HKConcept *_status;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKMedicationDispenseRecordType *medicationDispenseRecordType;
@property (copy, readonly) HKCodedQuantity *daysSupplyQuantity;
@property (copy, readonly) NSArray *dosages;
@property (copy, readonly) HKMedicalDate *earliestDosageDate;
@property (copy, readonly) HKMedicalDate *handOverDate;
@property (copy, readonly) HKConcept *medication;
@property (copy, readonly) NSArray *medicationCodings;
@property (copy, readonly) HKMedicalDate *preparationDate;
@property (copy, readonly) HKCodedQuantity *quantityDispensed;
@property (copy, readonly) HKConcept *status;
@property (copy, readonly) HKMedicalCoding *statusCoding;

+ (_Bool)supportsSecureCoding;
+ (id)_newMedicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 quantityDispensed:(id)arg12 preparationDate:(id)arg13 handOverDate:(id)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 statusCoding:(id)arg17 daysSupplyQuantity:(id)arg18 config:(CDUnknownBlockType)arg19;
+ (id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 medicationCodings:(id)arg11 quantityDispensed:(id)arg12 preparationDate:(id)arg13 handOverDate:(id)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 statusCoding:(id)arg17 daysSupplyQuantity:(id)arg18;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 medicationCodings:(id)arg10 quantityDispensed:(id)arg11 preparationDate:(id)arg12 handOverDate:(id)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 statusCoding:(id)arg16 daysSupplyQuantity:(id)arg17;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;

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
- (void)_setQuantityDispensed:(id)arg1;
- (void)_setPreparationDate:(id)arg1;
- (void)_setHandOverDate:(id)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setDaysSupplyQuantity:(id)arg1;
- (void)_setMedication:(id)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)medicalRecordPreferredSystems;
- (id)statusCodingTasks;
- (id)medicationCodingsTasks;

@end
