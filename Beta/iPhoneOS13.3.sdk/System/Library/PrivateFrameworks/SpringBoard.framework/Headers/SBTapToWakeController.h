/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBFTapToWakeGestureRecognizer, SBIdleTimerDefaults;

@protocol SBTapToWakeDelegate;

@interface SBTapToWakeController : NSObject <Swift>

{
    _Bool _screenOff;
    _Bool _shouldTapToWake;
    id <SBTapToWakeDelegate> _delegate;
    SBFTapToWakeGestureRecognizer *_tapToWakeGestureRecognizer;
    SBFTapToWakeGestureRecognizer *_pencilToWakeGestureRecognizer;
    SBIdleTimerDefaults *_idleTimerDefaults;
}

@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer;
@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer;
@property (retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults;
@property (weak, nonatomic) id <SBTapToWakeDelegate> delegate;
@property (nonatomic, getter=isScreenOff) _Bool screenOff;
@property (nonatomic, readonly) _Bool shouldTapToWake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isTapToWakeSupported;

- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)tapToWakeDidRecognize:(id)arg1;
- (void)pencilToWakeDidRecognize:(id)arg1;
- (void)_evaluateEnablement;

@end
