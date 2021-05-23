/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMapTable;

@protocol BWInferenceJobProvider;

@interface BWInferenceSchedulerGraph : NSObject

{
    id <BWInferenceJobProvider> _head;
    NSMapTable *_directedEdgesByNode;
}

- (void)dealloc;
- (void)visitProvidersWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVideoDestinationsFromJob:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithHeadNode:(id)arg1 directedEdges:(id)arg2;
- (void)_visitJob:(id)arg1 withEnRouteAccumulation:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
