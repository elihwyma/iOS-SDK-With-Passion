/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimeZone, _ATXInternalUninstallNotification, _PASLock;

@interface _ATXAppLaunchHistogram : NSObject

{
    long long _secondsPerLocaltimeInterval;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    int _timeBase;
    _PASLock *_lock;
    struct _opaque_pthread_mutex_t _prevLocaltimeLock;
    NSDate *_prevDate;
    NSTimeZone *_prevTimeZone;
    unsigned short _prevLocaltime;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)resetData;
- (double)entropy;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLifeInDays:(double)arg1;
- (double)totalLaunches;
- (_Bool)removeHistoryForBundleId:(id)arg1;
- (int)removeHistoryForBundleIds:(id)arg1;
- (_Bool)bundleHasBeenLaunched:(id)arg1;
- (void)verifyDataIntegrity;
- (void)resetHistogram:(id)arg1;
- (id)initWithHistogram:(id)arg1 bucketCount:(unsigned short)arg2 filter:(_Bool)arg3 timeBase:(int)arg4;
- (unsigned short)_localTimeWithDate:(id)arg1 timeZone:(id)arg2;
- (unsigned short)_localTimeWithDate:(id)arg1;
- (unsigned short)_eventIdforBundleId:(id)arg1;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (void)_addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 arbitraryWeight:(float)arg4;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4;
- (void)removeLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2 weight:(float)arg3;
- (double)ratio:(double)arg1 over:(double)arg2;
- (double)launchPopularityWithBundleId:(id)arg1 date:(id)arg2;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2 distanceScale:(float)arg3;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 elapsedTime:(double)arg2 distanceScale:(float)arg3;
- (double)totalTimeOfDayLaunchesForDate:(id)arg1 distanceScale:(float)arg2;
- (double)totalTimeOfDayLaunchesForDate:(id)arg1;
- (double)totalTimeOfDayLaunchesForElapsedTime:(double)arg1 distanceScale:(float)arg2;
- (double)totalTimeOfDayLaunchesForElapsedTime:(double)arg1;
- (double)overallLaunchPopularityForBundleId:(id)arg1;
- (double)averageLaunchesPerBundleId:(id)arg1;
- (double)totalLaunchesForBundleIds:(id)arg1;
- (double)totalLaunchesForBundleIds:(id)arg1 forDate:(id)arg2 distanceScale:(float)arg3;
- (double)entropyForBundleId:(id)arg1;
- (double)entropyForDate:(id)arg1;
- (unsigned short)bucketCount;

@end
