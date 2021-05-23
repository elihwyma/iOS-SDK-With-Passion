/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait

{
    double _minimumAestheticScore;
}

@property (nonatomic) double minimumAestheticScore;

- (_Bool)isActive;
- (id)initWithMinimumContentScore:(double)arg1 minimumAestheticScore:(double)arg2;

@end
