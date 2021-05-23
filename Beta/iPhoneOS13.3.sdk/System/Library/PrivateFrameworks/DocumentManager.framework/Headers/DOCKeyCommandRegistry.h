/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@interface DOCKeyCommandRegistry : NSObject

{
    _Bool _singleCharKeyCommandsEnabled;
}

@property (getter=areSingleCharKeyCommandsEnabled) _Bool singleCharKeyCommandsEnabled;

+ (id)sharedInstance;
+ (id)_defaultIdentifiersAndKeyCommands;
+ (id)_reversedDefaultIdentifiersAndKeyCommands;
+ (id)_inputsOfAlwaysEnabledSingleCharKeyCommands;

- (id)init;
- (id)dismissingKeyCommands;
- (id)defaultKeyCommandsByExcludingKeyCommandsWithIdentifiers:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 defaultBehavior:(_Bool)arg3;
- (void)keyCommandWasPerformed:(id)arg1;
- (_Bool)_shouldOfferKeyCommand:(id)arg1;
- (id)dismissingKeyCommandsWithAction:(SEL)arg1;
- (void)_postNotificationForKeyCommandIdentifier:(id)arg1 modifierFlags:(long long)arg2;
- (void)_registerForKeyCommandWithIdentifier:(id)arg1 viewController:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)registerForKeyCommandWithIdentifiers:(id)arg1 viewController:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
