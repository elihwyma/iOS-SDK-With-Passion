/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent : UIEvent

{
    CDStruct_a7a14e3b _previousState;
    unsigned long long _activeComponent;
}

- (long long)type;
- (void)_reset;
- (long long)subtype;
- (void)_maybeConvertAndSendAsPressesEvent;
- (void)_sendEventToResponder:(id)arg1;
- (_Bool)_processStandardButtons:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processDPad:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processLeftStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processRightStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processShoulder:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (struct CGPoint)_leftStickPosition;

@end
