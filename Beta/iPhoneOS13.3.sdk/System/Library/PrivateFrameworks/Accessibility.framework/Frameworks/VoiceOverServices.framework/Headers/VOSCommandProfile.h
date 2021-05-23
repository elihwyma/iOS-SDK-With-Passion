/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol VOSCommandProfileDelegate;

@interface VOSCommandProfile : NSObject

{
    NSMutableSet *_modes;
    id <VOSCommandProfileDelegate> _delegate;
}

@property (weak, nonatomic) id <VOSCommandProfileDelegate> delegate;

+ (_Bool)supportsSecureCoding;
+ (id)_parseProfileProperties:(id)arg1 overlayProperties:(id)arg2;
+ (void)_addGesturesToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (void)_addKeyboardShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (void)_addQuickNavShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (void)_addSlaveCommandsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (_Bool)_overlay:(id)arg1 shouldIncludeItem:(id)arg2;
+ (id)_profileKeyChordsFromDictionaryValue:(id)arg1;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (_Bool)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (_Bool)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (_Bool)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;
- (id)allCommandsWithResolver:(id)arg1;
- (id)allSiriShortcutCommandsWithResolver:(id)arg1;
- (id)allShortcutBindingsWithResolver:(id)arg1;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (_Bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;
- (_Bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;
- (id)initWithProfileProperties:(id)arg1 overlayProperties:(id)arg2;
- (id)_initWithModes:(id)arg1;
- (id)_profileModeForResolver:(id)arg1;
- (id)_resolvedSlaveCommandForProfileCommand:(id)arg1 resolver:(id)arg2;
- (id)_profileCommandForCommand:(id)arg1 inMode:(id)arg2;
- (id)_profileModeForScreenreaderMode:(id)arg1;

@end
