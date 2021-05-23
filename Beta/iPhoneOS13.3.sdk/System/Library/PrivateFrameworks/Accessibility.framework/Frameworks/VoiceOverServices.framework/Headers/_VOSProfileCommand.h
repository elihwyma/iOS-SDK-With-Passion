/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, VOSCommand, _VOSProfileMode;

@interface _VOSProfileCommand : NSObject

{
    VOSCommand *_command;
    NSMutableSet *_gestures;
    NSMutableSet *_keyboardShortcuts;
    NSMutableSet *_quickNavShortcuts;
    NSMutableSet *_slaveCommands;
    _VOSProfileMode *_mode;
}

@property (retain, nonatomic) VOSCommand *command;
@property (retain, nonatomic) NSMutableSet *gestures;
@property (retain, nonatomic) NSMutableSet *keyboardShortcuts;
@property (retain, nonatomic) NSMutableSet *quickNavShortcuts;
@property (retain, nonatomic) NSMutableSet *slaveCommands;
@property (weak, nonatomic) _VOSProfileMode *mode;
@property (nonatomic, readonly) _Bool hasSlaveCommands;

+ (_Bool)supportsSecureCoding;
+ (id)profileCommandWithCommand:(id)arg1;
+ (id)profileCommandWithStringValue:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithCommand:(id)arg1 gestures:(id)arg2 keyboardShortcuts:(id)arg3 quickNavShortcuts:(id)arg4 slaveCommands:(id)arg5;
- (void)addGesture:(id)arg1;
- (void)removeGesture:(id)arg1;
- (id)profileGestureForGesture:(id)arg1;
- (void)addKeyboardShortcut:(id)arg1;
- (void)removeKeyboardShortcut:(id)arg1;
- (id)profileKeyboardShortcutForKeyChord:(id)arg1;
- (void)addQuickNavShortcut:(id)arg1;
- (void)removeQuickNavShortcut:(id)arg1;
- (id)profileQuickNavShortcutForKeyChord:(id)arg1;
- (void)addSlaveCommand:(id)arg1;
- (void)removeSlaveCommand:(id)arg1;
- (id)slaveCommandsForPressCount:(long long)arg1;

@end
