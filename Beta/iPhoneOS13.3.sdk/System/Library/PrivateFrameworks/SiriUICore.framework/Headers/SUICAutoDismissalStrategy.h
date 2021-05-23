/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@protocol SUICAutoDismissalStrategyDelegate;

@interface SUICAutoDismissalStrategy : NSObject

{
    NSNumber *_lastShouldDismissValue;
    _Bool _userInteractedWithTouchScreen;
    _Bool _userInteractedWithTouchIDSensor;
    _Bool _videoPlaying;
    _Bool _viewRequiringExtendedTimeoutVisible;
    _Bool _shouldDismiss;
    _Bool _deviceSupportsFaceDetection;
    _Bool _deviceSupportsRaiseGestureDetection;
    id <SUICAutoDismissalStrategyDelegate> _delegate;
    long long _latestFaceAwarenessEvent;
    long long _latestDeviceMotionEvent;
    double _idleTimeInterval;
    long long _autoDismissalReason;
    double _idleTimeout;
    double _extendedIdleTimeout;
    double _viewRequiringExtendedTimeoutStartTime;
}

@property (nonatomic) long long autoDismissalReason;
@property (nonatomic, readonly) double idleTimeout;
@property (nonatomic, readonly) double extendedIdleTimeout;
@property (nonatomic, readonly) _Bool deviceSupportsFaceDetection;
@property (nonatomic, readonly) _Bool deviceSupportsRaiseGestureDetection;
@property (nonatomic, readonly) double viewRequiringExtendedTimeoutStartTime;
@property (weak, nonatomic) id <SUICAutoDismissalStrategyDelegate> delegate;
@property (nonatomic) _Bool userInteractedWithTouchScreen;
@property (nonatomic) _Bool userInteractedWithTouchIDSensor;
@property (nonatomic) long long latestFaceAwarenessEvent;
@property (nonatomic) long long latestDeviceMotionEvent;
@property (nonatomic, getter=isVideoPlaying) _Bool videoPlaying;
@property (nonatomic, getter=isViewRequiringExtendedTimeoutVisible) _Bool viewRequiringExtendedTimeoutVisible;
@property (nonatomic, readonly) double idleTimeInterval;
@property (nonatomic, readonly) _Bool shouldDismiss;

- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeededPermanent:(_Bool)arg1;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeeded;
- (id)initWithIdleTimeout:(double)arg1 extendedIdleTimeout:(double)arg2 deviceSupportsFaceDetection:(_Bool)arg3 deviceSupportsRaiseGestureDetection:(_Bool)arg4;
- (void)setViewRequiringExtendedTimeoutStartTime:(double)arg1;

@end
