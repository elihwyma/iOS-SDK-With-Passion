/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface HDDateRangeQueryServer : HDQueryServer

{
    _Bool _resultsDirty;
    NSMutableDictionary *_timePeriodsBySampleType;
    NSMutableSet *_sampleTypesToReFetch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)queryClass;

- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (void)_deliverErrorToClient:(id)arg1;
- (_Bool)_shouldObserveAllSampleTypes;
- (void)_queue_sendUpdatedResultsToClient;
- (void)_queue_samplesAdded:(id)arg1;
- (void)_queue_samplesOfTypesWereRemoved:(id)arg1;
- (id)_queue_timePeriodForType:(id)arg1;
- (void)_queue_updateTimePeriodsForSampleTypes:(id)arg1;
- (id)dateRangeClientProxy;
- (void)_queue_protectedDataBecameAvailable;

@end
