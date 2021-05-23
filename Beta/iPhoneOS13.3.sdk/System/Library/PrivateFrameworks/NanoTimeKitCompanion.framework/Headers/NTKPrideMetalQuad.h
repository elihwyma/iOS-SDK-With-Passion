/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice;

@protocol MTLComputePipelineState, MTLRenderPipelineState;

@interface NTKPrideMetalQuad : CLKUIQuad

{
    double _currentTime;
    double _renderUntil;
    id <MTLRenderPipelineState> _mtlPipelineState;
    id <MTLComputePipelineState> _mtlComputePipelineState;
    CLKDevice *_clkDevice;
    double _startTime;
    float _timeScale;
}

@property (nonatomic) float timeScale;

- (void)dealloc;
- (double)currentTime;
- (void)setupForQuadView:(id)arg1;
- (_Bool)prepareForTime:(double)arg1;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)renderWithEncoder:(id)arg1;
- (id)computePipelineManager;
- (id)computeShaderName;
- (id)renderPipelineManager;
- (id)renderPipelineName;
- (id)vertexShaderName;
- (id)fragmentShaderName;
- (void)loadMetalTexturesAndBuffersWithDevice:(id)arg1;
- (void)computeWithEncoder:(id)arg1 pipelineState:(id)arg2;
- (_Bool)preSemaphoreComputeForTime:(double)arg1;
- (_Bool)postSemaphoreComputeForTime:(double)arg1;
- (id)initWithDevice:(id)arg1 initialSemaphoreCount:(int)arg2;
- (id)clkDevice;
- (void)handleScreenOff;

@end
