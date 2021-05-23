/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSString.h>

@interface NSString (DC)

@property (nonatomic, readonly) NSString *dc_trimmedString;
@property (nonatomic, readonly) NSString *dc_whitespaceAndNewlineCoalescedString;
@property (nonatomic, readonly) NSString *dc_stringReplacingUnsafeHTMLCharacters;
@property (nonatomic, readonly) NSString *dc_sanitizedFilenameString;

- (id)dc_stringByReplacingNewlineCharactersWithWhiteSpace;
- (id)dc_substringToIndex:(unsigned long long)arg1;
- (id)dc_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)dc_stringByReplacingCharactersInStringMap:(id)arg1;
- (unsigned long long)dc_numberOfLines;
- (void)dc_enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dc_enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dc_substringFromIndex:(unsigned long long)arg1;
- (id)dc_substringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)dc_paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;
- (unsigned long long)dc_lengthOfLongestLine;

@end
