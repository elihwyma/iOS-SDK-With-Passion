/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSDictionary, NSIndexSet, NSSet;

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory

{
    _Bool _isBirthday;
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_momentKeywords;
    NSSet *_peopleNodes;
    NSIndexSet *_sortedCriteria;
    double _matchingScore;
    double _contentScore;
    double _neighborScore;
}

@property (retain) NSDictionary *matchingKeywords;
@property (retain) NSDictionary *referenceKeywords;
@property (retain) NSDictionary *momentKeywords;
@property (retain) NSSet *peopleNodes;
@property _Bool isBirthday;
@property (retain) NSIndexSet *sortedCriteria;
@property double matchingScore;
@property double contentScore;
@property double neighborScore;

@end
