/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKBRTObject.h>

@class NSObject, _UIKBRTTimerBlock;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchInfo : _UIKBRTObject

{
    BOOL _currentTouchState;
    BOOL _preRuleTouchState;
    double _originalTimestamp;
    double _maximumRadius;
    double _currentTimestamp;
    double _originalZGradient;
    double _currentZGradient;
    id _touchIdentifier;
    _UIKBRTTimerBlock *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct CGPoint _originalTouchPoint;
    struct CGPoint _currentTouchPoint;
}

@property (nonatomic, readonly) _UIKBRTTimerBlock *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic, readonly) _UIKBRTTouchInfo *previousTouch;
@property (nonatomic, readonly) _UIKBRTTouchInfo *nextTouch;
@property (nonatomic, readonly) double originalTimestamp;
@property (nonatomic, readonly) struct CGPoint originalTouchPoint;
@property (nonatomic, readonly) struct CGPoint currentTouchPoint;
@property (nonatomic, readonly) double maximumRadius;
@property (nonatomic, readonly) double currentTimestamp;
@property (nonatomic, readonly) double originalZGradient;
@property (nonatomic, readonly) double currentZGradient;
@property (nonatomic) BOOL currentTouchState;
@property (nonatomic) BOOL preRuleTouchState;
@property (nonatomic, readonly) id touchIdentifier;

+ (id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(_Bool)arg3;
+ (id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2;
+ (id)touchDict;
+ (void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2;

- (void)dealloc;
- (void)cleanup;
- (void)invalidateTimer;
- (id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(BOOL)arg2;
- (void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(CDUnknownBlockType)arg3;
- (_Bool)willChangeTouchInfo:(id)arg1 toState:(BOOL)arg2;
- (void)updateTouch:(id)arg1;
- (id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(_Bool)arg3;
- (void)fireTimerNow;

@end
