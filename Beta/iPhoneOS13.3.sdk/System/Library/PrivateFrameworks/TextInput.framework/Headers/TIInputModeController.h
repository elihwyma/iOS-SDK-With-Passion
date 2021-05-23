/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TIInputModeController : NSObject

{
    NSArray *_supportedInputModeIdentifiers;
    NSArray *_supportedInputModeLanguageAndRegions;
    NSString *currentLocale;
    NSArray *preferredLanguages;
    NSArray *enabledInputModes;
    NSArray *defaultInputModes;
    NSArray *inputModesForTesting;
}

@property (copy, nonatomic) NSString *currentLocale;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSArray *enabledInputModes;
@property (copy, nonatomic) NSArray *defaultInputModes;
@property (copy, nonatomic) NSArray *inputModesForTesting;
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (readonly) NSArray *supportedInputModeLanguageAndRegions;
@property (readonly) NSArray *enabledInputModeIdentifiers;

+ (id)sharedInputModeController;
+ (id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(CDUnknownBlockType)arg3;

- (id)defaultEnabledInputModesForCurrentLocale;
- (id)suggestedDictationLanguagesForDeviceLanguage;
- (id)suggestedDictationLanguageForDeviceLanguage;
- (id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1;
- (_Bool)identifierIsValidSystemInputMode:(id)arg1;
- (void)setInputModeIdentifiersForTesting:(id)arg1;

@end
