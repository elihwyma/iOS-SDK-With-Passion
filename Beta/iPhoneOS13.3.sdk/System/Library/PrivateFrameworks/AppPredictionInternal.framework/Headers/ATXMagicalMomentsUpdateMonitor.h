/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, PMMPredictionNotification;

@protocol OS_dispatch_queue;

@interface ATXMagicalMomentsUpdateMonitor : NSObject

{
    NSDictionary *_predictionMap;
    NSDate *_expiration;
    unsigned long long _mmPredictionCount;
    NSObject<OS_dispatch_queue> *_queue;
    PMMPredictionNotification *_mmUpdateListener;
    unsigned long long _limit;
}

@property (nonatomic, readonly) unsigned long long limit;

- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (void)dropCacheIfExpired;
- (id)predictionsForBundleId:(id)arg1;
- (unsigned long long)mmPredictionCount;
- (void)setupUpdateListener;
- (void)updatePredictionsWith:(id)arg1 consumer:(unsigned long long)arg2;
- (void)_setPredictions:(id)arg1 expiration:(id)arg2 totalPredictionCount:(unsigned long long)arg3;

@end
