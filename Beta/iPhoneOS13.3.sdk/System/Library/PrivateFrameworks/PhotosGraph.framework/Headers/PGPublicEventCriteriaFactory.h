/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PGGraph;

@interface PGPublicEventCriteriaFactory : NSObject

{
    PGGraph *_graph;
    NSDictionary *_disambiguationCriteriaByEventCategory;
    NSDictionary *_highConfidenceCriteriaByEventCategory;
    NSDictionary *_prohibitedCriteriaByEventCategory;
}

@property (retain, nonatomic) PGGraph *graph;
@property (nonatomic, readonly) NSDictionary *disambiguationCriteriaByEventCategory;
@property (nonatomic, readonly) NSDictionary *highConfidenceCriteriaByEventCategory;
@property (nonatomic, readonly) NSDictionary *prohibitedCriteriaByEventCategory;

+ (id)publicEventCriteriaByCategoryForGraph:(id)arg1;

- (id)_publicEventCriteriaByCategory;
- (id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)arg1 inferenceType:(unsigned long long)arg2;
- (id)_sportsCriteriaArray;
- (id)_musicConcertsCriteriaArray;
- (id)_theaterCriteriaArray;
- (id)_danceCriteriaArray;
- (id)_nightLifeCriteriaArray;
- (id)_artsAndMuseumsCriteriaArray;
- (id)_festivalsAndFairsCriteriaArray;
- (id)_appleEventsCriteriaArray;

@end
