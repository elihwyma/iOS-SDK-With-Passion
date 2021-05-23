/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <HealthKitUI/HKGLView.h>

@class GLKTextureInfo, MISSING_TYPE;

@protocol FIUIDeepBreathingPetalRingGLViewDelegate;

@interface FIUIDeepBreathingPetalRingGLView : HKGLView

{
    unsigned int _program;
    MISSING_TYPE *_ringCenterVector;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    struct {
        union _GLKVector2 position;
        union _GLKVector2 coordinate;
    } _vertices[25];
    unsigned int _indices[72];
    unsigned int _projectionMatrixUniform;
    unsigned int _textureSamplerUniform;
    unsigned int _petalPositionUniform;
    unsigned int _petalPropertiesUniform;
    unsigned int _textureRotationUniform;
    GLKTextureInfo *_texture;
    MISSING_TYPE *_circlePosition[20];
    MISSING_TYPE *_circleProperties[20];
    MISSING_TYPE *_textureRotationVector;
    _Bool _showBlurTrails;
    float _ringRadius;
    id <FIUIDeepBreathingPetalRingGLViewDelegate> _petalRingDelegate;
    long long _numberOfPetals;
    long long _numberOfVisiblePetals;
    struct CGPoint _ringCenter;
}

@property (weak, nonatomic) id <FIUIDeepBreathingPetalRingGLViewDelegate> petalRingDelegate;
@property (nonatomic) struct CGPoint ringCenter;
@property (nonatomic) float ringRadius;
@property (nonatomic, readonly) long long numberOfPetals;
@property (nonatomic, readonly) long long numberOfVisiblePetals;
@property (nonatomic, readonly) _Bool showBlurTrails;

- (void)dealloc;
- (void)update;
- (void)_teardown;
- (unsigned int)drawInRect:(struct CGRect)arg1 withContext:(id)arg2;
- (void)_context_createBuffers;
- (void)_context_setupScene;
- (id)initWithFrame:(struct CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(_Bool)arg3;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (void)importDataFromPetalRing:(id)arg1;
- (void)setGradientRotationAngle:(float)arg1;
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)_context_loadShadersWithNumberOfPetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (void)_context_findUniformsAndAttributes;
- (void)_context_applyInitialState;
- (double)_maxPetalRingRadius;
- (void)_updateVertices;
- (void)_setCircleAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)_clearCirclesInRange:(struct _NSRange)arg1;

@end
