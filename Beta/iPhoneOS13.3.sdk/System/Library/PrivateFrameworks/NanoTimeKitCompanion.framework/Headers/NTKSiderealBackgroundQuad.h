/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, MISSING_TYPE, MTLRenderPassDescriptor, NSArray, NSOrderedSet, NTKAltitudeColorCurve, NTKSiderealCachedMTLTexture, NTKSiderealDataSource;

@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface NTKSiderealBackgroundQuad : CLKUIQuad

{
    CLKDevice *_clkDevice;
    id <MTLDevice> _device;
    id <MTLRenderPipelineState> _mtlSolidPipelineState;
    id <MTLRenderPipelineState> _mtlGradientPipelineState;
    id <MTLRenderPipelineState> _mtlGlowPipelineState;
    id <MTLRenderPipelineState> _mtlSpritePipelineState;
    id <MTLRenderPipelineState> _mtlBlurPipelineState;
    id <MTLRenderPipelineState> _mtlCompositePipelineState;
    id <MTLTexture> _gradientTex;
    id <MTLBuffer> _mtlIndexBuffer;
    id <MTLBuffer> _mtlSectorDescriptorBuffers[3];
    unsigned short _currentBufferIndex;
    NTKSiderealCachedMTLTexture *_dialTex;
    NTKSiderealCachedMTLTexture *_waypointTex;
    NTKSiderealCachedMTLTexture *_gnomonTexture;
    NTKSiderealCachedMTLTexture *_dayGnomonTexture;
    NTKSiderealCachedMTLTexture *_dayDiskBloomTexture;
    NTKSiderealCachedMTLTexture *_dayDiskTexture;
    NTKSiderealCachedMTLTexture *_nightGnomonTexture;
    NTKSiderealCachedMTLTexture *_nightDiskTexture;
    NTKSiderealCachedMTLTexture *_nightRingTexture;
    struct CGSize _size;
    NSOrderedSet *_sectors;
    double _dayProgress;
    NTKAltitudeColorCurve *_civilTwilightCurve;
    NTKAltitudeColorCurve *_nauticalTwilightCurve;
    NTKAltitudeColorCurve *_astronomicalTwilightCurve;
    NTKAltitudeColorCurve *_nightColorCurve;
    NTKAltitudeColorCurve *_bloomColorCurve;
    NSArray *_dayGradientCurves;
    NSArray *_dayGradientInterpolations;
    float _antiAliasWidth;
    MISSING_TYPE *_ticksColor_dim;
    MISSING_TYPE *_ticksColor_bright;
    MISSING_TYPE *_waypointsColor;
    NTKSiderealDataSource *_dataSource;
    double _glowStartAngle;
    double _glowEndAngle;
    float _diameter;
    float _orbitDiameter;
    MTLRenderPassDescriptor *_offscreenPassDescriptor;
    MTLRenderPassDescriptor *_verticalBlurPassDescriptor;
    MTLRenderPassDescriptor *_horizontalBlurPassDescriptor;
    id <MTLTexture> _offscreenBuffer;
    id <MTLTexture> _verticalBlurBuffer;
    id <MTLTexture> _horizontalBlurBuffer;
    float _blurOrbitRadius;
    float _blurRadius;
    _Bool _shouldDrawGlowPath;
    float _litProgress;
    float _backgroundDimming;
    float _blurScale;
    unsigned long long _renderingMode;
    id <MTLTexture> _dayMask;
    id <MTLTexture> _nightMask;
}

@property (nonatomic) float litProgress;
@property (nonatomic) float backgroundDimming;
@property (nonatomic) float blurScale;
@property (nonatomic) _Bool shouldDrawGlowPath;
@property (nonatomic) unsigned long long renderingMode;
@property (retain, nonatomic) id <MTLTexture> dayMask;
@property (retain, nonatomic) id <MTLTexture> nightMask;

- (void)setupForQuadView:(id)arg1;
- (_Bool)prepareForTime:(double)arg1;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (id)_currentBuffer;
- (void)setSolarDayProgress:(double)arg1;
- (void)loadGradientTexture:(CDUnknownBlockType)arg1;
- (void)updateAntiAliasWidth;
- (void)dataSourceChanged;
- (id)generateGradientData:(CDUnknownBlockType)arg1;
- (int)numSlicesForAngle:(double)arg1;
- (id)initWithDevice:(id)arg1 orbitDiameter:(double)arg2 timeOrbitRadius:(double)arg3 timeRadius:(double)arg4 dialImage:(id)arg5 waypointImage:(id)arg6 gnomonImage:(id)arg7 dayGnomonImage:(id)arg8 dayDiskBloomImage:(id)arg9 dayDiscImage:(id)arg10 nightGnomonImage:(id)arg11 nightDiscImage:(id)arg12 nightRingImage:(id)arg13 dataSource:(id)arg14;
- (void)setGlowViewStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)updateWaypointImage:(id)arg1;
- (void)setSectors:(id)arg1;

@end
