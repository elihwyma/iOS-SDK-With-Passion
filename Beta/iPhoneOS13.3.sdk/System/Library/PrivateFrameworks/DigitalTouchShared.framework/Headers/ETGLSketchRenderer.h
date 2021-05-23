/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <Foundation/NSObject.h>

@class CAEAGLLayer, EAGLContext, MISSING_TYPE;

@protocol ETGLSketchRendererDelegate;

@interface ETGLSketchRenderer : NSObject

{
    _Bool _useThisRendererOnlyForWarmup;
    _Bool _isDying;
    _Bool _renderingOffscreen;
    _Bool _useFastVerticalWisp;
    float _currentTimeClock;
    float _currentTimeIndex;
    int _vertexBufferCount;
    int _vertexBufferBegin;
    float _deathTime;
    float _lastBirth;
    unsigned int _shaderProgram;
    unsigned int _vboVertLineId;
    unsigned int _vaoLineID;
    unsigned int _viewRenderbuffer;
    unsigned int _viewFramebuffer;
    unsigned int _backingWidth;
    unsigned int _backingHeight;
    unsigned int _allocatedWidth;
    unsigned int _allocatedHeight;
    double _wispDelay;
    id <ETGLSketchRendererDelegate> _delegate;
    double _lineWidthScaleFactor;
    struct *_allVertices;
    unsigned long long _vertexCount;
    double _cometScaleFactor;
    EAGLContext *_context;
    CAEAGLLayer *_cachedLayer;
    CDUnknownBlockType _completionBlock;
    MISSING_TYPE *_brushColorForInitialColor;
    MISSING_TYPE *_brushColorForFinalColor;
}

@property (nonatomic) struct *allVertices;
@property (nonatomic) int vertexBufferCount;
@property (nonatomic) int vertexBufferBegin;
@property (nonatomic) unsigned long long vertexCount;
@property (nonatomic) float deathTime;
@property (nonatomic) float lastBirth;
@property (nonatomic) MISSING_TYPE *brushColorForInitialColor;
@property (nonatomic) MISSING_TYPE *brushColorForFinalColor;
@property (nonatomic) unsigned int shaderProgram;
@property (nonatomic) unsigned int vboVertLineId;
@property (nonatomic) unsigned int vaoLineID;
@property (nonatomic) unsigned int viewRenderbuffer;
@property (nonatomic) unsigned int viewFramebuffer;
@property (nonatomic) unsigned int backingWidth;
@property (nonatomic) unsigned int backingHeight;
@property (nonatomic) double cometScaleFactor;
@property (nonatomic) unsigned int allocatedWidth;
@property (nonatomic) unsigned int allocatedHeight;
@property (nonatomic) EAGLContext *context;
@property (nonatomic) CAEAGLLayer *cachedLayer;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic, readonly) float currentTimeClock;
@property (nonatomic, readonly) float currentTimeIndex;
@property (nonatomic) _Bool isDying;
@property (nonatomic) double wispDelay;
@property (weak, nonatomic) id <ETGLSketchRendererDelegate> delegate;
@property (nonatomic) _Bool renderingOffscreen;
@property (nonatomic) double lineWidthScaleFactor;
@property (nonatomic) _Bool useFastVerticalWisp;

+ (void)warmupShaders;

- (void)dealloc;
- (void)reset;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)render;
- (id)initWithContext:(id)arg1 andDrawable:(id)arg2;
- (void)setFinalDrawingColor:(MISSING_TYPE **)arg1;
- (void)setInitialDrawingColor:(MISSING_TYPE **)arg1;
- (void)updateGLWithTime:(float)arg1;
- (struct CGImage *)createRenderedFrameImageUsingAlpha:(_Bool)arg1;
- (void)erase;
- (_Bool)resizeFromLayer:(id)arg1;
- (void)appendPointArray:(MISSING_TYPE **)arg1 length:(unsigned long long)arg2;
- (void)appendDualPointArray:(MISSING_TYPE **)arg1 length:(unsigned long long)arg2 controlPoint:(MISSING_TYPE **)arg3 alternatePoints:(unsigned long long)arg4 alternateLength:(float)arg5 alternateControlPoint:(unsigned long long)arg6 unitSize:(unsigned long long)arg7 segmentIndex:segmentCount: /* Error: Ran out of types for this method. */;
- (void)setupFBOs:(id)arg1;
- (void)setupVAOs;
- (void)setupShaders;
- (void)setupTexture;
- (int)loadOneShaderOfType:(unsigned int)arg1 withCString:(const char *)arg2 length:(int)arg3;
- (int)linkProgramWithVShader:(int)arg1 FShader:(int)arg2;
- (_Bool)resizeFromCachedLayer;
- (void)updateVertexBufferWithVertexCount:(unsigned long long)arg1;
- (void)_warmupShaders;
- (void)updateGLWithCurrentTime;

@end
