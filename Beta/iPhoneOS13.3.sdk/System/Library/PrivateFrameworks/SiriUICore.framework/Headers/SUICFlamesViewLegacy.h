/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, MISSING_TYPE, NSMutableArray, NSMutableSet, NSString, SUICAudioLevelSmoother, SUICFlameGroup, UIColor, UIImage, UIImageView, UIScreen;

@protocol SUICFlamesViewProvidingDelegate;

@interface SUICFlamesViewLegacy : UIView

{
    CADisplayLink *_displayLink;
    EAGLContext *_eaglContext;
    EAGLContext *_previousContext;
    long long _currentContextCount;
    NSMutableSet *_renderingDisabledReasons;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    int _flameProgramHandle;
    int _auraProgramHandle;
    int _vShadID;
    int _fShadID;
    unsigned int _vertexArrayObjectHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _elementArrayHandle;
    unsigned int _numVertices;
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _maxVertexCircles;
    unsigned int _auraVertexCircles;
    float _maxSubdivisionLevel;
    float _auraMinSubdivisionLevel;
    float _auraMaxSubdivisionLevel;
    NSMutableArray *_flameGroups;
    SUICFlameGroup *_currentFlameGroup;
    int _viewWidth;
    int _viewHeight;
    float _dictationUnitSize;
    UIScreen *_screen;
    UIImageView *_overlayImageView;
    double _startTime;
    double _dictationRedColor;
    double _dictationGreenColor;
    double _dictationBlueColor;
    SUICAudioLevelSmoother *_levelSmoother;
    long long _fidelity;
    double _frameRateScalingFactor;
    _Bool _transitionFinished;
    _Bool _isInitialized;
    _Bool _hasCustomActiveFrame;
    _Bool _shadersAreCompiled;
    _Bool _reduceMotionEnabled;
    _Bool _showAura;
    _Bool _freezesAura;
    _Bool _renderInBackground;
    _Bool _flamesPaused;
    _Bool _accelerateTransitions;
    _Bool _reduceFrameRate;
    _Bool _reduceThinkingFramerate;
    long long _mode;
    long long _state;
    double _horizontalScaleFactor;
    UIImage *_overlayImage;
    id <SUICFlamesViewProvidingDelegate> _flamesDelegate;
    UIColor *_dictationColor;
    struct CGRect _activeFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isRenderingEnabled;
@property (weak, nonatomic) id <SUICFlamesViewProvidingDelegate> flamesDelegate;
@property (nonatomic) long long mode;
@property (nonatomic) long long state;
@property (nonatomic) _Bool showAura;
@property (nonatomic) _Bool freezesAura;
@property (nonatomic) _Bool reduceFrameRate;
@property (nonatomic) _Bool reduceThinkingFramerate;
@property (nonatomic) struct CGRect activeFrame;
@property (retain, nonatomic) UIImage *overlayImage;
@property (retain, nonatomic) UIColor *dictationColor;
@property (nonatomic) _Bool renderInBackground;
@property (nonatomic) _Bool flamesPaused;
@property (nonatomic) double horizontalScaleFactor;
@property (nonatomic) _Bool accelerateTransitions;

+ (Class)layerClass;
+ (_Bool)_supportsAdaptiveFramerate;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(long long)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(long long)arg3 prewarmInBackground:(_Bool)arg4;
+ (void)prewarmShadersForScreen:(id)arg1 initialFrame:(struct CGRect)arg2 activeFrame:(struct CGRect)arg3 fidelity:(long long)arg4 prewarmInBackground:(_Bool)arg5;
+ (id)_indexCache;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2;
+ (void)prewarmShadersForScreen:(id)arg1 activeFrame:(struct CGRect)arg2 fidelity:(long long)arg3;
+ (void)setIndexCacheSize:(unsigned long long)arg1;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3;
- (void)_applicationWillEnterForeground:(id)arg1;
- (long long)_preferredFramesPerSecond;
- (void)_tearDownDisplayLink;
- (void)_reduceMotionStatusChanged:(id)arg1;
- (double)_currentDisplayScale;
- (unsigned int)_numVerticesPerCircle;
- (void)_setValuesForFidelity:(long long)arg1;
- (_Bool)_setCurrentContext;
- (void)_restoreCurrentContext;
- (void)_cleanupGL;
- (void)_setupDisplayLink;
- (void)_setPreferredFramesPerSecond;
- (void)_updateDisplayLinkPausedState;
- (_Bool)_initGLAndSetupDisplayLink:(_Bool)arg1;
- (void)_prewarmShaders;
- (void)_updateCurveLayer:(id)arg1;
- (void)resetAndReinitialize:(_Bool)arg1;
- (void)setRenderingEnabled:(_Bool)arg1 forReason:(id)arg2;
- (MISSING_TYPE *)_predeterminedVertexPositionForAuraWithPolarVertex: /* Error: Ran out of types for this method. */;
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int **)arg4 atStartIndex:(int)arg5 withFill:(_Bool)arg6 withCullingForAura:(_Bool)arg7 forVertices:(struct *)arg8;
- (_Bool)_setupFramebuffer;
- (_Bool)_setupVertexBuffer;
- (_Bool)_setupShaders;
- (_Bool)_resizeFromLayer:(id)arg1;
- (void)_updateOrthoProjection;
- (_Bool)_deviceNeeds2xFlamesWithCurrentScale:(double)arg1;
- (float)_currentMicPowerLevel;
- (void)_didFinishTransition;
- (void)prewarmShadersForCurrentMode;
- (void)fadeOutCurrentAura;
- (id)initWithFrame:(struct CGRect)arg1 screenScale:(double)arg2 fidelity:(long long)arg3;
- (_Bool)inSiriMode;
- (_Bool)inDictationMode;
- (void)stopRenderingAndCleanupGL;
- (_Bool)_isOriginatingProcessInBackground;

@end
