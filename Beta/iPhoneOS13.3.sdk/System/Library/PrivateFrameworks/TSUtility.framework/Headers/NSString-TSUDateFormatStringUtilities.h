/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSString.h>

@interface NSString (TSUDateFormatStringUtilities)

@property (nonatomic, readonly) NSString *tsu_UTIFilenameExtension;
@property (nonatomic, readonly) NSString *tsu_pathUTI;

+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)numberSymbols;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_listSeparator;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(_Bool)arg3;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_stringWithXMLString:(const char *)arg1;
+ (id)stringWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;

- (struct _NSRange)tsu_range;
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (id)tsu_stringByExpandingTableFormatting;
- (_Bool)tsu_containsSubstring:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (_Bool)tsu_conformsToUTI:(id)arg1;
- (_Bool)tsu_pathConformsToUTI:(id)arg1;
- (id)stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;
- (unsigned long long)indexOfNumberFormatSubpatternSeparator;
- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
- (_Bool)isNumberFormatPattern;
- (id)positiveSubpatternOfNumberFormatPattern;
- (id)negativeSubpatternOfNumberFormatPattern;
- (id)numberPortionOfNumberFormatSubpattern;
- (id)suffixOfNumberFormatSubpattern;
- (id)prefixOfNumberFormatSubpattern;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringByAddingCSVEscapes;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_md5Hash;
- (id)tsu_stringByReplacingCharactersInSet:(id)arg1 withCharacter:(unsigned short)arg2;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_escapeForIcuRegex;
- (_Bool)tsu_isDescendantOfPath:(id)arg1;
- (_Bool)tsu_isChildOfPath:(id)arg1;
- (id)tsu_stringWithRealpath;
- (id)tsu_substringWithComposedCharacterSequencesToIndex:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;
- (id)tsu_encodeStringBase64;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_escapeXML;
- (id)tsu_unescapeXML;
- (_Bool)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)tsu_pathToRelativeComponentPath:(id)arg1;
- (_Bool)tsu_isPathCreatedByAppendingPathComponent:(id)arg1 insideBasePath:(id)arg2;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_firstKey;
- (id)tsu_lastKey;
- (unsigned long long)tsu_numberOfKeysInKeyPath;
- (id)initWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
- (_Bool)bindToSqlStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2 error:(id *)arg3;
- (_Bool)isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (_Bool)isSpecialCustomNumberFormatToken;
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;
- (_Bool)customFormatIntegerTokenUsesSeparator;
- (id)stringByInsertingFormatGroupingSeparators;
- (unsigned long long)numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)digitPlaceholderStringInDigitToken;
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)formatStringFromCustomNumberFormatScaleToken;
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
- (_Bool)containsPercentEscapes;
- (void)appendJsonStringToString:(id)arg1;
- (_Bool)tsu_pathExtensionConformsToUTI:(id)arg1;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;
- (struct CGSize)tsu_boundingSizeWithFont:(id)arg1;

@end
