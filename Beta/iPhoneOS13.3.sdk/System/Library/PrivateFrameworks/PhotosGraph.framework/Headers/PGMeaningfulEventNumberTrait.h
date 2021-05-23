/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventNumberTrait : PGMeaningfulEventTrait

{
    double _value;
}

@property (nonatomic, readonly) double value;

- (_Bool)isActive;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNumberValue:(double)arg1;

@end
