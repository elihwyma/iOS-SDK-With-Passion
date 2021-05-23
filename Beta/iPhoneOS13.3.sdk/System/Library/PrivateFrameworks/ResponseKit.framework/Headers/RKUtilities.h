/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKUtilities : NSObject

+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (_Bool)prefixInArray:(id)arg1 withArray:(id)arg2;
+ (_Bool)suffixInArray:(id)arg1 withArray:(id)arg2;
+ (_Bool)tokenInArray:(id)arg1 withArray:(id)arg2;
+ (id)normalizeForPersonalization:(id)arg1;
+ (id)removeEmoji:(id)arg1;
+ (id)stripDiacritics:(id)arg1;
+ (id)stripPunctuations:(id)arg1;
+ (id)removeMultipleWhitespaces:(id)arg1;
+ (id)getDeviceModel;
+ (_Bool)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg1;
+ (_Bool)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1;
+ (_Bool)isLanguageSupportedBySmartPunctuation:(id)arg1;
+ (id)stripEmojiSkinTones:(id)arg1;
+ (_Bool)isLanguageSupportedForLemmatization:(id)arg1;
+ (_Bool)isLanguageSupportedForPartOfSpeech:(id)arg1;

@end
