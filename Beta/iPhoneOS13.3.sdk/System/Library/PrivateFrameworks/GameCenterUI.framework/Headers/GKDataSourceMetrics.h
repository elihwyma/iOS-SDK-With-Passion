/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKGridLayoutMetrics.h>

@class GKCollectionViewDataSource, NSArray, NSMutableDictionary, NSString;

@interface GKDataSourceMetrics : GKGridLayoutMetrics

{
    NSMutableDictionary *_sectionToMetrics;
    NSArray *_childMetrics;
    GKCollectionViewDataSource *_dataSource;
    NSString *_cachedKey;
    struct _NSRange _globalSectionRange;
    struct _NSRange _localSectionRange;
}

@property (retain, nonatomic) NSString *cachedKey;
@property (nonatomic) struct _NSRange globalSectionRange;
@property (nonatomic) struct _NSRange localSectionRange;
@property (retain, nonatomic) NSMutableDictionary *sectionToMetrics;
@property (retain, nonatomic) NSArray *childMetrics;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;

+ (id)dataSourceMetricsWithMetrics:(id)arg1 dataSource:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)metricsForSection:(long long)arg1;
- (void)prepareLayout:(id)arg1;
- (id)initWithMetrics:(id)arg1 dataSource:(id)arg2;
- (id)globalLayoutKey;
- (void)setMetrics:(id)arg1 forSection:(long long)arg2;
- (id)globalLayoutKeyForSection:(long long)arg1;
- (void)computeGlobalSectionRangesWithBaseIndex:(long long)arg1;
- (id)accumulateSections:(id)arg1 layout:(id)arg2;
- (id)applyDataSourceMetricsToSections:(id)arg1 withParent:(id)arg2 layout:(id)arg3;
- (void)generateMetricDataForLayout:(id)arg1;

@end
