/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria

{
    _Bool _interestingForMeaningInference;
    PGGraphMomentNode *_moment;
}

@property (nonatomic) _Bool interestingForMeaningInference;
@property (nonatomic, readonly) PGGraphMomentNode *moment;

- (id)debugDescription;
- (id)initWithMoment:(id)arg1;
- (id)matchingResultWithCriteria:(id)arg1;
- (double)matchingScoreWithCriteria:(id)arg1 failed:(_Bool *)arg2 isReliable:(_Bool *)arg3;
- (void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(CDUnknownBlockType)arg3;
- (double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(_Bool)arg3;

@end
