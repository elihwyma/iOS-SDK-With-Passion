/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol CAMClosedViewfinderControllerDelegate;

@interface CAMClosedViewfinderController : NSObject

{
    id <CAMClosedViewfinderControllerDelegate> _delegate;
    NSMutableSet *__reasonsForClosingViewfinder;
    double __referenceTime;
    long long __referenceTimeEvent;
}

@property (nonatomic, readonly) NSMutableSet *_reasonsForClosingViewfinder;
@property (nonatomic, setter=_setReferenceTime:) double _referenceTime;
@property (nonatomic, setter=_setReferenceTimeEvent:) long long _referenceTimeEvent;
@property (weak, nonatomic) id <CAMClosedViewfinderControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isViewfinderClosed) _Bool viewfinderClosed;

- (id)init;
- (void)dealloc;
- (void)_handleApplicationDidBecomeActive:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)removeClosedViewfinderReason:(long long)arg1;
- (void)addClosedViewfinderReason:(long long)arg1;
- (id)descriptionForTimeBetweenReferenceAndNow;
- (void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2;
- (void)cancelDelayedRemovalOfReason:(long long)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_descriptionForReasons:(id)arg1;
- (void)_updateReferenceTimeToNowForEvent:(long long)arg1;
- (void)_cancelDelayedLoggingForClosedViewfinder;
- (void)_performDelayedRemovalOfReason:(id)arg1;
- (void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(double)arg1;
- (void)_logWarningIfViewfinderStillClosed;
- (id)_descriptionStringForReferenceTimeEvent:(long long)arg1;
- (_Bool)hasClosedViewfinderReason:(long long)arg1;

@end
