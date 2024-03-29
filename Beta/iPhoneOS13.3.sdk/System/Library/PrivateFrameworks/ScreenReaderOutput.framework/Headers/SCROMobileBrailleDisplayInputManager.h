/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSBundle, NSMutableDictionary, NSSet, NSString;

@interface SCROMobileBrailleDisplayInputManager : NSObject

{
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
    NSBundle *_bundle;
    NSArray *_sixDotCommands;
    NSArray *_eightDotCommands;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (id)_bundle;
- (id)commandForBrailleKey:(id)arg1;
- (void)configureWithDriverConfiguration:(id)arg1;
- (id)_commandsFromBrailleInputMode:(int)arg1;
- (id)userDefaultsForModelIdentifier:(id)arg1;
- (id)_commandForHidUsage:(id)arg1;
- (void)setCommand:(id)arg1 forInputIdentifier:(id)arg2 forDisplayWithToken:(int)arg3;
- (void)setUserDefaults:(id)arg1 forModelIdentifier:(id)arg2;
- (id)_sixDotCommands;
- (id)_eightDotCommands;
- (id)inputIdentifierAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(int)arg2;
- (struct __CFString *)defaultsKeyForModelIdentifier:(id)arg1;
- (id)commandDictionaryForDisplayWithToken:(int)arg1;
- (id)driverIdentifierForDisplayWithToken:(int)arg1;
- (id)modelIdentifierForDisplayWithToken:(int)arg1;
- (void)setCommand:(id)arg1 forBrailleKey:(id)arg2;
- (void)removeAllUserAssignedCommandsForDisplayWithToken:(int)arg1;
- (unsigned long long)userAssignedCommandCountForDisplayWithToken:(int)arg1;
- (unsigned long long)countForDisplayWithToken:(int)arg1;
- (id)commandAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (id)buttonNamesAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;

@end
