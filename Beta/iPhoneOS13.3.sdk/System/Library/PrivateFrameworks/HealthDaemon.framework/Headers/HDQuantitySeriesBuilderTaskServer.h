/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HKQuantitySample, HKQuantitySeriesSampleBuilderTaskServerConfiguration, NSError, NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

@interface HDQuantitySeriesBuilderTaskServer : HDStandardTaskServer

{
    NSObject<OS_dispatch_queue> *_queue;
    HKQuantitySample *_series;
    long long _state;
    NSMutableArray *_values;
    NSError *_fatalError;
    CDUnknownBlockType _queue_activeHandler;
    HKQuantitySeriesSampleBuilderTaskServerConfiguration *_configuration;
    CDUnknownBlockType _unitTest_saveSamplesCompletion;
}

@property (nonatomic, readonly) long long state;
@property (copy, nonatomic) CDUnknownBlockType unitTest_saveSamplesCompletion;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_insertQuantitySeries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_discardWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_insertQuantitySeries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_discardWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_queue_isStateInAllowedStates:(id)arg1 description:(id)arg2 error:(out id *)arg3;
- (void)_queue_newSeriesSaveCompleted;
- (_Bool)_queue_insertQuantitySeries:(id)arg1 series:(id)arg2 forceInsert:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_canSaveOrSanitizeMetadata:(id *)arg1 error:(id *)arg2;

@end
