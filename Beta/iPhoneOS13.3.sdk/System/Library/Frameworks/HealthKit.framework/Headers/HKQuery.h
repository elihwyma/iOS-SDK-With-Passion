/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKHealthStore, HKObjectType, HKQueryServerProxyProvider, HKSampleType, NSPredicate, NSString, NSUUID, _HKFilter;

@protocol HKQueryDelegate, HKQueryServerInterface, OS_dispatch_queue;

@interface HKQuery : NSObject <Swift>

{
    _Bool _hasBeenExecuted;
    id <HKQueryDelegate> _delegate;
    HKQueryServerProxyProvider *_proxyProvider;
    _Atomic int _activationState;
    _Atomic int _deactivateCallCount;
    double _activationTime;
    HKHealthStore *_strongHealthStore;
    id <HKQueryServerInterface> _serverProxy;
    _Bool _shouldSuppressDataCollection;
    unsigned int _applicationSDKVersion;
    HKObjectType *_objectType;
    NSPredicate *_predicate;
    NSUUID *_activationUUID;
    NSString *_debugIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKFilter *_filter;
    long long _qualityOfService;
}

@property (copy) NSUUID *activationUUID;
@property (weak, nonatomic, readonly) id <HKQueryDelegate> delegate;
@property (readonly) long long activationState;
@property (readonly) _Bool deactivating;
@property (readonly) long long deactivateCallCount;
@property (nonatomic) _Bool shouldSuppressDataCollection;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) unsigned int applicationSDKVersion;
@property (nonatomic, readonly, getter=_filter) _HKFilter *filter;
@property (retain, nonatomic) HKObjectType *objectType;
@property (retain, nonatomic) NSPredicate *predicate;
@property (nonatomic) long long qualityOfService;
@property (readonly) HKSampleType *sampleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)serverInterface;
+ (Class)configurationClass;
+ (id)clientInterface;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 inclusiveEndDates:(_Bool)arg3 options:(unsigned long long)arg4;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForClinicalRecordsWithFHIRResourceType:(id)arg1;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForSamplesWithinDateInterval:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)predicateForClinicalRecordsFromSource:(id)arg1 FHIRResourceType:(id)arg2 identifier:(id)arg3;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromSourceRevisions:(id)arg1;
+ (id)predicateForObjectsFromDevices:(id)arg1;
+ (id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (id)_predicateForObjectsFromAppleWatches;
+ (id)_predicateForObjectsWithMinOSBuildVersion:(id)arg1 maxOSBuildVersion:(id)arg2;
+ (id)predicateForObjectsWithNoCorrelation;
+ (id)predicateForObjectsFromWorkout:(id)arg1;
+ (id)predicateForSamplesAssociatedWithSample:(id)arg1;
+ (id)predicateForSamplesForDayFromDate:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForRecordsFromClinicalAccountIdentifier:(id)arg1;
+ (id)predicateForRecordsFromGatewayWithExternalIdentifier:(id)arg1;
+ (id)predicateForDiagnosticTestResultCategory:(id)arg1;
+ (id)predicateForSamplesWithConceptIdentifier:(id)arg1 keyPath:(id)arg2;
+ (id)predicateForRecordsWithSortDateFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForCreationDateWithTodayViewRange:(id)arg1;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2;
+ (id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalSwimmingStrokeCount:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalFlightsClimbed:(id)arg2;
+ (id)predicateForActivitySummaryWithDateComponents:(id)arg1;
+ (id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)_cachedInterfaceForProtocol:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2;
+ (id)serverInterfaceProtocol;
+ (void)configureServerInterface:(id)arg1;
+ (_Bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;
+ (id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;

- (id)exportedInterface;
- (void)deactivate;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (id)_initWithObjectType:(id)arg1 predicate:(id)arg2;
- (void)queue_dispatchToClientForUUID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)client_deliverError:(id)arg1 forQuery:(id)arg2;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)activateWithClientQueue:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 time:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reactivateWithHealthStore:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (_Bool)hasQueryUUID:(id)arg1;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (id)_filterForPredicate:(id)arg1 objectType:(id)arg2;
- (void)_queue_activateWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_deactivateWithError:(id)arg1;
- (void)_queue_finishActivationWithServerProxy:(id)arg1 activationUUID:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queue_queryDidFinishActivation:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (id)_predicateFilterClasses;
- (void)queue_deactivate;

@end
