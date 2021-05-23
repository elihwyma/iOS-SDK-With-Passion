/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PGManager;

@interface PGHighlightStatisticsEstimator : NSObject

{
    PGManager *_manager;
    NSDictionary *_highlightEstimatesDictionary;
}

@property (retain) PGManager *manager;
@property (nonatomic, readonly) NSDictionary *highlightEstimatesDictionary;
@property (nonatomic, readonly) NSString *highlightEstimatesDescription;

- (id)initWithManager:(id)arg1;
- (id)_createHighlightEstimatesDictionary;
- (_Bool)_isUtilityAsset:(id)arg1;
- (unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1;
- (id)_collectDetailsForTripsAndWeekends:(id)arg1;
- (id)_collectDetailsForAggregations:(id)arg1;
- (id)_highlightEstimatesDescriptionWithData:(id)arg1;
- (id)_stringDescriptionForTripWeekendDetails:(id)arg1;
- (id)_stringDescriptionForHomeWorkAggregations:(id)arg1;
- (id)_stringDescriptionForMomentsDetails:(id)arg1;

@end
