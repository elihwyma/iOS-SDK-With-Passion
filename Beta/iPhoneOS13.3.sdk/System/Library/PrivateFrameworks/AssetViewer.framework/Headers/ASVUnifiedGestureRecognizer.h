/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

#import <AssetViewer/Swift-Protocol.h>

@class ASVGesture, ASVGestureFeedbackGenerator, MISSING_TYPE, NSMutableSet, NSString, NSTimer;

@protocol ASVGestureDataSource, ASVUnifiedGestureRecognizerDelegate;

@interface ASVUnifiedGestureRecognizer : NSObject <Swift>

{
    _Bool _allowObjectScaling;
    _Bool _isScaleAnimating;
    _Bool _lastTapWasOnAsset;
    float _currentObjectScale;
    float _animateScaleStart;
    float _animateScaleEnd;
    id <ASVGestureDataSource> _dataSource;
    id <ASVUnifiedGestureRecognizerDelegate> _delegate;
    ASVGestureFeedbackGenerator *_feedbackGenerator;
    unsigned long long _enabledGestureTypes;
    double _lastTapTime;
    MISSING_TYPE *_lastTapLocation;
    double _lastFireFeedbackTime;
    NSTimer *_singleTapTimer;
    double _startScaleAnimationTime;
    ASVGesture *_currentGesture;
    NSMutableSet *_currentTouches;
}

@property (nonatomic) double lastTapTime;
@property (nonatomic) MISSING_TYPE *lastTapLocation;
@property (nonatomic) _Bool lastTapWasOnAsset;
@property (nonatomic) double lastFireFeedbackTime;
@property (retain, nonatomic) NSTimer *singleTapTimer;
@property (nonatomic) double startScaleAnimationTime;
@property (nonatomic) float animateScaleStart;
@property (nonatomic) float animateScaleEnd;
@property (retain, nonatomic) ASVGesture *currentGesture;
@property (retain, nonatomic) NSMutableSet *currentTouches;
@property (weak, nonatomic) id <ASVGestureDataSource> dataSource;
@property (weak, nonatomic) id <ASVUnifiedGestureRecognizerDelegate> delegate;
@property (retain, nonatomic) ASVGestureFeedbackGenerator *feedbackGenerator;
@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic) unsigned long long enabledGestureTypes;
@property (nonatomic, readonly) _Bool isDecelerating;
@property (nonatomic) _Bool allowObjectScaling;
@property (nonatomic) float currentObjectScale;
@property (nonatomic) _Bool isScaleAnimating;
@property (nonatomic, readonly) float animatedScaleValue;
@property (nonatomic, readonly) _Bool isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) float minimumObjectScale;
@property (nonatomic, readonly) float maximumObjectScale;

- (void)update;
- (id)initWithDelegate:(id)arg1 feedbackGenerator:(id)arg2;
- (void)cancelDeceleration;
- (void)gesture:(id)arg1 singleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;
- (void)gesture:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2;
- (void)gestureBeganScaling:(id)arg1;
- (void)gesture:(id)arg1 scaledAssetToScale:(float)arg2;
- (void)gestureEndedScaling:(id)arg1;
- (void)gestureDidSnapToScale:(id)arg1;
- (void)gestureDidSnapAwayFromScale:(id)arg1;
- (void)gestureStartScaleAnimationFrom:(float)arg1 to:(float)arg2;
- (void)gestureStopScaleAnimation;
- (id)singleFingerGestureForTouch:(id)arg1 dataSource:(id)arg2 enabledGestureTypes:(unsigned long long)arg3;
- (id)twoFingerGestureForFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3;
- (float)clampedScaleForScale:(float)arg1;
- (void)processTouches:(id)arg1 phase:(long long)arg2;
- (_Bool)gestureTypeIsEnabled:(unsigned long long)arg1;
- (_Bool)generatesTaps;
- (_Bool)generatesTransforms;
- (_Bool)singleFingerGesturesEnabled;
- (_Bool)twoFingerGesturesEnabled;
- (void)startGestureFromTouches:(id)arg1;
- (void)updateGestureFromTouches:(id)arg1 phase:(long long)arg2;

@end
