/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@protocol PGGraphMeaningfulEvent;

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory

{
    id <PGGraphMeaningfulEvent> _meaningfulEvent;
    unsigned long long _meaning;
}

@property (readonly) id <PGGraphMeaningfulEvent> meaningfulEvent;
@property (readonly) unsigned long long meaning;

- (id)initWithCategory:(unsigned long long)arg1 meaningfulEvent:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4;

@end
