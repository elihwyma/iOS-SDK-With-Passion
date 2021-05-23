/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/_ATXAppLaunchHistogram.h>

@class ATXBackgroundSaver, _ATXDataStore;

@interface _ATXAppLaunchHistogramWithPersistentBackup : _ATXAppLaunchHistogram

{
    ATXBackgroundSaver *_saver;
    _ATXDataStore *_datastore;
    long long _histogramType;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) long long histogramType;

- (void)flush;
- (void)resetData;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLifeInDays:(double)arg1;
- (_Bool)removeHistoryForBundleId:(id)arg1;
- (int)removeHistoryForBundleIds:(id)arg1;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4;
- (void)removeLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2 weight:(float)arg3;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveOnBackgroundQueue:(id)arg3;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 loadFromDataStore:(_Bool)arg3 saveOnBackgroundQueue:(id)arg4;

@end
