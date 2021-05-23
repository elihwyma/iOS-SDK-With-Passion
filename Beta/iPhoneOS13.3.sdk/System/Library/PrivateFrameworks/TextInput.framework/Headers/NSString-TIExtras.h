/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSString.h>

@interface NSString (TIExtras)

+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (id)stringWithUnichar:(unsigned int)arg1;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
+ (struct USet *)_ideographSet;
+ (struct USet *)_japaneseLetterSet;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_nonJapaneseLetterSet;
+ (struct USet *)_hiraganaSet;
+ (struct USet *)_nonHiraganaOrKatakanaSet;
+ (struct USet *)_nonKatakanaOrKanjiSet;
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet *)_bopomofoSet;
+ (struct USet *)_bopomofoToneSet;
+ (struct USet *)_fullwidthLettersAndNumbersSet;
+ (struct USet *)_nonFullwidthLettersAndNumbersSet;
+ (struct USet *)_fullwidthLettersAndSymbolsSet;
+ (_Bool)_string:(id)arg1 matchesString:(id)arg2;

- (_Bool)_isSpace;
- (_Bool)isDelete;
- (_Bool)_isDelete;
- (_Bool)_isOnlyIdeographs;
- (unsigned long long)_graphemeCount;
- (_Bool)_containsIdeographicCharacters;
- (_Bool)_containsCJScripts;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByTransliteratingToZhuyin;
- (_Bool)_containsJapanese;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (_Bool)_containsSubstring:(id)arg1;
- (id)_firstGrapheme;
- (unsigned short)_firstChar;
- (id)_lastGrapheme;
- (_Bool)_isIdeographicGlyphs;
- (_Bool)containsSubstring:(id)arg1;
- (_Bool)_isNewlineOrReturn;
- (void)_enumerateLongCharactersInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned int)_firstLongCharacter;
- (id)_stringByComposingDiacriticsLogicalOrder:(_Bool)arg1 allowedCharacters:(CDUnknownBlockType)arg2;
- (_Bool)_containsEmoji;
- (_Bool)_containsFullwidthLettersAndSymbolsOnly;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (_Bool)_isSpaceOrReturn;
- (_Bool)_isPlainSpace;
- (id)stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (_Bool)_containsEmojiOnly;
- (_Bool)_containsBopomofoOnly;
- (_Bool)_containsBopomofoToneOnly;
- (_Bool)_isNaturallyRTL;
- (struct _NSRange)_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1;
- (_Bool)_containsCJScriptsOnly;
- (_Bool)_containsJapaneseOnly;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer *)arg1;
- (id)_stringByTrimmingLastCharacter;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (unsigned long long)_editDistanceFrom:(id)arg1;
- (_Bool)isNaturallyRTL;
- (id)_stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (_Bool)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToPinyin;
- (unsigned int)_lastLongCharacter;
- (_Bool)_containsCJKScriptsOnly;
- (id)_stringByTransliteratingToPinyin:(_Bool)arg1;
- (id)_stringByTransliteratingToZhuyin:(_Bool)arg1;
- (struct _NSRange)_rangeOfLongCharacterAtIndex:(unsigned long long)arg1;
- (_Bool)_endsSentence;
- (_Bool)_isLeftAssociative;
- (_Bool)_looksLikeEmailAddress;
- (_Bool)_looksLikeNumberInput;
- (_Bool)_looksLikeURL;
- (void)_reverseEnumerateLongCharactersInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)_rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 withClusterOffset:(long long)arg2;
- (struct _NSRange)_rangeOfString:(id)arg1 fromLocation:(unsigned long long)arg2;
- (unsigned long long)_UTF8SizeOfRange:(struct _NSRange)arg1;
- (_Bool)_isModifierSymbol;
- (_Bool)_endsWithHalfwidth;
- (_Bool)_containsHiraganaOnly;
- (_Bool)_containsHiraganaOrKatakana;
- (_Bool)_containsKatakanaOrKanji;
- (_Bool)_containsHiraganaKatakanaOrBopomofo;
- (_Bool)_containsIdeographsOrBopomofoOnly;
- (_Bool)_containsCJKSymbolsAndPunctuation;
- (_Bool)_containsSymbolsAndPunctuationOnly;
- (_Bool)_containsFullwidthLettersAndNumbersOnly;
- (_Bool)_containsFullwidthLettersAndNumbers;
- (_Bool)_shouldBePaddedWithSpaces;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (id)stringByTrimmingLastCharacter;
- (_Bool)endsSentence;
- (_Bool)isLeftAssociative;
- (_Bool)isPlainSpace;
- (_Bool)isSpace;
- (_Bool)isSpaceOrReturn;
- (_Bool)isNewlineOrReturn;
- (_Bool)isTripledPunctuation;
- (_Bool)looksLikeEmailAddress;
- (_Bool)looksLikeNumberInput;
- (_Bool)looksLikeURL;
- (unsigned long long)editDistanceFrom:(id)arg1;
- (unsigned long long)_indexFromStartingIndex:(unsigned long long)arg1 byIncrementingComposedCharacterSequenceCount:(unsigned long long)arg2;
- (_Bool)_isTripledPunctuation;

@end
