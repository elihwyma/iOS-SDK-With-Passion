/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMVisionEngineNode.h>

@class NSMutableArray;

@interface AXMSourceNode : AXMVisionEngineNode

{
    NSMutableArray *_nodeQueue_resultHandlers;
    _Bool _shouldProcessRemotely;
}

@property (nonatomic) _Bool shouldProcessRemotely;

+ (_Bool)supportsSecureCoding;

- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)triggerWithContext:(id)arg1 cacheKey:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)resultHandlers;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
- (void)removeResultHandler:(CDUnknownBlockType)arg1;
- (void)removeAllResultHandlers;
- (void)_nodeQueue_addResultHandler:(CDUnknownBlockType)arg1;
- (void)_nodeQueue_removeResultHandler:(CDUnknownBlockType)arg1;
- (void)_nodeQueue_removeAllResultHandlers;

@end
