/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@class NSSet;

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait

{
    NSSet *_nodes;
    NSSet *_negativeNodes;
    CDUnknownBlockType _additionalMatchingBlock;
}

@property (nonatomic, readonly) NSSet *nodes;
@property (nonatomic, readonly) NSSet *negativeNodes;
@property (copy, nonatomic) CDUnknownBlockType additionalMatchingBlock;

- (_Bool)isActive;
- (id)initWithNodes:(id)arg1;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;

@end
