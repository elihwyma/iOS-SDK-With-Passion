/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKDiagnosticTestReportType, HKMedicalCoding, HKMedicalDate, NSArray, NSLocale, NSString, NSUUID;

@interface HKDiagnosticTestReport : HKMedicalRecord <Swift>

{
    NSArray *_diagnosticTestCodings;
    NSString *_panelName;
    NSArray *_results;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalCoding *_statusCoding;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalDate *_issueDate;
    HKConcept *_diagnosticTest;
    HKConcept *_status;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (copy, readonly) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (copy, readonly) HKConcept *diagnosticTest;
@property (copy, readonly) NSArray *diagnosticTestCodings;
@property (copy, readonly) HKMedicalDate *effectiveEndDate;
@property (copy, readonly) HKMedicalDate *effectiveStartDate;
@property (copy, readonly) HKMedicalDate *issueDate;
@property (copy, readonly) NSString *panelName;
@property (copy, readonly) NSArray *results;
@property (copy, readonly) HKConcept *status;
@property (copy, readonly) HKMedicalCoding *statusCoding;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 panelName:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 diagnosticTestCodings:(id)arg10 panelName:(id)arg11 results:(id)arg12 effectiveStartDate:(id)arg13 statusCoding:(id)arg14 effectiveEndDate:(id)arg15 issueDate:(id)arg16;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (id)_newDiagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 panelName:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17 config:(CDUnknownBlockType)arg18;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setResults:(id)arg1;
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
- (id)diagnosticTestCodingsCollection;
- (id)diagnosticTestCodingsContext;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (id)statusCodingTasks;
- (id)diagnosticTestCodingsTasks;
- (void)_setPanelName:(id)arg1;

@end
