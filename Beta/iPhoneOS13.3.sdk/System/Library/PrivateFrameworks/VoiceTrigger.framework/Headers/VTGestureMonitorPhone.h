/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTGestureMonitor.h>

@class CMWakeGestureManager, NSString;

@interface VTGestureMonitorPhone : VTGestureMonitor

{
    CMWakeGestureManager *_gestureManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)startObserving;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;

@end
