/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSMapTable, NSMutableOrderedSet;

@interface PKFreeTransformGestureRecognizer : UIGestureRecognizer

{
    _Bool _allowSingleTouchDrag;
    _Bool _axisAligned;
    _Bool _canBegin;
    _Bool _isScaling;
    _Bool _isPanning;
    double _startThreshold;
    double _scaleThreshold;
    double _cancelThreshold;
    unsigned long long _allowedPanEdges;
    double _minScale;
    double _maxScale;
    double _scaleDamping;
    double _previousScale;
    NSMutableOrderedSet *_touches;
    double _deltaScale;
    NSMapTable *_touchStartLocations;
    NSMapTable *_actualTouchStartLocations;
    struct CGAffineTransform _accumulatedTransform;
}

@property (nonatomic) _Bool canBegin;
@property (nonatomic) _Bool isScaling;
@property (nonatomic) _Bool isPanning;
@property (nonatomic) double previousScale;
@property (nonatomic) double deltaScale;
@property (nonatomic) struct CGAffineTransform accumulatedTransform;
@property (retain, nonatomic) NSMapTable *touchStartLocations;
@property (retain, nonatomic) NSMapTable *actualTouchStartLocations;
@property (nonatomic) double startThreshold;
@property (nonatomic) double scaleThreshold;
@property (nonatomic) double cancelThreshold;
@property (nonatomic) unsigned long long allowedPanEdges;
@property (nonatomic) _Bool allowSingleTouchDrag;
@property (nonatomic) _Bool axisAligned;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (nonatomic) double scaleDamping;
@property (nonatomic, readonly) _Bool scaleIsGrowing;
@property (nonatomic, readonly) _Bool scaleIsShrinking;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGAffineTransform freeTransform;
@property (nonatomic, readonly) struct CGAffineTransform unscaledFreeTransform;
@property (nonatomic, readonly) NSMutableOrderedSet *touches;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)clearTouches;
- (struct CGAffineTransform)clampTransform:(struct CGAffineTransform)arg1 minScale:(double)arg2 maxScale:(double)arg3;
- (void)resetStartingTouches;
- (void)resetAndAccumulateTransform;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 rejectExcessTouches:(_Bool)arg3;
- (_Bool)touchesMovedPastThreshold:(double)arg1;
- (_Bool)touchesMovedPastScaleThreshold:(double)arg1;

@end
