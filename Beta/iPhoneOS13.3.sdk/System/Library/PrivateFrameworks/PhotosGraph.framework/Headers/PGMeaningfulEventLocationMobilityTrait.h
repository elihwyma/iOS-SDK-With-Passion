/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventLocationMobilityTrait : PGMeaningfulEventTrait

{
    unsigned long long _value;
}

@property (nonatomic, readonly) unsigned long long value;

- (_Bool)isActive;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithMobility:(unsigned long long)arg1;

@end
