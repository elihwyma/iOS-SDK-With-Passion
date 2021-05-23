/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialBusinessMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_businessNode;
    long long _year;
}

@property (readonly) PGGraphNode *businessNode;
@property (readonly) long long year;
@property (readonly) NSString *business;

- (id)initWithBusinessNode:(id)arg1 year:(long long)arg2;
- (void)addMomentNode:(id)arg1;

@end
