/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXSSKeyboardCommandMap : NSObject

{
    NSSet *_availableCommands;
    NSDictionary *_keyChordsToCommands;
    NSDictionary *_commandsToArraysOfKeyChords;
    NSDictionary *_userDefinedCommandsToKeyChords;
    NSMutableDictionary *_transientCommands;
}

@property (nonatomic, readonly) NSDictionary *keyChordsToCommands;
@property (nonatomic, readonly) NSDictionary *commandsToArraysOfKeyChords;
@property (nonatomic, readonly) NSDictionary *userDefinedCommandsToKeyChords;
@property (nonatomic, readonly) NSMutableDictionary *transientCommands;
@property (retain, nonatomic) NSSet *availableCommands;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithCommandsToKeyChordsDictionary:(id)arg1;
- (_Bool)_validateCommandsToKeyChords:(id)arg1;
- (_Bool)isEqualToCommandMap:(id)arg1;
- (_Bool)_isAvailableCommand:(id)arg1;
- (void)_initializeDictionariesIfNeeded;
- (id)commandForKeyChord:(id)arg1;
- (id)keyChordForCommand:(id)arg1;
- (id)commandMapWithKeyChord:(id)arg1 forCommand:(id)arg2;
- (id)addCommandsForTransientKeyChords:(id)arg1;
- (void)removeTransientKeyChordsForIdentifier:(id)arg1;

@end
