//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SiriUICore/SUICFlamesViewProviding-Protocol.h>

@class CADisplayLink, EAGLContext, MISSING_TYPE, NSMutableArray, NSMutableSet, SUICAudioLevelSmoother, SUICFlameGroup, UIColor, UIImage, UIImageView, UIScreen;
@protocol SUICFlamesViewProvidingDelegate;

@interface SUICFlamesViewLegacy : UIView <SUICFlamesViewProviding>
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
    BOOL _transitionFinished;
    BOOL _isInitialized;
    BOOL _hasCustomActiveFrame;
    BOOL _shadersAreCompiled;
    BOOL _reduceMotionEnabled;
    BOOL _showAura;
    BOOL _freezesAura;
    BOOL _renderInBackground;
    BOOL _flamesPaused;
    BOOL _accelerateTransitions;
    BOOL _reduceFrameRate;
    BOOL _reduceThinkingFramerate;
    long long _mode;
    long long _state;
    double _horizontalScaleFactor;
    UIImage *_overlayImage;
    id <SUICFlamesViewProvidingDelegate> _flamesDelegate;
    UIColor *_dictationColor;
    CGRect _activeFrame;
}

+ (void)setIndexCacheSize:(NSUInteger)arg1;
+ (id)_indexCache;
+ (void)prewarmShadersForScreen:(id)arg1 initialFrame:(CGRect)arg2 activeFrame:(CGRect)arg3 fidelity:(long long)arg4 prewarmInBackground:(BOOL)arg5;
+ (void)prewarmShadersForScreen:(id)arg1 activeFrame:(CGRect)arg2 fidelity:(long long)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 fidelity:(long long)arg3 prewarmInBackground:(BOOL)arg4;
+ (void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 fidelity:(long long)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2;
+ (BOOL)_supportsAdaptiveFramerate;
+ (Class)layerClass;
@property(nonatomic) BOOL reduceThinkingFramerate; // @synthesize reduceThinkingFramerate=_reduceThinkingFramerate;
@property(nonatomic) BOOL reduceFrameRate; // @synthesize reduceFrameRate=_reduceFrameRate;
@property(nonatomic) BOOL accelerateTransitions; // @synthesize accelerateTransitions=_accelerateTransitions;
@property(nonatomic) BOOL renderInBackground; // @synthesize renderInBackground=_renderInBackground;
@property(retain, nonatomic) UIColor *dictationColor; // @synthesize dictationColor=_dictationColor;
@property(nonatomic) __weak id <SUICFlamesViewProvidingDelegate> flamesDelegate; // @synthesize flamesDelegate=_flamesDelegate;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) BOOL freezesAura; // @synthesize freezesAura=_freezesAura;
@property(nonatomic) BOOL showAura; // @synthesize showAura=_showAura;
@property(nonatomic) double horizontalScaleFactor; // @synthesize horizontalScaleFactor=_horizontalScaleFactor;
@property(nonatomic) CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (float)_currentMicPowerLevel;
- (void)_didFinishTransition;
- (void)_updateCurveLayer:(id)arg1;
- (BOOL)_isOriginatingProcessInBackground;
@property(readonly, nonatomic) BOOL isRenderingEnabled;
- (void)stopRenderingAndCleanupGL;
- (BOOL)inDictationMode;
- (BOOL)inSiriMode;
- (void)_tearDownDisplayLink;
- (BOOL)_deviceNeeds2xFlamesWithCurrentScale:(double)arg1;
- (double)_currentDisplayScale;
- (void)layoutSubviews;
- (void)_updateOrthoProjection;
- (BOOL)_resizeFromLayer:(id)arg1;
- (void)_cleanupGL;
- (BOOL)_initGLAndSetupDisplayLink:(BOOL)arg1;
- (BOOL)_setupVertexBuffer;
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int )arg4 atStartIndex:(int)arg5 withFill:(BOOL)arg6 withCullingForAura:(BOOL)arg7 forVertices:(struct )arg8;
- 
- (unsigned int)_numVerticesPerCircle;
- (BOOL)_setupShaders;
- (BOOL)_setupFramebuffer;
- (void)_setupDisplayLink;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_reduceMotionStatusChanged:(id)arg1;
- (void)_restoreCurrentContext;
- (BOOL)_setCurrentContext;
- (void)setRenderingEnabled:(BOOL)arg1 forReason:(id)arg2;
- (void)resetAndReinitialize:(BOOL)arg1;
- (void)_prewarmShaders;
- (void)prewarmShadersForCurrentMode;
@property(nonatomic) BOOL flamesPaused; // @synthesize flamesPaused=_flamesPaused;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)_updateDisplayLinkPausedState;
- (long long)_preferredFramesPerSecond;
- (void)_setPreferredFramesPerSecond;
- (void)fadeOutCurrentAura;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 screenScale:(double)arg2 fidelity:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3;
- (void)_setValuesForFidelity:(long long)arg1;

@end

