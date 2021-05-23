/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSeriesBuilderServer.h>

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer

{
    HKWorkoutRoute *_route;
}

@property (retain, nonatomic) HKWorkoutRoute *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)seriesSample;
- (void)createSeriesSampleIfNeeded:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)queue_recoverBuilder;
- (void)_queue_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_validateRouteData:(id)arg1 error:(out id *)arg2;
- (void)server_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
