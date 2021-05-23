/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSString, SBPressGestureRecognizer, SBPressSequenceObserver, SBVolumeHardwareButtonActions, UIGestureRecognizer;

@interface SBVolumeHardwareButton : NSObject <Swift>

{
    unsigned long long _volumeUpAggdStartTime;
    unsigned long long _volumeDownAggdStartTime;
    long long _homeButtonType;
    SBPressGestureRecognizer *_volumeIncreaseButtonPressGestureRecognizer;
    SBPressGestureRecognizer *_volumeDecreaseButtonPressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    UIGestureRecognizer *_shutdownGestureRecognizer;
    NSHashTable *_volumePressBandits;
    SBPressSequenceObserver *_volumeIncreaseSequenceObserver;
    SBPressSequenceObserver *_volumeDecreaseSequenceObserver;
    SBVolumeHardwareButtonActions *_buttonActions;
}

@property (nonatomic, readonly) SBPressSequenceObserver *volumeIncreaseSequenceObserver;
@property (nonatomic, readonly) SBPressSequenceObserver *volumeDecreaseSequenceObserver;
@property (nonatomic, readonly) SBVolumeHardwareButtonActions *buttonActions;
@property (weak, nonatomic) NSHashTable *volumePressBandits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeButtonType:(long long)arg3;
- (void)_createGestureRecognizers;
- (void)addVolumePressBandit:(id)arg1;
- (void)removeVolumePressBandit:(id)arg1;
- (void)cancelVolumePress;
- (void)volumeIncreasePress:(id)arg1;
- (void)volumeDecreasePress:(id)arg1;
- (_Bool)_isEventFromSpatialController:(id)arg1;
- (void)_aggdLogVolumeIncreaseButtonDown:(_Bool)arg1;
- (void)_logVolumeButtonWithObserver:(id)arg1 down:(_Bool)arg2;
- (void)_aggdLogVolumeDecreaseButtonDown:(_Bool)arg1;
- (id)preemptablePressGestureRecognizers;

@end
