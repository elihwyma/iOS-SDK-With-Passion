/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList, NSMapTable;

@interface BWInferenceSchedulerFramebufferBuilder : NSObject

{
    BWInferenceSchedulerGraph *_graph;
    BWInferenceSchedulerJobList *_prototypeJobList;
    unsigned long long _jobCount;
    NSMapTable *_directedEdgesByNode;
    _Bool _didVendFramebuffer;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithInferenceRequirements:(id)arg1 dependencyProvider:(id)arg2 formatProvider:(id)arg3;
- (id)newFramebuffer;
- (void)_prepareToConnectNode:(id)arg1;
- (id)_connectNodesExpectingInputs:(id)arg1 toNodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodeForExternalRequirement:(id)arg4;
- (id)_addScalingNodesForNodesExpectingInputs:(id)arg1 nodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodesForExternalRequirements:(id)arg4 fencedMediaKeys:(id)arg5;
- (void)_populateJobList:(id)arg1 fromGraphEdges:(id)arg2 withHeadNode:(id)arg3 jobTypes:(id)arg4;
- (_Bool)_validToDeriveFormat:(id)arg1 fromFormat:(id)arg2 vendingProvider:(id)arg3;
- (id)_newScalingNodesForScalingRequirement:(id)arg1 fencedMedia:(_Bool)arg2;

@end
