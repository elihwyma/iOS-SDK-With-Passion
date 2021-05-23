/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface CSLanguageDetectorOption : NSObject

{
    _Bool _wasLanguageToggled;
    float _samplingRate;
    NSSet *_dictationLanguages;
    NSString *_currentKeyboard;
    NSArray *_multilingualKeyboardLanguages;
    NSDictionary *_keyboardConvoLanguagePriors;
    NSDictionary *_keyboardGlobalLanguagePriors;
    NSString *_previousMessageLanguage;
    NSString *_globalLastKeyboardUsed;
    NSDictionary *_dictationLanguagePriors;
    NSArray *_conversationalMessages;
}

@property (nonatomic) float samplingRate;
@property (retain, nonatomic) NSSet *dictationLanguages;
@property (retain, nonatomic) NSString *currentKeyboard;
@property (nonatomic) _Bool wasLanguageToggled;
@property (retain, nonatomic) NSArray *multilingualKeyboardLanguages;
@property (retain, nonatomic) NSDictionary *keyboardConvoLanguagePriors;
@property (retain, nonatomic) NSDictionary *keyboardGlobalLanguagePriors;
@property (retain, nonatomic) NSString *previousMessageLanguage;
@property (retain, nonatomic) NSString *globalLastKeyboardUsed;
@property (retain, nonatomic) NSDictionary *dictationLanguagePriors;
@property (retain, nonatomic) NSArray *conversationalMessages;

- (id)languageDetectorRequestContext;

@end
