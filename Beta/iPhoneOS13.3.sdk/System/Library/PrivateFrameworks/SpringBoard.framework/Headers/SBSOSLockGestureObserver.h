/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSAction, NSString, SBPressSequenceObserver, SBPressSequenceRecognizer, SBPressSequenceSettings, SBPressSequenceValidator;

@protocol SBSOSLockGestureObserverDelegate;

@interface SBSOSLockGestureObserver : NSObject

{
    SBPressSequenceRecognizer *_recognizer;
    SBPressSequenceValidator *_validator;
    SBPressSequenceSettings *_settings;
    _Bool _lastKnownActiveState;
    BSAction *_triggerAction;
    _Bool _gestureLoggingEnabled;
    _Bool _sosEnabled;
    SBPressSequenceObserver *_sosLockPressSequenceObserver;
    id <SBSOSLockGestureObserverDelegate> _delegate;
    long long _configuration;
}

@property (retain, nonatomic) SBPressSequenceObserver *sosLockPressSequenceObserver;
@property (weak, nonatomic) id <SBSOSLockGestureObserverDelegate> delegate;
@property (nonatomic, readonly) long long configuration;
@property (nonatomic, readonly) long long triggerMechanism;
@property (nonatomic, getter=isGestureLoggingEnabled) _Bool gestureLoggingEnabled;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) _Bool sosEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConfiguration:(long long)arg1;
- (void)_configure;
- (id)_validator;
- (void)resetWithNewConfiguration:(long long)arg1;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (double)_watchdogInterval;
- (void)_noteTriggerActionRecievedResponse;
- (void)_noteTriggerDidBecomeActive;
- (void)_noteTriggerDidBecomeInactive;
- (void)_configureSettings;
- (double)_intervalThatSucceeds;
- (void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;
- (void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
- (void)pressSequenceRecognizerDidFail:(id)arg1;
- (void)_setRecognizer:(id)arg1;
- (unsigned long long)_numberOfPressesThatTrigger;
- (unsigned long long)_numberOfPressesThatActivate;

@end
