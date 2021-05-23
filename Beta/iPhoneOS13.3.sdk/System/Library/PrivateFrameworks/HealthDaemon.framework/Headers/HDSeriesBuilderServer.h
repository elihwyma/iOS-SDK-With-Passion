/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDSeriesBuilderEntity, HKSeriesBuilderConfiguration, HKSeriesSample, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HDSeriesBuilderServer : HDStandardTaskServer <Swift>

{
    HKSeriesBuilderConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    long long _queue_state;
    HKSeriesSample *_seriesSample;
    HDSeriesBuilderEntity *_persistentEntity;
}

@property (copy, nonatomic) HKSeriesBuilderConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, setter=queue_setState:) long long queue_state;
@property (retain, nonatomic) HKSeriesSample *seriesSample;
@property (retain, nonatomic) HDSeriesBuilderEntity *persistentEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (long long)state;
- (id)exportedInterface;
- (void)setState:(long long)arg1;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_discardWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_freezeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_recoverOrCreatePersistentEntity;
- (void)_queue_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_discardIfAuthorizedWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_freezeBuilderWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)queue_canInsertDataWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)canAddMetadata:(id)arg1 errorOut:(id *)arg2;
- (void)createSeriesSampleIfNeeded:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)queue_recoverBuilder;
- (void)_queue_discardSeriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)discardSeriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)associateToWorkoutBuilderWithCompletion:(CDUnknownBlockType)arg1;

@end
