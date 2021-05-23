/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICDrawingCommandData;

@protocol ICDrawingInputControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICDrawingInputController : NSObject

{
    vector_930301b0 _drawPoints;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    id <ICDrawingInputControllerDelegate> _delegate;
    ICDrawingCommandData *_currentCommand;
    long long _currentInputType;
    _Bool _ended;
    double _inputScale;
    float _smoothingKernel[7];
    long long _immutableCount;
    vector_930301b0 _updatedDrawPoints;
    _Bool _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    _Bool _isSnappedToRuler;
    _Bool _useRuler;
    _Bool _isSnappedToRulerTopSide;
    _Bool _canSnapToRuler;
    double _eraserIndicatorAlpha;
    double _rulerWidth;
    double _strokeMaxForce;
    double _touchSensitivity;
    struct ICDrawingPixelSmoothingFilter *_pixelSmoothingFilter;
    struct ICDrawingPointReductionFilter *_pointReductionFilter;
    struct ICDrawingStartHookFilter *_startHookFilter;
    struct ICDrawingEndHookFilter *_endHookFilter;
    struct ICDrawingVelocityCalculationFilter *_velocityFilter;
    struct ICDrawingInputSmoother *_inputSmoother;
    struct ICDrawingInputProviderInitial *_inputProvider;
    struct ICDrawingInputToOutputFilter *_inputToOutputFilter;
    struct ICDrawingAzimuthFilter *_azimuthFilter;
    struct ICDrawingEndCapsFilter *_endCapFilter;
    struct ICDrawingRulerExtremaFilter *_rulerExtremaFilter;
    struct ICDrawingEstimatedAltitudeAndAzimuthFilter *_estimatedAltitudeAndAzimuthFilter;
    struct CGPoint _lastPoint;
    struct CGAffineTransform _rulerTransform;
}

@property (nonatomic) struct CGAffineTransform rulerTransform;
@property (nonatomic) _Bool useRuler;
@property (nonatomic) double rulerWidth;
@property (nonatomic) _Bool isSnappedToRulerTopSide;
@property _Bool isSnappedToRuler;
@property (nonatomic) _Bool canSnapToRuler;
@property (nonatomic) double strokeMaxForce;
@property struct CGPoint lastPoint;
@property (nonatomic) double touchSensitivity;
@property (nonatomic) struct ICDrawingPixelSmoothingFilter *pixelSmoothingFilter;
@property (nonatomic) struct ICDrawingPointReductionFilter *pointReductionFilter;
@property (nonatomic) struct ICDrawingStartHookFilter *startHookFilter;
@property (nonatomic) struct ICDrawingEndHookFilter *endHookFilter;
@property (nonatomic) struct ICDrawingVelocityCalculationFilter *velocityFilter;
@property (nonatomic) struct ICDrawingInputSmoother *inputSmoother;
@property (nonatomic) struct ICDrawingInputProviderInitial *inputProvider;
@property (nonatomic) struct ICDrawingInputToOutputFilter *inputToOutputFilter;
@property (nonatomic) struct ICDrawingAzimuthFilter *azimuthFilter;
@property (nonatomic) struct ICDrawingEndCapsFilter *endCapFilter;
@property (nonatomic) struct ICDrawingRulerExtremaFilter *rulerExtremaFilter;
@property (nonatomic) struct ICDrawingEstimatedAltitudeAndAzimuthFilter *estimatedAltitudeAndAzimuthFilter;
@property (readonly) _Bool lastPointIsMasked;
@property (nonatomic) double eraserIndicatorAlpha;

+ (void)initialize;
+ (void)setupDefaults;
+ (void)loadDefaults;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (void)setInputScale:(double)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)drawingUpdatePoint:(CDStruct_f17e9403)arg1;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (ICDrawingInputProvider_d48c6870 *)outputFilter;
- (double)distanceToRulerCenter:(struct CGPoint)arg1;
- (struct CGPoint)snapPointToRuler:(struct CGPoint)arg1;
- (struct CGPoint)getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg1 andNormal:(struct CGPoint *)arg2;
- (_Bool)shouldSnapPointToRuler:(struct CGPoint)arg1;
- (void)snapToRuler;
- (void)maskToRuler;
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector_930301b0 *)arg2;
- (void)drawingUpdateAllPoints;
- (void)updateImmutableCount;
- (void)_drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)removePredictedTouches;
- (void)updateRulerSnapping;
- (vector_d46ea067 *)getUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (vector_930301b0 *)getInputUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (CDStruct_47a7c924)baseValuesforCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (CDStruct_39925896)parametersforCommandType:(unsigned int)arg1;
- (double)baseRadiusForCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (double)rulerOffset;
- (CDStruct_47a7c924)outputCurrentCommandPoint:(CDStruct_f17e9403)arg1;
- (CDStruct_47a7c924)outputPoint:(CDStruct_f17e9403)arg1 forCommandType:(unsigned int)arg2 baseValues:(CDStruct_47a7c924)arg3;
- (CDStruct_47a7c924)penOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)pencilOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)markerOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (void)handleMarkerStartCapPoint:(CDStruct_47a7c924 *)arg1 forInput:(CDStruct_f17e9403 *)arg2;
- (CDStruct_47a7c924)eraserOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_f17e9403)calculateVelocityForNewPoint:(CDStruct_f17e9403)arg1 previousPoint:(CDStruct_f17e9403)arg2;
- (CDStruct_f17e9403)calculateVelocityForFirstPoint:(CDStruct_f17e9403)arg1;
- (void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 start:(CDUnknownBlockType)arg3;
- (void)snapToRuler:(struct CGAffineTransform)arg1 width:(double)arg2;
- (void)drawingAddPoints:(vector_930301b0)arg1;
- (void)drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)drawingEndedWithPreCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
