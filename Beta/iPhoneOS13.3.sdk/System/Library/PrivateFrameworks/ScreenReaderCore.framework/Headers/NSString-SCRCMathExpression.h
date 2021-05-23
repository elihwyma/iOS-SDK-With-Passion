/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSString.h>

@interface NSString (SCRCMathExpression)

+ (id)stringWithDollarCode:(id)arg1;
+ (id)stringWithCGRect:(struct CGRect)arg1;

- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringWrappedInMathMLTag:(id)arg1 withAttributes:(id)arg2;
- (id)stringWrappedInMathMLTag:(id)arg1;
- (_Bool)scrc_containsOnlyOneGlyph;
- (unsigned char)_countNumberOfGlyphs:(unsigned char)arg1;
- (id)scrc_composedCharacterAtIndex:(unsigned long long)arg1;
- (unsigned char)scrc_countNumberOfGlyphs;
- (_Bool)scrc_containsNumberOfGlyphs:(unsigned char)arg1;
- (id)scrc_encodeUnicodeForKVO;
- (id)scrc_decodeUnicodeForKVO;
- (id)scrc_composedCharacterEnumerator;
- (id)stringWithMathIndicators;
- (id)stringByTrimmingEmptySpaceEdges;
- (int)character32AtIndex:(unsigned long long)arg1 returningNumberOfComposedChars:(unsigned long long *)arg2;
- (id)stringByTruncatingToWordAtIndex:(unsigned long long)arg1 addElipses:(_Bool)arg2;
- (id)scrStringByTrimmingTrailingNewlines;
- (_Bool)hasMultipleWordsWithLocaleName:(const char *)arg1 ignorePunctuation:(_Bool)arg2;
- (struct _NSRange)enclosingSentenceRangeForRange:(struct _NSRange)arg1;
- (struct _NSRange)sentenceBreakInDirection:(_Bool)arg1 fromIndex:(unsigned long long)arg2 skipCurrent:(_Bool)arg3;
- (unsigned int)fourCharCodeValue;
- (id)contentsOfEmbeddedCommand:(id)arg1;
- (_Bool)containsAttachmentCharSet;
- (struct _NSRange)nextWordFromPosition:(long long)arg1;
- (struct _NSRange)previousWordFromPosition:(long long)arg1;
- (id)threadDescription;

@end
