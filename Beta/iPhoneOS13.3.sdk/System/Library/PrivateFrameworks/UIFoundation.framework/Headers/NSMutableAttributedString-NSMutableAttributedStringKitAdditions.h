/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)

- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (void)convertBidiControlCharactersToWritingDirection;
- (_Bool)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(_Bool)arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;
- (_Bool)_shouldSetOriginalFontAttribute;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange)arg2;
- (void)superscriptRange:(struct _NSRange)arg1;
- (void)subscriptRange:(struct _NSRange)arg1;
- (void)unscriptRange:(struct _NSRange)arg1;
- (_Bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (void)convertWritingDirectionToBidiControlCharacters;

@end
