/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class SignpostCAInstrumentationProcessor, SignpostCAStallAggregation;

@protocol OS_dispatch_queue;

@interface SignpostCAStallAggregationBuilder : NSObject

{
    unsigned long long _frameLifetimeCount;
    unsigned long long _commitCount;
    unsigned long long _transactionLifetimeCount;
    float _maxDurationSec;
    NSObject<OS_dispatch_queue> *_syncQueue;
    SignpostCAStallAggregation *_stallAggregation;
    SignpostCAInstrumentationProcessor *_caInstrumentationProcessor;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) SignpostCAStallAggregation *stallAggregation;
@property (nonatomic, readonly) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (copy, nonatomic, readonly) SignpostCAStallAggregation *stallAggregationSnapshot;
@property (nonatomic) float maxDurationSec;

- (id)init;
- (void)handleSignpostInterval:(id)arg1;
- (void)handleSignpostIntervalBegin:(id)arg1;
- (void)handleSignpostEvent:(id)arg1;
- (void)handleDeviceReboot;
- (id)newConfiguredExtractor;
- (void)_handleLongCommit:(id)arg1;
- (void)_handleLongTransactionLifetime:(id)arg1;
- (void)_handleLongFrameLifetime:(id)arg1;
- (void)_initializeCAInstrumentationProcessor;
- (_Bool)_isOverThreshold:(id)arg1;
- (void)_processDurationNs:(unsigned long long)arg1 type:(unsigned char)arg2 processExecutablePath:(id)arg3 pid:(int)arg4 aggregateForSystem:(_Bool)arg5;
- (void)addSubsystemCategoriesOfInterestToWhitelist:(id)arg1;

@end
