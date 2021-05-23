/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSString.h>

@interface NSString (TSPersistence)

+ (id)tsp_stringWithExtensionFieldComponent:(unsigned int)arg1;
+ (id)tsp_stringForDigest:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)regexStringForSearchString:(id)arg1 options:(unsigned long long)arg2;
+ (id)stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(_Bool)arg3;
+ (unsigned long long)numberForString:(id)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;

- (id)tsp_stringByAppendingExtensionFieldComponent:(unsigned int)arg1;
- (struct _NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (id)stringByCapitalizingToMatchString:(id)arg1 range:(struct _NSRange)arg2 searchOptions:(unsigned long long)arg3;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 searchOptions:(unsigned long long)arg3 range:(struct _NSRange)arg4 replacementCount:(unsigned long long *)arg5;
- (unsigned long long)findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;
- (_Bool)isAllWhitespaceInRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(_Bool)arg3;
- (int)contentsScriptInRange:(struct _NSRange)arg1;
- (id)stringByNormalizingParagraphBreaks;
- (struct _NSRange)rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (id)replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (int)contentsScript;
- (unsigned int)utf32CharacterAtIndex:(unsigned long long)arg1;

@end
