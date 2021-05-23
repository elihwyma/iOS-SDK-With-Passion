/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, HKFHIRIdentifier, HKSemanticDate, NSArray, NSDate, NSLocale, NSString, NSUUID;

@interface HKMedicalRecord : HKSample <Swift>

{
    _Bool _enteredInError;
    NSString *_note;
    NSDate *_modifiedDate;
    HKFHIRIdentifier *_FHIRIdentifier;
    NSLocale *_locale;
    long long _extractionVersion;
    HKSemanticDate *_sortDate;
    HKConcept *_primaryConcept;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *indexKeywords;
@property (nonatomic, readonly) NSArray *medicalRecordCodings;
@property (nonatomic, readonly) NSArray *medicalRecordPreferredSystems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (copy, nonatomic, readonly) NSString *note;
@property (nonatomic, readonly) _Bool enteredInError;
@property (copy, nonatomic, readonly) NSDate *modifiedDate;
@property (copy, nonatomic, readonly) HKFHIRIdentifier *FHIRIdentifier;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) long long extractionVersion;
@property (copy, nonatomic, readonly) HKSemanticDate *sortDate;
@property (nonatomic, readonly) HKConcept *primaryConcept;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 config:(CDUnknownBlockType)arg11;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (id)defaultDisplayString;
+ (id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id *)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_setLocale:(id)arg1;
- (void)_setNote:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)primaryCodingContext;
- (id)fallbackDisplayString;
- (void)_setEnteredInError:(_Bool)arg1;
- (void)_setModifiedDate:(id)arg1;
- (void)_setFHIRIdentifier:(id)arg1;
- (void)_setExtractionVersion:(long long)arg1;
- (void)_setSortDate:(id)arg1;
- (void)_setPrimaryConcept:(id)arg1;

@end
