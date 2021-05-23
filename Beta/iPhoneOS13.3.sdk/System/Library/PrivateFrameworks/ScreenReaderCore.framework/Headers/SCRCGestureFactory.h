/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class SCRCTargetSelectorTimer;

@protocol SCRCGestureFactoryCallback;

@interface SCRCGestureFactory : NSObject

{
    double _stallDistance;
    double _maxDimension;
    double _thumbRegion;
    long long _orientation;
    long long _directions[7];
    struct {
        double horizontal;
        double vertical;
    } _axisFlipper;
    double _scaledTrackingDistance;
    _Bool _setTrackingTimer;
    double _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect _tapSpeedRegion;
    double _tapVelocityThresholdForRegion;
    long long _tapSpeedFingerCount;
    _Bool _inTapSpeedRegionForDownEvent;
    struct CGRect _mainFrame;
    struct CGRect _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    double _lastDegrees;
    double _startDegrees;
    double _startDistance;
    double _potentialTrackingStartTimestamp;
    _Bool _requireUp;
    _Bool _thumbRejectionEnabled;
    long long _state;
    long long _direction;
    double _directionalSlope;
    struct SCRCFingerState _finger[2];
    unsigned long long _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    double _distance;
    unsigned long long _tapCount;
    struct CGRect _tapFrame;
    struct CGRect _tapMultiFrame;
    id <SCRCGestureFactoryCallback> _trackDelegate;
    id <SCRCGestureFactoryCallback> _tapDelegate;
    id <SCRCGestureFactoryCallback> _gutterUpDelegate;
    id <SCRCGestureFactoryCallback> _splitTapDelegate;
    id <SCRCGestureFactoryCallback> _canSplitTapDelegate;
    id <SCRCGestureFactoryCallback> _didBeginSplitGestureDelegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct {
        _Bool isFingerCurrentlyDown;
        _Bool dead;
        _Bool gutterHasBeenTouched;
        unsigned long long numFingersInCurrentGestureEvent;
        unsigned long long totalNumFingersInGesture;
        unsigned long long count;
        struct CGRect frame;
        struct CGPoint location[8];
        struct CGPoint locationPerTap[8];
        double thisTime;
        double lastTime;
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    SCRCGestureFactory *_splitFactory;
    struct {
        _Bool isSplitting;
        _Bool isTapping;
        _Bool fastTrack;
        _Bool tapDead;
        _Bool timedOut;
        _Bool active;
        _Bool didNotify;
        unsigned long long fingerIdentifier;
        double fingerDownTime;
        struct CGPoint startTapLocation;
        struct CGPoint lastTapLocation;
        struct CGPoint primaryFingerLocation;
        double tapDistance;
        long long state;
    } _split;
}

@property (nonatomic) _Bool thumbRejectionEnabled;

- (void)dealloc;
- (void)reset;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (long long)direction;
- (double)velocity;
- (struct CGPoint)startLocation;
- (struct CGPoint)endLocation;
- (struct CGRect)mainFrame;
- (unsigned long long)tapCount;
- (double)distance;
- (struct CGPoint)rawLocation;
- (unsigned long long)fingerCount;
- (void)_up;
- (long long)gestureState;
- (double)vector;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleTap;
- (struct CGRect)_currentTapRect;
- (void)_updateMultiTapFrame;
- (void)_resetSplit;
- (void)_processUpAndPost:(_Bool)arg1;
- (void)_updateTapState;
- (_Bool)_handleSplitTap;
- (CDStruct_fc320275)handleGestureEvent:(id)arg1;
- (CDStruct_fc320275)captureCurrentState;
- (_Bool)_handleSplitEvent:(id)arg1;
- (void)_drag:(id)arg1;
- (void)_down:(id)arg1;
- (void)_updateStartWithPoint:(struct CGPoint)arg1 time:(double)arg2;
- (struct CGRect)tapFrame;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2;
- (void)setFlickSpeed:(double)arg1;
- (double)flickSpeed;
- (void)setTapSpeed:(double)arg1;
- (void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(struct CGRect)arg2 fingerCount:(long long)arg3;
- (double)tapSpeed;
- (void)_handleGutterUp;
- (double)directionalSlope;
- (unsigned long long)absoluteFingerCount;
- (_Bool)tapIsDown;
- (double)firstFingerPressure;
- (double)firstFingerAltitude;
- (double)firstFingerAzimuth;
- (struct CGPoint)rawAverageLocation;
- (struct CGRect)multiTapFrame;
- (struct CGPoint)tapPoint;
- (struct CGPoint)tapPointWeightedToSides;
- (double)tapInterval;
- (id)gestureStateString;

@end
