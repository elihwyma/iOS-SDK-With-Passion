/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSSet;

@interface PGFeatureVectorBasedMemoryGenerator : PGMemoryGenerator

{
    NSSet *_featureVectors;
    unsigned long long _relatedType;
    unsigned long long _memoryCategory;
    unsigned long long _memorySubcategory;
    double _minimumPeopleMatchingScore;
    double _maximumLocationMatchingDistance;
    double _minimumLocationMatchingScore;
}

@property (retain, nonatomic) NSSet *featureVectors;
@property (nonatomic) unsigned long long relatedType;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (nonatomic) double minimumLocationMatchingScore;
@property (nonatomic) double maximumLocationMatchingDistance;
@property (nonatomic) double minimumPeopleMatchingScore;

- (id)initWithController:(id)arg1;
- (id)_potentialMemoriesForDryTesting;
- (id)generateMemories:(unsigned long long)arg1;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (unsigned long long)_postProcessMatch:(id)arg1;

@end
