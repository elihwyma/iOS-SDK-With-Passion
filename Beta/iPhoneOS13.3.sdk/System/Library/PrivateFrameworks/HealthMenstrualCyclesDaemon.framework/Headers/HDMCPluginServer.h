/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDHealthStoreClient, HDMCProfileExtension, HDProfile, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HDMCPluginServer : HDStandardTaskServer

{
    HDProfile *_profile;
    HDMCProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)diagnosticDescription;
- (void)remote_fetchScheduledNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_saveDaySummaries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_saveMenstrualFlowByDayIndex:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_saveLastMenstrualPeriodWithDayIndexRange:(CDStruct_ef5fcbe6)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_savePeriodNotYetStartedWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_savePeriodNotYetEndedWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_savePeriodStartedOnDayIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_savePeriodEndedOnDayIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (_Bool)_queue_reconcileSamplesToDeriveDaySummary:(id)arg1 error:(id *)arg2;
- (void)_triggerNanoSync;
- (_Bool)_queue_saveMenstrualFlowUpdatingAdjacentDays:(long long)arg1 dayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_saveMenstrualFlowByDayIndex:(id)arg1 calendarCache:(id)arg2 error:(id *)arg3;
- (_Bool)_queue_saveLastMenstrualPeriodWithDayIndexRange:(CDStruct_ef5fcbe6)arg1 calendarCache:(id)arg2 error:(id *)arg3;
- (id)_queue_mostRecentMenstrualFlowSampleWithError:(id *)arg1 requiringBeforeDay:(long long)arg2 calendarCache:(id)arg3;
- (_Bool)_queue_insertSamplesWithClientSource:(id)arg1 error:(id *)arg2;
- (_Bool)_queue_saveMenstrualFlow:(long long)arg1 forEachDayInRange:(CDStruct_ef5fcbe6)arg2 calendarCache:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_updateUnderlyingSamplesToReplaceDaySummary:(id)arg1 withDaySummary:(id)arg2 calendarCache:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_updateStartOfCycleMetadataForModifiedDayIndex:(long long)arg1 calendarCache:(id)arg2 error:(id *)arg3;
- (id)_samplesToInsertForUpdateFromDaySummary:(id)arg1 toDaySummary:(id)arg2 typesToDelete:(id *)arg3 calendarCache:(id)arg4;
- (_Bool)_queue_deleteSamplesOfType:(id)arg1 onDayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id *)arg4;
- (void)_queue_updateLastLoggedInExperienceDate;

@end
