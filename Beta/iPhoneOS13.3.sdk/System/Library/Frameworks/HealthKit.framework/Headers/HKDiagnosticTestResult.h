/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKDiagnosticTestResultType, HKInspectableValueCollection, HKMedicalCoding, HKMedicalDate, NSArray, NSLocale, NSString, NSUUID;

@interface HKDiagnosticTestResult : HKMedicalRecord <Swift>

{
    NSArray *_diagnosticTestCodings;
    HKInspectableValueCollection *_value;
    NSArray *_referenceRanges;
    HKMedicalDate *_effectiveStartDate;
    NSString *_category;
    HKMedicalDate *_issueDate;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_interpretationCodings;
    NSString *_comments;
    NSArray *_bodySiteCodings;
    NSArray *_methodCodings;
    NSArray *_performers;
    HKConcept *_diagnosticTest;
    HKConcept *_status;
    HKConcept *_interpretation;
    HKConcept *_bodySite;
    HKConcept *_method;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (copy, readonly) HKConcept *bodySite;
@property (copy, readonly) NSArray *bodySiteCodings;
@property (copy, readonly) NSString *category;
@property (copy, readonly) NSString *comments;
@property (copy, readonly) HKConcept *diagnosticTest;
@property (copy, readonly) NSArray *diagnosticTestCodings;
@property (copy, readonly) HKMedicalDate *effectiveEndDate;
@property (copy, readonly) HKMedicalDate *effectiveStartDate;
@property (copy, readonly) HKConcept *interpretation;
@property (copy, readonly) NSArray *interpretationCodings;
@property (copy, readonly) HKMedicalDate *issueDate;
@property (copy, readonly) HKConcept *method;
@property (copy, readonly) NSArray *methodCodings;
@property (copy, readonly) NSArray *performers;
@property (copy, readonly) NSArray *referenceRanges;
@property (copy, readonly) HKConcept *status;
@property (copy, readonly) HKMedicalCoding *statusCoding;
@property (copy, readonly) HKInspectableValueCollection *value;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 value:(id)arg12 referenceRanges:(id)arg13 effectiveStartDate:(id)arg14 category:(id)arg15 issueDate:(id)arg16 effectiveEndDate:(id)arg17 statusCoding:(id)arg18 interpretationCodings:(id)arg19 comments:(id)arg20 bodySiteCodings:(id)arg21 methodCodings:(id)arg22 performers:(id)arg23;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 diagnosticTestCodings:(id)arg10 value:(id)arg11 referenceRanges:(id)arg12 effectiveStartDate:(id)arg13 category:(id)arg14 issueDate:(id)arg15 effectiveEndDate:(id)arg16 statusCoding:(id)arg17 interpretationCodings:(id)arg18 comments:(id)arg19 bodySiteCodings:(id)arg20 methodCodings:(id)arg21 performers:(id)arg22;
+ (id)_newDiagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 value:(id)arg12 referenceRanges:(id)arg13 effectiveStartDate:(id)arg14 category:(id)arg15 issueDate:(id)arg16 effectiveEndDate:(id)arg17 statusCoding:(id)arg18 interpretationCodings:(id)arg19 comments:(id)arg20 bodySiteCodings:(id)arg21 methodCodings:(id)arg22 performers:(id)arg23 config:(CDUnknownBlockType)arg24;
+ (id)statusCodingPreferredSystems;
+ (id)bodySiteCodingsPreferredSystems;
+ (id)interpretationCodingsPreferredSystems;
+ (id)methodCodingsPreferredSystems;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setValue:(id)arg1;
- (void)_setStatus:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (void)_setStatusCoding:(id)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (void)_setDiagnosticTest:(id)arg1;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)medicalRecordPreferredSystems;
- (void)_setBodySite:(id)arg1;
- (id)diagnosticTestCodingsCollection;
- (id)diagnosticTestCodingsContext;
- (id)interpretationCodingsCollection;
- (id)interpretationCodingsContext;
- (id)bodySiteCodingsCollection;
- (id)bodySiteCodingsContext;
- (id)methodCodingsCollection;
- (id)methodCodingsContext;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setReferenceRanges:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setInterpretationCodings:(id)arg1;
- (void)_setComments:(id)arg1;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setMethodCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setInterpretation:(id)arg1;
- (void)_setMethod:(id)arg1;
- (id)statusCodingTasks;
- (id)diagnosticTestCodingsTasks;
- (id)bodySiteCodingsTasks;
- (id)interpretationCodingsTasks;
- (id)methodCodingsTasks;

@end
