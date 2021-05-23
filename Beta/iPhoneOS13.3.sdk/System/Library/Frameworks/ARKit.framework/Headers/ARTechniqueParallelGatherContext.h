/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechniqueGatherContext.h>

@class NSIndexSet, NSMapTable, NSMutableDictionary, NSMutableIndexSet, NSObject;

@protocol OS_dispatch_semaphore;

@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext

{
    ARTechniqueParallelGatherContext *_previousContext;
    NSIndexSet *_requiredTechniqueIndices;
    NSIndexSet *_deterministicTechniqueIndices;
    unsigned long long _techniqueCount;
    NSMutableDictionary *_gatheredDataByTechniqueIndex;
    NSObject<OS_dispatch_semaphore> *_gatherSemaphore;
    NSMutableIndexSet *_lateResultTechniqueIndices;
    NSMapTable *_techniquesByIndex;
    _Bool _resultsCaptured;
    _Bool _requiredTimeIntervalComplete;
}

@property _Bool requiredTimeIntervalComplete;

- (id)description;
- (id)initWithParentContext:(id)arg1 previousContext:(id)arg2 requiredTechniqueIndices:(id)arg3 deterministicTechniqueIndices:(id)arg4 techniques:(id)arg5;
- (_Bool)deterministicResultsCaptured;
- (id)gatheredData;
- (id)addResultData:(id)arg1 forTechniqueAtIndex:(unsigned long long)arg2;
- (id)captureGatheredData;
- (id)_allGatheredDataByTechniqueIndex;
- (id)lateResultDataForTechniqueAtIndex:(unsigned long long)arg1;

@end
