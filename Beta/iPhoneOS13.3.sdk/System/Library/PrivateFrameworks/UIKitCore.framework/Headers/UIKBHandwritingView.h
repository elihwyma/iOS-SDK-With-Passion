/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, UIBezierPath, UIDelayedAction, UIImageView, UIKBHandwritingBezierPathPointFIFO, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingInputSpeedModel, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingStrokePointFIFO, UIKBHandwritingStrokeView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView <Swift>

{
    _Bool _initialPointPosted;
    double _inkWidth;
    struct CGColor *_inkColor;
    struct CGImage *_inkMask;
    NSMutableArray *_interpolatedPoints;
    UIBezierPath *_currentPath;
    NSMutableArray *_currentPoints;
    UIKBHandwritingStrokePointFIFO *_strokeFIFO;
    UIKBHandwritingBoxcarFilterPointFIFO *_smoothingFIFO;
    UIKBHandwritingQuadCurvePointFIFO *_interpolatingFIFO;
    UIKBHandwritingBezierPathPointFIFO *_bezierPathFIFO;
    UIKBHandwritingStrokeView *_strokeView;
    UIImageView *_snapshotView;
    NSMutableSet *_activeTouches;
    double _pageOffset;
    UIDelayedAction *_nextPageTimer;
    UIKBHandwritingInputSpeedModel *_inputSpeedModel;
    CDStruct_23d8ee2f _previousPoint;
}

@property (retain, nonatomic) UIKBHandwritingStrokeView *strokeView;
@property (retain, nonatomic) UIImageView *snapshotView;
@property (retain, nonatomic) NSMutableSet *activeTouches;
@property (nonatomic) _Bool initialPointPosted;
@property (nonatomic) CDStruct_19cde01f previousPoint;
@property (nonatomic) double pageOffset;
@property (retain, nonatomic) UIDelayedAction *nextPageTimer;
@property (retain, nonatomic) UIKBHandwritingInputSpeedModel *inputSpeedModel;
@property (nonatomic) double inkWidth;
@property (nonatomic) struct CGColor *inkColor;
@property (nonatomic) struct CGImage *inkMask;
@property (retain, nonatomic) NSMutableArray *interpolatedPoints;
@property (retain, nonatomic) UIBezierPath *currentPath;
@property (retain, nonatomic) NSMutableArray *currentPoints;
@property (retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO;
@property (retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) UIKBHandwritingBezierPathPointFIFO *bezierPathFIFO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)log;
- (void)send;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (_Bool)cancelTouchTracking;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateInkColor;
- (void)recreateInkMaskIfNeeded;
- (id)layerForRenderFlags:(long long)arg1;
- (void)cancelPageOffsetTimer;
- (void)pageOffsetTimerFired;
- (void)startFadeOutAnimation;
- (void)clearAndNotify:(_Bool)arg1;
- (unsigned long long)numberOfStrokes;
- (void)addInkPoint:(struct CGPoint)arg1 value:(double)arg2;
- (void)touchPageOffsetTimer;
- (_Bool)endStrokeWithTouches:(id)arg1 event:(id)arg2;
- (void)deleteStrokesAtIndexes:(id)arg1;
- (_Bool)shouldCache;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1;
- (void)clearTouches;

@end
