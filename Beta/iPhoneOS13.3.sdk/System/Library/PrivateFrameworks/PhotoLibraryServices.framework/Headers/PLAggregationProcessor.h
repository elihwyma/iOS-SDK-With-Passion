/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSMutableDictionary;

@interface PLAggregationProcessor : NSObject

{
    NSCalendar *_calendar;
    NSMutableDictionary *_curatedAssetCountByMomentUUID;
}

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSMutableDictionary *curatedAssetCountByMomentUUID;

+ (void)initialize;
+ (void)setEnabled:(_Bool)arg1;
+ (_Bool)isEnabled;
+ (void)restoreDefaultEnablement;
+ (unsigned long long)maximumNumberOfAssetsPerMoment;
+ (unsigned long long)maximumNumberOfDaysPerAggregation;
+ (unsigned long long)maximumNumberOfAssetsPerAggregation;

- (id)init;
- (id)sortedNeighborMomentClustersOfMomentClusters:(id)arg1 forAllMomentClusters:(id)arg2;
- (_Bool)_shouldAggregateMoment:(id)arg1;
- (id)processAggregationsWithSortedMomentClusters:(id)arg1 momentsContainedInOtherHighlights:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_aggregationMomentClustersForMomentClusters:(id)arg1;

@end
