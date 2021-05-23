/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput, GCControllerDirectionPad, NSString;

@interface GCControllerTouchpad : GCControllerElement

{
    float _touchpadRelativeWindowSize;
    float _touchpadRelativeOriginBufferSize;
    long long _touchState;
    _Bool _leftBufferZone;
    _Bool _beganTouchOutsideBounds;
    _Bool _previousPressedState;
    struct CGPoint _absoluteWindowLocation;
    struct CGPoint _absolutePosition;
    struct CGPoint _absoluteTouchDownPosition;
    struct CGPoint _relativePosition;
    NSString *_descriptionName;
    _Bool _reportsAbsoluteTouchSurfaceValues;
    GCControllerButtonInput *_button;
    CDUnknownBlockType _touchDown;
    CDUnknownBlockType _touchMoved;
    CDUnknownBlockType _touchUp;
    GCControllerDirectionPad *_touchSurface;
}

@property (retain, nonatomic) GCControllerDirectionPad *touchSurface;
@property (nonatomic, readonly) GCControllerButtonInput *button;
@property (copy, nonatomic) CDUnknownBlockType touchDown;
@property (copy, nonatomic) CDUnknownBlockType touchMoved;
@property (copy, nonatomic) CDUnknownBlockType touchUp;
@property (nonatomic, readonly) long long touchState;
@property (nonatomic) _Bool reportsAbsoluteTouchSurfaceValues;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptionName:(id)arg1;
- (double)distanceBetweenCGPoint:(struct CGPoint)arg1 andCGPoint:(struct CGPoint)arg2;
- (struct CGPoint)mulCGPoint:(struct CGPoint)arg1 byScalar:(double)arg2;
- (struct CGPoint)normalizeCGPoint:(struct CGPoint)arg1;
- (struct CGPoint)scaleCGPoint:(struct CGPoint)arg1 toLength:(double)arg2;
- (struct CGPoint)addCGPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)magnitudeForCGPoint:(struct CGPoint)arg1;
- (struct CGPoint)subCGPoint:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2;
- (struct CGPoint)clampPoint:(struct CGPoint)arg1 toLength:(double)arg2;
- (_Bool)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (_Bool)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)reportDigitizerChange:(id)arg1;
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2 touchDown:(_Bool)arg3 pressed:(_Bool)arg4;
- (_Bool)setDigitizerX:(float)arg1 digitizerY:(float)arg2 timeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4 queue:(id)arg5;
- (void)setValue:(float)arg1 yAxis:(float)arg2 touchDown:(_Bool)arg3;

@end
