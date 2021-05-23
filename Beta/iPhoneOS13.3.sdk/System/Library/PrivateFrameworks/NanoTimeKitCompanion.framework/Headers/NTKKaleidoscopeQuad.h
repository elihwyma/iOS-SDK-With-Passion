/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKitUI/CLKUIQuad.h>

@class CLKUITexture, MISSING_TYPE, NTKKaleidoscopeResourceManager;

@protocol MTLBuffer, MTLRenderPipelineState;

@interface NTKKaleidoscopeQuad : CLKUIQuad

{
    NTKKaleidoscopeResourceManager *_loader;
    id <MTLBuffer> _geomBuffer;
    id <MTLRenderPipelineState> _mtlPipelineOpaque;
    id <MTLRenderPipelineState> _mtlPipelineBlend;
    MISSING_TYPE *_aspect;
    float _alpha;
    float _rotation;
    float _dialRadius;
    CLKUITexture *_primaryLumaTexture;
    CLKUITexture *_primaryChromaTexture;
    CLKUITexture *_secondaryTexture;
    unsigned long long _shaderType;
    MISSING_TYPE *_sampleCenter;
    MISSING_TYPE *_sampleRadius;
}

@property (retain, nonatomic) CLKUITexture *primaryLumaTexture;
@property (retain, nonatomic) CLKUITexture *primaryChromaTexture;
@property (retain, nonatomic) CLKUITexture *secondaryTexture;
@property (nonatomic, readonly) unsigned long long shaderType;
@property (nonatomic) float alpha;
@property (nonatomic) MISSING_TYPE *sampleCenter;
@property (nonatomic) MISSING_TYPE *sampleRadius;
@property (nonatomic) float rotation;
@property (nonatomic) float dialRadius;

+ (id)quadWithShaderType:(unsigned long long)arg1;

- (void)dealloc;
- (void)purge;
- (void)setupForQuadView:(id)arg1;
- (_Bool)prepareForTime:(double)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (id)initWithShaderType:(unsigned long long)arg1;
- (id)mtlPipelineOpaque;
- (id)mtlPipelineBlend;
- (id)geomBuffer;

@end
