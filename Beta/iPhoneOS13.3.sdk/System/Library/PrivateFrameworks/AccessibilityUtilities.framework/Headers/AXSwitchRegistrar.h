/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXMIDIManager, AXSwitch;

@protocol AXSwitchRegistrarDelegate;

@interface AXSwitchRegistrar : NSObject

{
    _Bool _addLongPressSwitch;
    id <AXSwitchRegistrarDelegate> _delegate;
    AXSwitch *_aSwitch;
    struct __IOHIDDevice *_device;
    struct __IOHIDEventSystemClient *_eventSystemClient;
    struct __IOHIDManager *_manager;
    AXMIDIManager *_midiManager;
}

@property (retain, nonatomic) AXSwitch *aSwitch;
@property (retain, nonatomic) struct __IOHIDDevice *device;
@property (retain, nonatomic) struct __IOHIDEventSystemClient *eventSystemClient;
@property (retain, nonatomic) struct __IOHIDManager *manager;
@property (retain, nonatomic) AXMIDIManager *midiManager;
@property (weak, nonatomic) id <AXSwitchRegistrarDelegate> delegate;
@property (nonatomic) _Bool addLongPressSwitch;

- (id)init;
- (void)dealloc;
- (void)_filterEvents:(_Bool)arg1;
- (_Bool)_isSwitchWithSource:(struct NSString *)arg1 keyCode:(unsigned short)arg2 buttonNumber:(unsigned int)arg3 ATVRemoteButtonUsage:(long long)arg4 midiEvent:(id)arg5;
- (_Bool)_isKeyboardSwitchWithKeyCode:(unsigned short)arg1 longPress:(_Bool)arg2;
- (_Bool)_isMIDISwitchWithMidiEvent:(id)arg1;
- (_Bool)_isATVRemoteButtonSwitchWithUsage:(long long)arg1 longPress:(_Bool)arg2;
- (_Bool)_isMFISwitchWithButtonNumber:(unsigned int)arg1 longPress:(_Bool)arg2;
- (id)_keyboardMatching;
- (id)_mfiMatching;
- (void)_handleMIDIEvent:(id)arg1 device:(id)arg2 entity:(id)arg3 source:(id)arg4;
- (void)beginFilteringEvents;
- (void)endFilteringEvents;
- (_Bool)isSwitchWithName:(id)arg1;
- (id)firstAvailableName;
- (void)_handleApplicationDidBecomeActive:(id)arg1;
- (void)_handleApplicationWillResignActive:(id)arg1;
- (void)_handleKeyboardKeyDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleATVRemoteButtonDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleMFIButtonDownValue:(struct __IOHIDValue *)arg1;
- (id)_atvRemoteMatching;

@end
