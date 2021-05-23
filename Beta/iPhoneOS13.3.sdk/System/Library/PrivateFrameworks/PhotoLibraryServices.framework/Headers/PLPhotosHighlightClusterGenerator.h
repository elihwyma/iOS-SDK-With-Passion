/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, PLDateRangeTitleGenerator, PLFrequentLocationManager, PLLocalCreationDateCreator;

@interface PLPhotosHighlightClusterGenerator : NSObject

{
    NSArray *_allMoments;
    PLFrequentLocationManager *_frequentLocationManager;
    NSDateInterval *_recentHighlightsDateInterval;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
}

@property (nonatomic, readonly) NSArray *allMoments;
@property (nonatomic, readonly) PLFrequentLocationManager *frequentLocationManager;
@property (nonatomic, readonly) NSDateInterval *recentHighlightsDateInterval;
@property (nonatomic, readonly) PLLocalCreationDateCreator *localCreationDateCreator;
@property (nonatomic, readonly) PLDateRangeTitleGenerator *dateRangeTitleGenerator;

- (id)initWithAllMoments:(id)arg1 frequentLocationManager:(id)arg2 recentHighlightDateInterval:(id)arg3 localCreationDateCreator:(id)arg4 dateRangeTitleGenerator:(id)arg5;
- (id)highlightClustersIntersectingMoments:(id)arg1 includeAllTripHighlightClusters:(_Bool)arg2;
- (id)_dayMomentClustersWithMomentsSortedByDate:(id)arg1 localCreationDateCreator:(id)arg2;
- (_Bool)_isRecent:(id)arg1;
- (id)recentMomentsInMomentClusters:(id)arg1;
- (id)_recentMoments;
- (id)_recentHighlightClusterWithMoments:(id)arg1;
- (id)_recentHighlightClusterWithMoments:(id)arg1 intersectingMoments:(id)arg2;
- (id)_tripsInMoments:(id)arg1;
- (id)_aggregationsInMoments:(id)arg1 unavailableMoments:(id)arg2 intersectingMoments:(id)arg3;
- (id)_tripHighlightClustersForMoments:(id)arg1 tripType:(unsigned long long)arg2;
- (id)_aggregationHighlightClustersForMoments:(id)arg1;
- (id)_remainingMomentClustersWithMomentsSortedByDate:(id)arg1;
- (id)_remainingHighlightClusterWithMoments:(id)arg1;
- (id)_remainingHighlightClustersWithClusters:(id)arg1 intersectingMoments:(id)arg2;

@end
