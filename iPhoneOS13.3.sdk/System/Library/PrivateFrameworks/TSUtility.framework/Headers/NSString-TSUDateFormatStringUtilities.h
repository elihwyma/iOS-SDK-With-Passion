//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUDateFormatStringUtilities)
+ (id)numberSymbols;
+ (id)tsu_stringWithXMLString:(const char )arg1;
+ (id)tsu_stringByBase64EncodingBytes:(const char )arg1 length:(NSUInteger)arg2 breakLines:(BOOL)arg3;
+ (id)tsu_stringByBase64EncodingBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)tsu_listSeparator;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(NSUInteger)arg2;
// + (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_stringWithUUID;
+ (id)stringWithSqlStatement:(struct sqlite3_stmt )arg1 columnIndex:(int)arg2;
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(BOOL)arg3;
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(NSUInteger)arg1 digitString:(id)arg2;
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(NSUInteger)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerFormatStringWithDigits:(NSUInteger)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(NSUInteger)arg1 separator:(BOOL)arg2 digitString:(id)arg3;
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(BOOL)arg2 digitString:(id)arg3;
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
- (id)stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)prefixOfNumberFormatSubpattern;
- (NSUInteger)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)suffixOfNumberFormatSubpattern;
- (NSUInteger)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)numberPortionOfNumberFormatSubpattern;
- (id)negativeSubpatternOfNumberFormatPattern;
- (id)positiveSubpatternOfNumberFormatPattern;
- (NSUInteger)indexOfNumberFormatSubpatternSeparator;
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;
- (BOOL)isNumberFormatPattern;
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (BOOL)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (id)tsu_unescapeXML;
- (id)tsu_escapeXML;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_encodeStringBase64;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(BOOL)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(NSUInteger)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToIndex:(NSUInteger)arg1;
- (id)tsu_stringWithRealpath;
- (BOOL)tsu_isChildOfPath:(id)arg1;
- (BOOL)tsu_isDescendantOfPath:(id)arg1;
- (id)tsu_escapeForIcuRegex;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByReplacingCharactersInSet:(id)arg1 withCharacter:(unsigned short)arg2;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_md5Hash;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByAddingCSVEscapes;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringByExpandingTableFormatting;
- (BOOL)tsu_isPathCreatedByAppendingPathComponent:(id)arg1 insideBasePath:(id)arg2;
- (id)tsu_pathToRelativeComponentPath:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(BOOL)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (BOOL)tsu_containsSubstring:(id)arg1;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (NSRange)tsu_range;
- (NSRange)tsu_rangeOfString:(id)arg1 options:(NSUInteger)arg2 updatingSearchRange:(NSRange )arg3;
- (NSUInteger)tsu_numberOfKeysInKeyPath;
- (id)tsu_lastKey;
- (id)tsu_firstKey;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (BOOL)bindToSqlStatement:(struct sqlite3_stmt )arg1 index:(int)arg2 error:(id )arg3;
- (id)initWithSqlStatement:(struct sqlite3_stmt )arg1 columnIndex:(int)arg2;
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
- (id)formatStringFromCustomNumberFormatScaleToken;
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)digitPlaceholderStringInDigitToken;
- (NSUInteger)numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)stringByInsertingFormatGroupingSeparators;
- (BOOL)customFormatIntegerTokenUsesSeparator;
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (BOOL)isSpecialCustomNumberFormatToken;
- (BOOL)containsPercentEscapes;
- (void)appendJsonStringToString:(id)arg1;
- (BOOL)tsu_pathExtensionConformsToUTI:(id)arg1;
- (BOOL)tsu_pathConformsToUTI:(id)arg1;
@property(readonly, nonatomic) NSString *tsu_pathUTI;
@property(readonly, nonatomic) NSString *tsu_UTIFilenameExtension;
- (BOOL)tsu_conformsToAnyUTI:(id)arg1;
- (BOOL)tsu_conformsToUTI:(id)arg1;
- (CGSize)tsu_boundingSizeWithFont:(id)arg1;
@end
