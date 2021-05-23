/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@protocol OS_dispatch_source;

@interface CLKClockTimer : NSObject

{
    CADisplayLink *_displayLink;
    CADisplayLink *_30fpsDisplayLink;
    CADisplayLink *_nativeDisplayLink;
    NSMutableDictionary *_minuteHandlers;
    NSMutableDictionary *_secondHandlers;
    NSMutableDictionary *_subsecondHandlers;
    NSMutableDictionary *_30fpsHandlers;
    NSMutableDictionary *_nativeHandlers;
    unsigned long long _nextToken;
    long long _lastHour;
    long long _lastMinute;
    long long _lastSecond;
    double _lastSubsecondFraction;
    _Bool _permittedToRun;
    NSObject<OS_dispatch_source> *_signalSource;
    NSMutableDictionary *_identificationLogsByToken;
}

+ (id)sharedInstance;
+ (id)now;
+ (void)_forceDate:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)_updateDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)_handleTimePassed;
- (struct NSNumber *)startMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMinuteUpdatesForToken:(struct NSNumber *)arg1;
- (void)_removeToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startSecondUpdatesWithHandler:(CDUnknownBlockType)arg1 identificationLog:(CDUnknownBlockType)arg2;
- (void)stopSecondUpdatesForToken:(struct NSNumber *)arg1;
- (void)_dumpIndentificationLogs;
- (struct NSNumber *)startMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1 identificationLog:(CDUnknownBlockType)arg2;
- (struct NSNumber *)_nextTokenWithIdentificationLog:(CDUnknownBlockType)arg1;
- (void)_maybeClearLastSeenTimeComponents;
- (struct NSNumber *)startSubsecondUpdatesWithHandler:(CDUnknownBlockType)arg1 identificationLog:(CDUnknownBlockType)arg2;
- (void)_update30fpsDisplayLink;
- (void)_updateNativeDisplayLink;
- (void)_on30fpsDisplayLink:(id)arg1;
- (void)_onNativeDisplayLink:(id)arg1;
- (void)_updateDisplayLinkFrameIntervalAccuracyIfNecessaryForTimePastMinuteInSeconds:(double)arg1;
- (struct NSNumber *)startSecondUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (struct NSNumber *)startSubsecondUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopSubsecondUpdatesForToken:(id)arg1;
- (struct NSNumber *)start30fpsUpdatesWithHandler:(CDUnknownBlockType)arg1 identificationLog:(CDUnknownBlockType)arg2;
- (void)stop30fpsUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startDisplayNativeUpdatesWithHandler:(CDUnknownBlockType)arg1 identificationLog:(CDUnknownBlockType)arg2;
- (void)stopDisplayNativeUpdatesForToken:(struct NSNumber *)arg1;
- (void)unpause;

@end
