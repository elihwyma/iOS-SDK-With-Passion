/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

@protocol OS_dispatch_queue, _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol;

__attribute__((visibility("hidden")))
@interface _UIKBRTRecognizer : NSObject

{
    _Bool _isWaiting;
    _Bool _disableHomeRowReturn;
    id <_UIKBRTRecognizerDelegate> _delegate;
    id <_UIKBRTRecognizerTouchLoggingProtocol> _touchLogger;
    id <_UIKBRTRecognizerTouchPointTrackingProtocol> _touchTracker;
    NSMutableSet *_definitiveRules;
    NSMutableSet *_averagingRules;
    double _maximumNonRestMoveDistance;
    NSObject<OS_dispatch_queue> *_touchQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_touchInfos;
    NSMutableSet *_activeTouches;
    NSObject<OS_dispatch_queue> *_activeTouchesQueue;
    NSMutableArray *_ignoredTouches;
    NSObject<OS_dispatch_queue> *_ignoredTouchesQueue;
    unsigned long long _numProlongedTouches;
    double _touchIntervalAverage;
    struct CGSize _clusterRestHaloSize;
}

@property (nonatomic) struct CGSize clusterRestHaloSize;
@property (nonatomic) double maximumNonRestMoveDistance;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *touchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableArray *touchInfos;
@property (retain, nonatomic) NSMutableSet *activeTouches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activeTouchesQueue;
@property (retain, nonatomic) NSMutableArray *ignoredTouches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ignoredTouchesQueue;
@property (nonatomic) unsigned long long numProlongedTouches;
@property (nonatomic) double touchIntervalAverage;
@property (retain, nonatomic) id <_UIKBRTRecognizerTouchLoggingProtocol> touchLogger;
@property (retain, nonatomic) id <_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker;
@property (nonatomic) id <_UIKBRTRecognizerDelegate> delegate;
@property (nonatomic, readonly) NSMutableSet *definitiveRules;
@property (nonatomic, readonly) NSMutableSet *averagingRules;
@property (nonatomic) _Bool disableHomeRowReturn;

- (id)init;
- (void)reset;
- (void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2;
- (void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2;
- (void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(_Bool)arg3;
- (void)touchDragged:(id)arg1 withIdentifier:(id)arg2;
- (void)touchUp:(id)arg1 withIdentifier:(id)arg2;
- (void)touchCancelled:(id)arg1 withIdentifier:(id)arg2;
- (void)setStandardKeyPixelSize:(struct CGSize)arg1;
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2;
- (void)kbStatusMessage:(id)arg1;
- (_Bool)queryDelegateOfIgnoringTouch:(id)arg1 forOtherTouch:(_Bool)arg2;
- (float)letRulesModifyNewTouchInfo:(id)arg1;
- (void)letRulesModifyPendingTouchInfo:(id)arg1;
- (_Bool)makeTouchActive:(id)arg1;
- (void)_doBeginTouchWithTouchInfo:(id)arg1;
- (_Bool)notifyDelegateOfMovedTouch:(id)arg1;
- (void)notifyDelegateOfMovedIgnoredTouch:(id)arg1;
- (void)_doMovedTouchWithTouchInfo:(id)arg1;
- (_Bool)queryDelegateToBeginTouch:(id)arg1 forBeginState:(unsigned long long)arg2 restartIfNecessary:(_Bool)arg3;
- (void)processTouchInfo:(id)arg1;
- (void)notifyDelegateOfCancelledTouch:(id)arg1;
- (void)_doEndedTouchWithTouchInfo:(id)arg1;
- (void)cancelTouchOnLayoutWithTouchInfo:(id)arg1;
- (void)_doCancelledTouchWithTouchInfo:(id)arg1;
- (_Bool)removedFromActiveTouches:(id)arg1;
- (void)_doMarkTouchProcessedWithTouchInfo:(id)arg1;
- (void)_doIgnoreTouchWithTouchInfo:(id)arg1;
- (void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(BOOL)arg3;
- (void)notifyDelegateOfSuccessfulTouch:(id)arg1;
- (_Bool)addedToActiveTouches:(id)arg1;
- (_Bool)queryDelegateOfRestingTouch:(id)arg1;
- (void)notifyDelegateOfRestingTouch:(id)arg1;
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2 withMessage:(id)arg3;
- (void)notifyDelegateOfIgnoringTouch:(id)arg1;
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2 because:(id)arg3;

@end
