/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, HKVaccinationRecordType, NSArray, NSLocale, NSString, NSUUID;

@interface HKVaccinationRecord : HKMedicalRecord <Swift>

{
    NSArray *_vaccinationCodings;
    HKMedicalDate *_expirationDate;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    NSString *_performer;
    NSArray *_bodySiteCodings;
    NSString *_reaction;
    _Bool _notGiven;
    HKMedicalDate *_administrationDate;
    HKMedicalCoding *_statusCoding;
    _Bool _patientReported;
    NSArray *_routeCodings;
    NSArray *_reasonsCodings;
    NSArray *_reasonsNotGivenCodings;
    HKConcept *_vaccination;
    HKConcept *_bodySite;
    HKConcept *_status;
    HKConcept *_route;
    NSArray *_reasons;
    NSArray *_reasonsNotGiven;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKVaccinationRecordType *vaccinationRecordType;
@property (copy, readonly) HKMedicalDate *administrationDate;
@property (copy, readonly) HKConcept *bodySite;
@property (copy, readonly) NSArray *bodySiteCodings;
@property (copy, readonly) NSString *doseNumber;
@property (copy, readonly) NSString *doseQuantity;
@property (copy, readonly) HKMedicalDate *expirationDate;
@property (readonly) _Bool notGiven;
@property (readonly) _Bool patientReported;
@property (copy, readonly) NSString *performer;
@property (copy, readonly) NSString *reaction;
@property (copy, readonly) NSArray *reasons;
@property (copy, readonly) NSArray *reasonsCodings;
@property (copy, readonly) NSArray *reasonsNotGiven;
@property (copy, readonly) NSArray *reasonsNotGivenCodings;
@property (copy, readonly) HKConcept *route;
@property (copy, readonly) NSArray *routeCodings;
@property (copy, readonly) HKConcept *status;
@property (copy, readonly) HKMedicalCoding *statusCoding;
@property (copy, readonly) HKConcept *vaccination;
@property (copy, readonly) NSArray *vaccinationCodings;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)vaccinationCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (id)bodySiteCodingsPreferredSystems;
+ (id)reasonsCodingsPreferredSystems;
+ (id)reasonsNotGivenCodingsPreferredSystems;
+ (id)routeCodingsPreferredSystems;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 vaccinationCodings:(id)arg11 expirationDate:(id)arg12 doseNumber:(id)arg13 doseQuantity:(id)arg14 performer:(id)arg15 bodySiteCodings:(id)arg16 reaction:(id)arg17 notGiven:(_Bool)arg18 administrationDate:(id)arg19 statusCoding:(id)arg20 patientReported:(_Bool)arg21 routeCodings:(id)arg22 reasonsCodings:(id)arg23 reasonsNotGivenCodings:(id)arg24;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 vaccinationCodings:(id)arg10 expirationDate:(id)arg11 doseNumber:(id)arg12 doseQuantity:(id)arg13 performer:(id)arg14 bodySiteCodings:(id)arg15 reaction:(id)arg16 notGiven:(_Bool)arg17 administrationDate:(id)arg18 statusCoding:(id)arg19 patientReported:(_Bool)arg20 routeCodings:(id)arg21 reasonsCodings:(id)arg22 reasonsNotGivenCodings:(id)arg23;
+ (id)_newVaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 vaccinationCodings:(id)arg11 expirationDate:(id)arg12 doseNumber:(id)arg13 doseQuantity:(id)arg14 performer:(id)arg15 bodySiteCodings:(id)arg16 reaction:(id)arg17 notGiven:(_Bool)arg18 administrationDate:(id)arg19 statusCoding:(id)arg20 patientReported:(_Bool)arg21 routeCodings:(id)arg22 reasonsCodings:(id)arg23 reasonsNotGivenCodings:(id)arg24 config:(CDUnknownBlockType)arg25;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setStatus:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (void)_setStatusCoding:(id)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)medicalRecordPreferredSystems;
- (void)_setVaccination:(id)arg1;
- (void)_setBodySite:(id)arg1;
- (void)_setRoute:(id)arg1;
- (void)_setReasons:(id)arg1;
- (void)_setReasonsNotGiven:(id)arg1;
- (id)bodySiteCodingsCollection;
- (id)bodySiteCodingsContext;
- (void)_setBodySiteCodings:(id)arg1;
- (id)statusCodingTasks;
- (id)bodySiteCodingsTasks;
- (id)reasonsCodingsTasks;
- (id)reasonsNotGivenCodingsTasks;
- (id)routeCodingsTasks;
- (id)vaccinationCodingsTasks;
- (id)vaccinationCodingsCollection;
- (id)vaccinationCodingsContext;
- (id)routeCodingsCollection;
- (id)routeCodingsContext;
- (id)reasonsCodingsCollection;
- (id)reasonsCodingsContexts;
- (id)reasonsNotGivenCodingsCollection;
- (id)reasonsNotGivenCodingsContexts;
- (void)_setVaccinationCodings:(id)arg1;
- (void)_setDoseNumber:(id)arg1;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setPerformer:(id)arg1;
- (void)_setReaction:(id)arg1;
- (void)_setNotGiven:(_Bool)arg1;
- (void)_setAdministrationDate:(id)arg1;
- (void)_setPatientReported:(_Bool)arg1;
- (void)_setRouteCodings:(id)arg1;
- (void)_setReasonsCodings:(id)arg1;
- (void)_setReasonsNotGivenCodings:(id)arg1;

@end
