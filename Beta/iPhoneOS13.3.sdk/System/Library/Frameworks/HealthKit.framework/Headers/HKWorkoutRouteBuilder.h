/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSeriesBuilder.h>

#import <HealthKit/Swift-Protocol.h>

@class NSString;

@interface HKWorkoutRouteBuilder : HKSeriesBuilder <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (void)configureClientInterface:(id)arg1;
+ (id)taskServerIdentifier;
+ (void)configureServerInterface:(id)arg1;

- (id)init;
- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1 identifier:(id)arg2 device:(id)arg3 workoutBuilderID:(id)arg4;
- (void)addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1 device:(id)arg2;
- (void)insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
