/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator

{
    _Bool _usesLowRequirements;
    _Bool _oldMemory;
    NSDate *_upperBoundLocalDate;
}

@property (retain, nonatomic) NSDate *upperBoundLocalDate;
@property (nonatomic) _Bool usesLowRequirements;
@property (nonatomic) _Bool oldMemory;

@end
