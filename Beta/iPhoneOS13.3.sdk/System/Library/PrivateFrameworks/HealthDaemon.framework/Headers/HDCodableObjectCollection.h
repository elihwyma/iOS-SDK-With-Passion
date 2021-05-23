/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableGeneratedObjectCollection, HDCodableProvenance, HDCodableSource, NSMutableArray, NSString;

@interface HDCodableObjectCollection : PBCodable <Swift>

{
    NSMutableArray *_activityCaches;
    NSMutableArray *_binarySamples;
    NSMutableArray *_categorySamples;
    NSMutableArray *_cdaDocumentSamples;
    NSMutableArray *_correlations;
    NSMutableArray *_deletedSamples;
    NSMutableArray *_fitnessFriendAchievements;
    NSMutableArray *_fitnessFriendActivitySnapshots;
    NSMutableArray *_fitnessFriendWorkouts;
    HDCodableGeneratedObjectCollection *_generatedObjectCollection;
    NSMutableArray *_locationSeries;
    NSMutableArray *_medicalRecords;
    HDCodableProvenance *_provenance;
    NSMutableArray *_quantitySamples;
    HDCodableSource *_source;
    NSString *_sourceBundleIdentifier;
    NSMutableArray *_workouts;
}

@property (nonatomic, readonly) _Bool hasSourceBundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic, readonly) _Bool hasSource;
@property (retain, nonatomic) HDCodableSource *source;
@property (retain, nonatomic) NSMutableArray *categorySamples;
@property (retain, nonatomic) NSMutableArray *quantitySamples;
@property (retain, nonatomic) NSMutableArray *workouts;
@property (retain, nonatomic) NSMutableArray *correlations;
@property (retain, nonatomic) NSMutableArray *activityCaches;
@property (retain, nonatomic) NSMutableArray *binarySamples;
@property (retain, nonatomic) NSMutableArray *deletedSamples;
@property (retain, nonatomic) NSMutableArray *locationSeries;
@property (retain, nonatomic) NSMutableArray *cdaDocumentSamples;
@property (retain, nonatomic) NSMutableArray *fitnessFriendActivitySnapshots;
@property (retain, nonatomic) NSMutableArray *fitnessFriendAchievements;
@property (retain, nonatomic) NSMutableArray *fitnessFriendWorkouts;
@property (retain, nonatomic) NSMutableArray *medicalRecords;
@property (nonatomic, readonly) _Bool hasGeneratedObjectCollection;
@property (retain, nonatomic) HDCodableGeneratedObjectCollection *generatedObjectCollection;
@property (nonatomic, readonly) _Bool hasProvenance;
@property (retain, nonatomic) HDCodableProvenance *provenance;

+ (Class)workoutsType;
+ (Class)categorySamplesType;
+ (Class)quantitySamplesType;
+ (Class)correlationsType;
+ (Class)activityCachesType;
+ (Class)binarySamplesType;
+ (Class)deletedSamplesType;
+ (Class)locationSeriesType;
+ (Class)cdaDocumentSamplesType;
+ (Class)fitnessFriendActivitySnapshotsType;
+ (Class)fitnessFriendAchievementsType;
+ (Class)fitnessFriendWorkoutsType;
+ (Class)medicalRecordsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (unsigned long long)workoutsCount;
- (void)clearWorkouts;
- (id)workoutsAtIndex:(unsigned long long)arg1;
- (void)addBinarySamples:(id)arg1;
- (void)addProcedureRecord:(id)arg1;
- (void)addVaccinationRecord:(id)arg1;
- (void)addDiagnosticTestReport:(id)arg1;
- (void)addCategorySamples:(id)arg1;
- (void)addMedicationRecord:(id)arg1;
- (void)addClinicalRecord:(id)arg1;
- (void)addMedicationOrder:(id)arg1;
- (void)addUnknownRecord:(id)arg1;
- (void)addQuantitySamples:(id)arg1;
- (void)addCorrelations:(id)arg1;
- (void)addActivityCaches:(id)arg1;
- (void)addDeletedSamples:(id)arg1;
- (void)addLocationSeries:(id)arg1;
- (void)addCdaDocumentSamples:(id)arg1;
- (void)addFitnessFriendActivitySnapshots:(id)arg1;
- (void)addFitnessFriendAchievements:(id)arg1;
- (void)addFitnessFriendWorkouts:(id)arg1;
- (void)addMedicalRecords:(id)arg1;
- (unsigned long long)categorySamplesCount;
- (void)clearCategorySamples;
- (id)categorySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)quantitySamplesCount;
- (void)clearQuantitySamples;
- (id)quantitySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)correlationsCount;
- (void)clearCorrelations;
- (id)correlationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityCachesCount;
- (void)clearActivityCaches;
- (id)activityCachesAtIndex:(unsigned long long)arg1;
- (unsigned long long)binarySamplesCount;
- (void)clearBinarySamples;
- (id)binarySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedSamplesCount;
- (void)clearDeletedSamples;
- (id)deletedSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationSeriesCount;
- (void)clearLocationSeries;
- (id)locationSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdaDocumentSamplesCount;
- (void)clearCdaDocumentSamples;
- (id)cdaDocumentSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendActivitySnapshotsCount;
- (void)clearFitnessFriendActivitySnapshots;
- (id)fitnessFriendActivitySnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendAchievementsCount;
- (void)clearFitnessFriendAchievements;
- (id)fitnessFriendAchievementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendWorkoutsCount;
- (void)clearFitnessFriendWorkouts;
- (id)fitnessFriendWorkoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)medicalRecordsCount;
- (void)clearMedicalRecords;
- (id)medicalRecordsAtIndex:(unsigned long long)arg1;
- (void)addAllergyRecord:(id)arg1;
- (id)decodedObjects;
- (void)addMedicationDispenseRecord:(id)arg1;
- (void)addDiagnosticTestResult:(id)arg1;
- (void)addConditionRecord:(id)arg1;
- (void)addAccountOwner:(id)arg1;
- (_Bool)unitTest_isEquivalentToObjectCollection:(id)arg1;

@end
