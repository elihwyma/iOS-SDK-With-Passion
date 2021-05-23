/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, _ATXDataStore;

@interface _ATXAppLaunchSequence : NSObject

{
    _ATXDataStore *_datastore;
    NSString *_previousLaunch;
    NSMutableDictionary *_subsequentLaunchCountMap;
    int _launchType;
    struct _opaque_pthread_rwlock_t _rwlock;
    _Bool _previousAppDeleted;
    double _subsequentLaunchTotalCount;
}

@property (nonatomic, readonly) double subsequentLaunchTotalCount;
@property (nonatomic, readonly) _Bool previousAppDeleted;

- (void)dealloc;
- (void)save;
- (id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2;
- (id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(_Bool)arg3;
- (id)initWithPreviousLaunch:(id)arg1 subsequentLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(_Bool)arg4 launchType:(int)arg5;
- (id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2;
- (id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(_Bool)arg3;
- (id)initWithPreviousAppActionLaunch:(id)arg1 subsequentAppActionLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(_Bool)arg4;
- (void)addSubsequentLaunch:(id)arg1;
- (void)deleteDataForLaunch:(id)arg1;
- (void)deleteDataForLaunches:(id)arg1;
- (void)_deleteDataForLaunchLocked:(id)arg1;
- (double)launchCount:(id)arg1;
- (double)likelihoodForLaunch:(id)arg1;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLifeInDays:(double)arg1;
- (void)deleteAllInformation;

@end
