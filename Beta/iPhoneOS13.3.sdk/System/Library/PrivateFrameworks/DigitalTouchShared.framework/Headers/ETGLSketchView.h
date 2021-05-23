/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, ETBoxcarFilterPointFIFO, ETGLSketchRenderer, ETPointFIFO, ETQuadCurvePointFIFO, ETSketchMessage, MISSING_TYPE, UIColor;

@interface ETGLSketchView : UIView

{
    CADisplayLink *_displayLink;
    UIColor *_currentStrokeColor;
    double _lastDisplayLinkTime;
    _Bool _renderingOffscreen;
    unsigned long long _currentStrokeIndex;
    unsigned long long _currentPointIndex;
    unsigned long long _numberOfDrawnStrokes;
    double _renderingDelay;
    double _renderingStartTime;
    double _pauseTime;
    _Bool _playing;
    _Bool _paused;
    _Bool _playbackCompleted;
    _Bool _useFastVerticalWisp;
    float _unitSize;
    ETSketchMessage *_messageData;
    double _wispDelay;
    double _timestampForLastDrawnPoint;
    EAGLContext *_context;
    ETGLSketchRenderer *_renderer;
    ETQuadCurvePointFIFO *_interpolatingFIFO;
    ETBoxcarFilterPointFIFO *_smoothingFIFO;
    ETPointFIFO *_pointFIFO;
    ETQuadCurvePointFIFO *_secondaryInterpolatingFIFO;
    ETBoxcarFilterPointFIFO *_secondarySmoothingFIFO;
    ETPointFIFO *_secondaryPointFIFO;
    unsigned long long _vertexOffset;
    double _delayBetweenStrokes;
    vector_c2d99b46 _vertexBatches;
    vector_e654105b _controlBatches;
    vector_06e666a8 _vertexBatchCount;
    vector_06e666a8 _secondaryVertexBatchCount;
}

@property (retain, nonatomic) EAGLContext *context;
@property (retain, nonatomic) ETGLSketchRenderer *renderer;
@property (retain, nonatomic) ETQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) ETPointFIFO *pointFIFO;
@property (retain, nonatomic) ETQuadCurvePointFIFO *secondaryInterpolatingFIFO;
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *secondarySmoothingFIFO;
@property (retain, nonatomic) ETPointFIFO *secondaryPointFIFO;
@property (nonatomic) float unitSize;
@property (nonatomic) vector_c2d99b46 vertexBatches;
@property (nonatomic) vector_80ea899f controlBatches;
@property (nonatomic) vector_06e666a8 vertexBatchCount;
@property (nonatomic) vector_06e666a8 secondaryVertexBatchCount;
@property (nonatomic) unsigned long long vertexOffset;
@property (nonatomic) double delayBetweenStrokes;
@property (retain, nonatomic) ETSketchMessage *messageData;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) double wispDelay;
@property (nonatomic) double timestampForLastDrawnPoint;
@property (nonatomic) _Bool playbackCompleted;
@property (nonatomic) _Bool useFastVerticalWisp;

+ (Class)layerClass;

- (void)clear;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_endPlayback;
- (void)setGLContextAsCurrent;
- (void)updateRendererWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 controlPoint:(MISSING_TYPE **)arg3 flush:(_Bool)arg4;
- (void)updateRendererWithSecondaryPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 controlPoint:(MISSING_TYPE **)arg3 flush:(_Bool)arg4;
- (void)beginStrokeWithColor:(id)arg1;
- (void)handleTapAtPosition:(struct CGPoint)arg1;
- (void)handleSketchAtPosition:(struct CGPoint)arg1;
- (void)didCompleteStroke;
- (void)_drawCurrentPointAdvancingPlayback;
- (_Bool)_getCurrentSketchPoint:(CDStruct_e6681aac *)arg1;
- (_Bool)_doesPoint:(CDStruct_e6681aac *)arg1 predateTime:(double)arg2;
- (void)drawView:(id)arg1;
- (void)clearAllPoints;
- (void)sketchRendererDidReachVertexLimit:(id)arg1;
- (void)drawFrameBeforeWisp;
- (struct CGImage *)createRenderedFrameImage;
- (struct CGImage *)createImageForTime:(double)arg1;

@end
