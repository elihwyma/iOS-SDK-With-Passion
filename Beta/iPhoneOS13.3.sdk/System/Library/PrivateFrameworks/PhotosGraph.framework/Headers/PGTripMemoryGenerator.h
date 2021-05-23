/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, PGGraphHighlightGroupNode;

@interface PGTripMemoryGenerator : PGFeaturedMemoryGenerator

{
    unsigned long long _numberOfUntimelyRejects;
    NSDate *_lowerBoundLocalDate;
    PGGraphHighlightGroupNode *_tripNode;
    unsigned long long _subcategory;
}

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (retain, nonatomic) PGGraphHighlightGroupNode *tripNode;
@property (readonly) unsigned long long subcategory;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)initWithSubcategory:(unsigned long long)arg1 controller:(id)arg2;
- (id)potentialMemoryWithTripNode:(id)arg1;
- (id)_tripNodeForPotentialMemory:(id)arg1;

@end
