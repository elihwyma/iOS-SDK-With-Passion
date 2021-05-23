/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGDeduper.h>

@class VNCreateSceneprintRequest, VNSequenceRequestHandler;

@interface PGSemanticalDeduper : PGDeduper

{
    VNSequenceRequestHandler *_sequenceRequestHandler;
    VNCreateSceneprintRequest *_sceneprintRequest;
    _Bool _usesAdaptiveSimilarStacking;
}

@property (nonatomic) _Bool usesAdaptiveSimilarStacking;

- (void)dealloc;
- (void)cleanup;
- (id)sceneprintByItemIdentifierWithItems:(id)arg1;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)itemsNeedingSceneprintInTimeClusters:(id)arg1;

@end
