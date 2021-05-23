/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSArray, NSOperationQueue, NSString;

@interface _HDDataFaker : NSObject

{
    long long _activityType;
    HKQuantity *_speed;
    CDUnknownBlockType _objectHandler;
    NSOperationQueue *_operationQueue;
    NSArray *_modules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long activityType;
@property (nonatomic, readonly) HKQuantity *speed;

+ (_Bool)_isSupportedActivityType:(long long)arg1;

- (void)stop;
- (void)start;
- (id)_generateSamplesForPeriodIncludeLessFrequentSamples:(_Bool)arg1;
- (void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2;
- (id)initWithActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;
- (void)generateDataForMinutes:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
