/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString;

@interface _EARLanguageDetectorRequestContext : NSObject

{
    NSDictionary *_languagePriors;
    NSSet *_dictationLanguages;
    NSString *_currentDictationLanguage;
    NSNumber *_wasLanguageToggled;
    NSArray *_multilingualKeyboardLanguages;
    NSDictionary *_keyboardConvoLanguagePriors;
    NSDictionary *_keyboardGlobalLanguagePriors;
    NSString *_previousMessageLanguage;
    NSString *_globalLastKeyboardUsed;
    NSDictionary *_dictationLanguagePriors;
    NSArray *_recentMessages;
}

@property (readonly) struct LDContext LDContext;
@property (copy, nonatomic) NSDictionary *languagePriors;
@property (copy, nonatomic) NSSet *dictationLanguages;
@property (copy, nonatomic) NSString *currentDictationLanguage;
@property (copy, nonatomic) NSNumber *wasLanguageToggled;
@property (copy, nonatomic) NSArray *multilingualKeyboardLanguages;
@property (copy, nonatomic) NSDictionary *keyboardConvoLanguagePriors;
@property (copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors;
@property (copy, nonatomic) NSString *previousMessageLanguage;
@property (copy, nonatomic) NSString *globalLastKeyboardUsed;
@property (copy, nonatomic) NSDictionary *dictationLanguagePriors;
@property (copy, nonatomic) NSArray *recentMessages;

+ (id)contextFromLDContext:(const struct LDContext *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
