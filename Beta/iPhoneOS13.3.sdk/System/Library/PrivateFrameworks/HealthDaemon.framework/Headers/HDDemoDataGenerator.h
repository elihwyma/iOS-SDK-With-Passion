/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDemoDataActivitySampleGenerator, HDDemoDataAudioExposureSampleGenerator, HDDemoDataAudiogramSampleGenerator, HDDemoDataBloodSampleGenerator, HDDemoDataBodySampleGenerator, HDDemoDataFoodSampleGenerator, HDDemoDataGeneratorConfiguration, HDDemoDataGeneratorState, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataHeartSampleGenerator, HDDemoDataMindfulnessSampleGenerator, HDDemoDataOtherAndAdditionalSampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataPerson, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataVitalsSampleGenerator, HDProfile, NSArray, NSCalendar, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface HDDemoDataGenerator : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sampleGenerators;
    NSMutableDictionary *_appProvenances;
    HDDemoDataGeneratorState *_generatorState;
    NSCalendar *_gregorianCalendar;
    long long _numHKSamples;
    _Bool _isGeneratingDemoData;
    HDProfile *_profile;
    HDDemoDataPerson *_demoPerson;
    HDDemoDataGeneratorConfiguration *_configuration;
    HDDemoDataActivitySampleGenerator *_activitySampleGenerator;
    HDDemoDataAudioExposureSampleGenerator *_audioExposureSampleGenerator;
    HDDemoDataAudiogramSampleGenerator *_audiogramSampleGenerator;
    HDDemoDataBloodSampleGenerator *_bloodSampleGenerator;
    HDDemoDataBodySampleGenerator *_bodySampleGenerator;
    HDDemoDataFoodSampleGenerator *_foodSampleGenerator;
    HDDemoDataHealthDocumentSampleGenerator *_healthDocumentSampleGenerator;
    HDDemoDataHeartSampleGenerator *_heartSampleGenerator;
    HDDemoDataPathologySampleGenerator *_pathologySampleGenerator;
    HDDemoDataReproductiveHealthSampleGenerator *_reproductiveHealthSampleGenerator;
    HDDemoDataSleepSampleGenerator *_sleepSampleGenerator;
    HDDemoDataStatisticsSampleGenerator *_statisticsSampleGenerator;
    HDDemoDataOtherAndAdditionalSampleGenerator *_otherAndAdditionalSampleGenerator;
    HDDemoDataVitalsSampleGenerator *_vitalsSampleGenerator;
    HDDemoDataMindfulnessSampleGenerator *_mindfulnessSampleGenerator;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (retain, nonatomic) HDDemoDataPerson *demoPerson;
@property (retain, nonatomic) HDDemoDataGeneratorConfiguration *configuration;
@property (retain, nonatomic) HDDemoDataActivitySampleGenerator *activitySampleGenerator;
@property (retain, nonatomic) HDDemoDataAudioExposureSampleGenerator *audioExposureSampleGenerator;
@property (retain, nonatomic) HDDemoDataAudiogramSampleGenerator *audiogramSampleGenerator;
@property (retain, nonatomic) HDDemoDataBloodSampleGenerator *bloodSampleGenerator;
@property (retain, nonatomic) HDDemoDataBodySampleGenerator *bodySampleGenerator;
@property (retain, nonatomic) HDDemoDataFoodSampleGenerator *foodSampleGenerator;
@property (retain, nonatomic) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator;
@property (retain, nonatomic) HDDemoDataHeartSampleGenerator *heartSampleGenerator;
@property (retain, nonatomic) HDDemoDataPathologySampleGenerator *pathologySampleGenerator;
@property (retain, nonatomic) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator;
@property (retain, nonatomic) HDDemoDataSleepSampleGenerator *sleepSampleGenerator;
@property (retain, nonatomic) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator;
@property (retain, nonatomic) HDDemoDataOtherAndAdditionalSampleGenerator *otherAndAdditionalSampleGenerator;
@property (retain, nonatomic) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator;
@property (retain, nonatomic) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator;
@property (nonatomic, readonly) HDDemoDataGeneratorState *generatorState;

- (id)init;
- (id)gregorianCalendar;
- (_Bool)_archiveObject:(id)arg1 error:(id *)arg2;
- (id)_keyValueDomain;
- (id)currentDateFromCurrentTime:(double)arg1;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (id)firstSampleDate;
- (long long)firstSampleDayOfYear;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 queue:(id)arg3;
- (void)_queue_runDemoDataGeneratorForDemoPerson:(id)arg1 endDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_archiveCurrentState;
- (_Bool)_queue_loadDemoDataSampleGeneratorState;
- (void)_queue_initDemoDataSampleGenerators;
- (void)_insertBiographicalDataFromDemoPerson:(id)arg1;
- (void)_insertMedicalIDForDemoPerson:(id)arg1;
- (double)_initialGenerationTimeWithDate:(id)arg1;
- (double)_timeIntervalFromInitialGenerationPeriod:(long long)arg1 currentDate:(id)arg2;
- (void)_queue_generateDataForDemoPerson:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 firstRun:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_phoneProveance;
- (_Bool)_queue_unarchiveState;
- (void)_queue_setupDemoDataSampleGenerators;
- (void)_queue_generateFirstRunDataForDemoPerson:(id)arg1;
- (void)_queue_generateDataForDemoPerson:(id)arg1 numIntervals:(long long)arg2;
- (void)_insertIntoDatabaseObjectCollection:(id)arg1 fromPerson:(id)arg2;
- (void)_updateWorkoutConfigurationInGeneratorStateWithSampleDate:(id)arg1;
- (_Bool)isDifferentDayFromTime:(double)arg1;
- (id)_watchProvenanceWithPerson:(id)arg1;
- (id)_appProvenanceWithBundleIdentifier:(id)arg1;
- (id)_appSourceWithBundleIdentifier:(id)arg1;
- (id)_workoutPrototypesIfEnsureRecentWorkoutHasRouteIsYes;
- (id)_unarchiveDataWithClass:(Class)arg1 error:(id *)arg2;
- (void)generateThroughEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
