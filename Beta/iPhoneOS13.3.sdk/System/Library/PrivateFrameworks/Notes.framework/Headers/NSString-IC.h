/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSString.h>

@interface NSString (IC)

@property (nonatomic, readonly) struct _NSRange ic_range;
@property (nonatomic, readonly) NSString *ic_htmlStringEscapingQuotesAndLineBreaks;
@property (nonatomic, readonly) NSString *ic_trimmedString;
@property (nonatomic, readonly) NSString *ic_trailingTrimmedString;
@property (nonatomic, readonly) NSString *ic_leadingTrimmedString;
@property (nonatomic, readonly) NSString *ic_whitespaceAndNewlineCoalescedString;
@property (nonatomic, readonly) NSString *ic_stringReplacingUnsafeHTMLCharacters;
@property (nonatomic, readonly) NSString *ic_stringReplacingUnsafeXMLCharacters;
@property (nonatomic, readonly) NSString *ic_stringByRemovingAttachmentCharacters;
@property (nonatomic, readonly) _Bool ic_isLastCharacterANewline;
@property (nonatomic, readonly) NSString *ic_sanitizedFilenameString;
@property (nonatomic, readonly) NSString *ic_quotedString;

+ (id)ic_NSAttachmentCharacterString;

- (unsigned long long)numberOfLines;
- (id)ic_md5;
- (id)ic_stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (id)ic_substringToIndex:(unsigned long long)arg1;
- (id)ic_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_stringByReplacingCharactersInStringMap:(id)arg1;
- (_Bool)ic_isLastCharacterInRangeANewlineForRange:(struct _NSRange)arg1;
- (_Bool)ic_rangeIsValid:(struct _NSRange)arg1;
- (id)ic_substringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)ic_safeCharacterRangeForRange:(struct _NSRange)arg1;
- (id)ic_substringFromIndex:(unsigned long long)arg1;
- (struct _NSRange)ic_lineRangeIgnoringLineBreakCharactersForIndex:(unsigned long long)arg1;
- (id)ic_uniqueWordsWithMinLength:(unsigned long long)arg1;
- (_Bool)ic_containsNonWhitespaceCharacters;
- (_Bool)ic_containsNonWhitespaceAndAttachmentCharacters;
- (_Bool)ic_containsAlphanumericCharacters;
- (void)enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)ic_checkedSubstringWithRange:(struct _NSRange)arg1;
- (id)ic_stringByReplacingNewlineCharactersWithWhiteSpace;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;
- (unsigned long long)lengthOfLongestLine;
- (unsigned long long)ic_countOfCharactersInSet:(id)arg1;
- (id)ic_truncatedStringWithMaxLength:(unsigned long long)arg1 truncated:(_Bool *)arg2;
- (struct _NSRange)_HTMLRangeOfLastTagBeforeIndex:(unsigned long long)arg1;
- (id)_HTMLTagNameClosing:(_Bool *)arg1;
- (unsigned long long)ic_HTMLInsertionPoint;

@end
