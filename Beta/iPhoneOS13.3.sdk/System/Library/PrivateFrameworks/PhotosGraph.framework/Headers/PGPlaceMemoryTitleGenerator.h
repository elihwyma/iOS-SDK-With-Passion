/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphNode;

@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator

{
    PGGraphNode *_placeNode;
}

@property (retain, nonatomic) PGGraphNode *placeNode;

- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 placeNode:(id)arg2;
- (id)_placeTitle;

@end
