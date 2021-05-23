/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXHistogramData, NSMutableDictionary, NSString, _ATXInternalUninstallNotification;

@interface _ATXAppLaunchCategoricalHistogram : NSObject

{
    ATXHistogramData *_histogramData;
    double _maxSSIDCount;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    unsigned short _maxCategoryId;
    NSMutableDictionary *_categoryToCategoryId;
    NSMutableDictionary *_lastDates;
    NSString *_prevCategory;
    unsigned short _prevCategoryId;
    unsigned short _maxCategoryCount;
    long long _pruningMethod;
}

@property (nonatomic, readonly) long long pruningMethod;
@property (nonatomic, readonly) unsigned short maxCategoryCount;
@property (nonatomic, readonly) unsigned short categoryCount;

+ (_Bool)supportsSecureCoding;
+ (id)stringForPruningMethod:(long long)arg1;

- (id)init;
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
- (unsigned short)_eventIdforBundleId:(id)arg1;
- (double)ratio:(double)arg1 over:(double)arg2;
- (double)overallLaunchPopularityForBundleId:(id)arg1;
- (double)entropyForBundleId:(id)arg1;
- (id)lastDate;
- (id)initWithHistogram:(id)arg1 categoryToCategoryId:(id)arg2 maxCategoryId:(unsigned short)arg3 maxCategoryCount:(unsigned short)arg4 lastDates:(id)arg5 pruningMethod:(long long)arg6;
- (void)_setMaxCategoryCount:(unsigned short)arg1 pruningMethod:(long long)arg2;
- (id)initWithType:(long long)arg1 maxCategoryCount:(unsigned short)arg2 pruningMethod:(long long)arg3;
- (_Bool)_tryGetEventIdforBundleId:(id)arg1 createIfMissing:(_Bool)arg2 eventIdOut:(unsigned short *)arg3;
- (_Bool)_tryGetCategoryIdforCategory:(id)arg1 createIfMissing:(_Bool)arg2 categoryIdOut:(unsigned short *)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 weight:(float)arg4;
- (void)_garbageCollectCategoryIds;
- (_Bool)removeHistoryForCategory:(id)arg1;
- (void)_removeMappingForCategory:(id)arg1;
- (void)_reduceCategoryCountTo:(unsigned short)arg1;
- (double)totalLaunchesForBundleId:(id)arg1 category:(id)arg2;
- (double)launchPopularityWithBundleId:(id)arg1 category:(id)arg2;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 category:(id)arg2;
- (double)totalLaunchesForCategory:(id)arg1;
- (double)totalLaunchesForBundleId:(id)arg1;
- (double)overallLaunchPopularityForCategory:(id)arg1;
- (double)overallLaunchPopularityForBundleId:(id)arg1 category:(id)arg2;
- (double)entropyForCategory:(id)arg1;
- (unsigned short)_categoryIdforCategory:(id)arg1;

@end
