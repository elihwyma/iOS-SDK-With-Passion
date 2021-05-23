/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/_ATXAppLaunchCategoricalHistogram.h>

@class ATXBackgroundSaver, _ATXDataStore;

@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : _ATXAppLaunchCategoricalHistogram

{
    ATXBackgroundSaver *_saver;
    _ATXDataStore *_datastore;
    long long _histogramType;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) long long histogramType;

- (void)flush;
- (void)resetData;
- (_Bool)removeHistoryForBundleId:(id)arg1;
- (int)removeHistoryForBundleIds:(id)arg1;
- (void)resetHistogram:(id)arg1;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 weight:(float)arg4;
- (_Bool)removeHistoryForCategory:(id)arg1;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveOnBackgroundQueue:(id)arg3 maxCategoryCount:(unsigned short)arg4 pruningMethod:(long long)arg5;

@end
