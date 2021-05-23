/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSDateInterval, PGGraphLocationNode;

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator

{
    PGGraphLocationNode *_supersetLocationNode;
    NSDateInterval *_supersetDateInterval;
}

@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (readonly) NSDateInterval *supersetDateInterval;

- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3;
- (id)_timeTitle;

@end
