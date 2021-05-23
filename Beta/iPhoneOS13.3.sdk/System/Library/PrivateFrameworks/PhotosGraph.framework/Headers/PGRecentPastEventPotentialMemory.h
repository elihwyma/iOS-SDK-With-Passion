/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory

{
    _Bool _isBirthday;
    NSSet *_peopleNodes;
    double _meanContentScore;
    double _neighborScore;
}

@property (retain) NSSet *peopleNodes;
@property double meanContentScore;
@property double neighborScore;
@property _Bool isBirthday;

- (id)description;
- (id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(unsigned long long)arg3;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (void)computeRemainingScoresWithManager:(id)arg1 controller:(id)arg2 previousPotentialMemory:(id)arg3;

@end
