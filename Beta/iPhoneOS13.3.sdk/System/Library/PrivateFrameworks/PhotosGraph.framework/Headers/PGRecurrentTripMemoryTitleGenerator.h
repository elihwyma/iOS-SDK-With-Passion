/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator

{
    NSSet *_locationNodes;
}

@property (retain, nonatomic) NSSet *locationNodes;

- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)_timeTitle;
- (id)initWithLocationNodes:(id)arg1;

@end
