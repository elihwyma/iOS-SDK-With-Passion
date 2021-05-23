/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface BWRenderList : NSObject

{
    struct BWRenderListRendererList _rendererList;
    struct BWRenderListRendererNode *_originalMarkerRendererNode;
    struct BWRenderListParameterList _parameterList;
    _Bool _affectsMetadata;
    _Bool _supportsAnimation;
    _Bool _isolationQueuePrepared;
    NSObject<OS_dispatch_queue> *_preparationIsolationQueue;
}

@property (nonatomic, getter=isPrepared) _Bool prepared;
@property (nonatomic, readonly) struct BWRenderListRendererList *rendererList;
@property (nonatomic, readonly) _Bool producesOriginalRender;
@property (nonatomic, readonly) _Bool supportsAnimation;
@property (nonatomic, readonly) _Bool affectsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct BWRenderListParameterList *parameterList;

+ (void)initialize;
+ (id)shallowDepthOfFieldFilterName;

- (void)dealloc;
- (_Bool)shouldAllowOriginalRenderFromNode:(struct BWRenderListRendererNode *)arg1;
- (void)prepareWithParameters:(id)arg1 forInputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (id)initWithResourceProvider:(id)arg1 originalFilters:(id)arg2 processedFilters:(id)arg3 optimizationStrategy:(short)arg4;
- (void)_continueOptimizingRendererList:(struct BWRenderListRendererList *)arg1 parameterList:(struct BWRenderListParameterList *)arg2 withFilter:(id)arg3 fromProvider:(id)arg4 context:(struct BWRenderListOptimizationContext *)arg5;
- (void)_finishOptimizingRendererList:(struct BWRenderListRendererList *)arg1 parameterList:(struct BWRenderListParameterList *)arg2 fromProvider:(id)arg3 context:(struct BWRenderListOptimizationContext *)arg4;
- (_Bool)_shouldUseOptimizationStrategyDependentSDOFRendererForFilterWithName:(id)arg1;
- (_Bool)_shouldUseMetalRendererForFilterWithName:(id)arg1 optimizationStrategy:(short)arg2;
- (_Bool)_shouldStreamingSDOFRendererConsumeFilter:(id)arg1;
- (void)_appendBatchRendererFromProvider:(id)arg1 toRendererList:(struct BWRenderListRendererList *)arg2 parameterList:(struct BWRenderListParameterList *)arg3 withContext:(struct BWRenderListOptimizationContext *)arg4;
- (void)_appendSingleRendererOfType:(short)arg1 forFilter:(id)arg2 fromProvider:(id)arg3 toRendererList:(struct BWRenderListRendererList *)arg4 parameterList:(struct BWRenderListParameterList *)arg5 withContext:(struct BWRenderListOptimizationContext *)arg6;
- (id)initWithAnimationSupported:(_Bool)arg1 affectsMetadata:(_Bool)arg2;
- (id)copyParameters;
- (struct BWRenderListRendererNode *)firstRendererNode;

@end
