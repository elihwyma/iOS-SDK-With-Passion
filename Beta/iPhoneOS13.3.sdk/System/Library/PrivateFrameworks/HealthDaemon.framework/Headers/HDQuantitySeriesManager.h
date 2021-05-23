/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSMutableDictionary;

@interface HDQuantitySeriesManager : NSObject

{
    NSMutableDictionary *_observerLock_observersByType;
    struct os_unfair_lock_s _observerLock;
    HDProfile *_profile;
}

@property (weak, nonatomic, readonly) HDProfile *profile;

- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)_observersForType:(id)arg1;
- (void)removeObserver:(id)arg1 forType:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (_Bool)insertValues:(id)arg1 series:(id)arg2 error:(id *)arg3;
- (id)freezeSeries:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 error:(id *)arg4;
- (void)_notifyForValues:(id)arg1 series:(id)arg2 anchor:(id)arg3 journaled:(_Bool)arg4;
- (_Bool)discardSeries:(id)arg1 error:(id *)arg2;
- (void)samplesAdded:(id)arg1 type:(id)arg2 anchor:(id)arg3;
- (void)addObserver:(id)arg1 forType:(id)arg2 queue:(id)arg3;

@end
