/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGMeaningfulEventTrait : NSObject

{
    double _minimumScore;
}

@property (nonatomic) double minimumScore;
@property (nonatomic, readonly) _Bool isMatchingRequired;
@property (nonatomic, readonly) _Bool isActive;

- (id)init;
- (id)debugDescription;
- (id)debugDescriptionWithMomentNode:(id)arg1;

@end
