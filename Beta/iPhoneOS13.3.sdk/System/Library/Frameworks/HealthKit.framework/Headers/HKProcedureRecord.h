/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, HKProcedureRecordType, NSArray, NSLocale, NSString, NSUUID;

@interface HKProcedureRecord : HKMedicalRecord <Swift>

{
    NSArray *_procedureCodings;
    NSArray *_performers;
    HKMedicalDate *_executionStartDate;
    HKMedicalDate *_executionEndDate;
    _Bool _notPerformed;
    HKMedicalCoding *_statusCoding;
    NSArray *_categoryCodings;
    NSArray *_reasonCodings;
    NSArray *_reasonsNotPerformedCodings;
    NSArray *_outcomeCodings;
    NSArray *_complicationsCodings;
    NSArray *_followUpsCodings;
    NSArray *_bodySitesCodings;
    HKConcept *_procedure;
    HKConcept *_status;
    HKConcept *_category;
    HKConcept *_reason;
    NSArray *_reasonsNotPerformed;
    HKConcept *_outcome;
    NSArray *_complications;
    NSArray *_followUps;
    NSArray *_bodySites;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKProcedureRecordType *procedureRecordType;
@property (copy, readonly) NSArray *bodySites;
@property (copy, readonly) NSArray *bodySitesCodings;
@property (copy, readonly) HKConcept *category;
@property (copy, readonly) NSArray *categoryCodings;
@property (copy, readonly) NSArray *complications;
@property (copy, readonly) NSArray *complicationsCodings;
@property (copy, readonly) HKMedicalDate *executionEndDate;
@property (copy, readonly) HKMedicalDate *executionStartDate;
@property (copy, readonly) NSArray *followUps;
@property (copy, readonly) NSArray *followUpsCodings;
@property (readonly) _Bool notPerformed;
@property (copy, readonly) HKConcept *outcome;
@property (copy, readonly) NSArray *outcomeCodings;
@property (copy, readonly) NSArray *performers;
@property (copy, readonly) HKConcept *procedure;
@property (copy, readonly) NSArray *procedureCodings;
@property (copy, readonly) HKConcept *reason;
@property (copy, readonly) NSArray *reasonCodings;
@property (copy, readonly) NSArray *reasonsNotPerformed;
@property (copy, readonly) NSArray *reasonsNotPerformedCodings;
@property (copy, readonly) HKConcept *status;
@property (copy, readonly) HKMedicalCoding *statusCoding;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)procedureCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (id)bodySitesCodingsPreferredSystems;
+ (id)categoryCodingsPreferredSystems;
+ (id)reasonCodingsPreferredSystems;
+ (id)complicationsCodingsPreferredSystems;
+ (id)followUpsCodingsPreferredSystems;
+ (id)outcomeCodingsPreferredSystems;
+ (id)reasonsNotPerformedCodingsPreferredSystems;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 procedureCodings:(id)arg11 performers:(id)arg12 executionStartDate:(id)arg13 executionEndDate:(id)arg14 notPerformed:(_Bool)arg15 statusCoding:(id)arg16 categoryCodings:(id)arg17 reasonCodings:(id)arg18 reasonsNotPerformedCodings:(id)arg19 outcomeCodings:(id)arg20 complicationsCodings:(id)arg21 followUpsCodings:(id)arg22 bodySitesCodings:(id)arg23;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 procedureCodings:(id)arg10 performers:(id)arg11 executionStartDate:(id)arg12 executionEndDate:(id)arg13 notPerformed:(_Bool)arg14 statusCoding:(id)arg15 categoryCodings:(id)arg16 reasonCodings:(id)arg17 reasonsNotPerformedCodings:(id)arg18 outcomeCodings:(id)arg19 complicationsCodings:(id)arg20 followUpsCodings:(id)arg21 bodySitesCodings:(id)arg22;
+ (id)_newProcedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 procedureCodings:(id)arg11 performers:(id)arg12 executionStartDate:(id)arg13 executionEndDate:(id)arg14 notPerformed:(_Bool)arg15 statusCoding:(id)arg16 categoryCodings:(id)arg17 reasonCodings:(id)arg18 reasonsNotPerformedCodings:(id)arg19 outcomeCodings:(id)arg20 complicationsCodings:(id)arg21 followUpsCodings:(id)arg22 bodySitesCodings:(id)arg23 config:(CDUnknownBlockType)arg24;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setStatus:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (void)_setStatusCoding:(id)arg1;
- (id)reasonCodingsCollection;
- (id)reasonCodingsContext;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReason:(id)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)medicalRecordPreferredSystems;
- (void)_setBodySites:(id)arg1;
- (void)_setProcedure:(id)arg1;
- (void)_setReasonsNotPerformed:(id)arg1;
- (void)_setOutcome:(id)arg1;
- (void)_setComplications:(id)arg1;
- (void)_setFollowUps:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (id)statusCodingTasks;
- (id)bodySitesCodingsTasks;
- (id)categoryCodingsTasks;
- (id)reasonCodingsTasks;
- (id)complicationsCodingsTasks;
- (id)followUpsCodingsTasks;
- (id)outcomeCodingsTasks;
- (id)procedureCodingsTasks;
- (id)reasonsNotPerformedCodingsTasks;
- (id)categoryCodingsCollection;
- (id)categoryCodingsContext;
- (id)bodySitesCodingsCollection;
- (id)bodySitesCodingsContexts;
- (void)_setCategoryCodings:(id)arg1;
- (void)_setBodySitesCodings:(id)arg1;
- (id)procedureCodingsCollection;
- (id)procedureCodingsContext;
- (id)reasonsNotPerformedCodingsCollection;
- (id)reasonsNotPerformedCodingsContexts;
- (id)outcomeCodingsCollection;
- (id)outcomeCodingsContext;
- (id)complicationsCodingsCollection;
- (id)complicationsCodingsContexts;
- (id)followUpsCodingsCollection;
- (id)followUpsCodingsContexts;
- (void)_setProcedureCodings:(id)arg1;
- (void)_setExecutionStartDate:(id)arg1;
- (void)_setExecutionEndDate:(id)arg1;
- (void)_setNotPerformed:(_Bool)arg1;
- (void)_setReasonsNotPerformedCodings:(id)arg1;
- (void)_setOutcomeCodings:(id)arg1;
- (void)_setComplicationsCodings:(id)arg1;
- (void)_setFollowUpsCodings:(id)arg1;

@end
