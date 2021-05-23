/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSLocale, NSString;

@interface TIInputMode : NSObject

{
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
    NSString *_normalizedIdentifier;
}

@property (nonatomic, readonly) NSString *normalizedIdentifier;
@property (nonatomic, readonly) NSString *languageWithRegion;
@property (nonatomic, readonly) NSString *variant;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) Class inputManagerClass;
@property (nonatomic, readonly) Class keyboardFeatureSpecializationClass;
@property (nonatomic, readonly) Class multilingualInputManagerClass;
@property (nonatomic, readonly) _Bool supportsPrediction;
@property (nonatomic, readonly) _Bool supportsMultilingualKeyboard;
@property (nonatomic, readonly) _Bool spaceAutocorrectionEnabled;
@property (nonatomic, readonly) NSString *replacementForDoubleSpace;
@property (nonatomic, readonly) _Bool doesComposeText;
@property (nonatomic, readonly) NSArray *allAccentKeyStrings;
@property (nonatomic, readonly) NSDictionary *layoutTags;
@property (nonatomic, readonly) NSDictionary *compositionMap;
@property (nonatomic, readonly) NSDictionary *reverseCompositionMap;
@property (nonatomic, readonly) NSString *nonstopPunctuationCharacters;
@property (nonatomic, readonly) NSString *sentencePrefixingCharacters;
@property (nonatomic, readonly) NSString *sentenceDelimitingCharacters;
@property (nonatomic, readonly) NSString *sentenceTrailingCharacters;

+ (id)inputModeWithIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNormalizedIdentifier:(id)arg1;

@end
