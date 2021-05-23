/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSMapTable, NSMutableArray, NSTimer, SBPolygon, SBTouchTemplate, UIGestureRecognizerTransformAnalyzer;

@protocol SBTouchTemplateGestureRecognizerDelegate;

@interface SBTouchTemplateGestureRecognizer : UIGestureRecognizer

{
    _Bool _recognitionBegan;
    NSTimer *_noChangeCancellationTimer;
    unsigned long long _sequenceNumber;
    NSMutableArray *_possibleTemplates;
    NSMapTable *_initialTouchPointMap;
    unsigned long long _failedRecognitionAttempts;
    unsigned long long _trackingTouchCount;
    double _cumulativeMotion;
    double _cumulativeMotionEnvelope;
    double _smoothedIncrementalMotion;
    NSArray *_templates;
    double _animationDistance;
    long long _requiredDirectionality;
    UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    SBTouchTemplate *_matchedTemplate;
    SBPolygon *_matchedPolygon;
}

@property (nonatomic, readonly, getter=_possibleTemplates) NSMutableArray *possibleTemplates;
@property (nonatomic, readonly, getter=_initialTouchPointMap) NSMapTable *initialTouchPointMap;
@property (nonatomic, getter=_failedRecognitionAttempts, setter=_setFailedRecognitionAttempts:) unsigned long long failedRecognitionAttempts;
@property (nonatomic, getter=_trackingTouchCount, setter=_setTrackingTouchCount:) unsigned long long trackingTouchCount;
@property (nonatomic, getter=_cumulativeMotion, setter=_setCumulativeMotion:) double cumulativeMotion;
@property (nonatomic, getter=_cumulativeMotionEnvelope, setter=_setCumulativeMotionEnvelope:) double cumulativeMotionEnvelope;
@property (nonatomic, getter=_smoothedIncrementalMotion, setter=_setSmoothedIncrementalMotion:) double smoothedIncrementalMotion;
@property (retain, nonatomic, setter=_setNoChangeCancellationTimer:) NSTimer *_noChangeCancellationTimer;
@property (retain, nonatomic) NSArray *templates;
@property (nonatomic) double animationDistance;
@property (nonatomic) long long requiredDirectionality;
@property (nonatomic, readonly) UIGestureRecognizerTransformAnalyzer *transformAnalyzer;
@property (retain, nonatomic, getter=_matchedTemplate, setter=_setMatchedTemplate:) SBTouchTemplate *matchedTemplate;
@property (retain, nonatomic, getter=_matchedPolygon, setter=_setMatchedPolygon:) SBPolygon *matchedPolygon;
@property (weak, nonatomic) id <SBTouchTemplateGestureRecognizerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (nonatomic, readonly) double cumulativePercentage;

- (void)reset;
- (void)_reset;
- (void)log:(id)arg1;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)logCategory;
- (void)_log:(id)arg1;
- (_Bool)hasSignificantMotionToBegin;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (double)_projectedMotionForInterval:(double)arg1;
- (_Bool)_directionallyAcceptMotion:(double)arg1;
- (_Bool)_shouldAddNewTouchesAfterGestureRecognition;
- (void)_updateMatchedTemplateForTouchesBeganOrEnded:(id)arg1;
- (void)_pingNoChangeCancellationTimer;
- (void)_updateForTouchesBeganOrMoved:(id)arg1;
- (id)_polygonForTouches:(id)arg1;
- (void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_updateForTouchesCancelledOrEnded:(id)arg1 state:(long long)arg2 withEvent:(id)arg3;
- (void)_noChangeCancellationTimerFired:(id)arg1;
- (void)_failMeForReason:(id)arg1;
- (void)_attemptTemplateMatchWithTouches:(id)arg1 polygon:(id)arg2;
- (id)_matchedTemplateForTouches:(id)arg1 polygon:(id)arg2;
- (void)_invalidateNoChangeCancellationTimer;
- (void)_resetNoChangeCancellationTimer;
- (long long)projectedCompletionTypeForInterval:(double)arg1;

@end
