/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSATSTypesetter.h>

@class __NSImmutableTextStorage;

@interface NSSingleLineTypesetter : NSATSTypesetter

{
    double _lineWidth;
    struct _NSRange _currentBufferRange;
    unsigned short *_glyphs;
    long long *_props;
    unsigned long long *_charIndexes;
    CDStruct_1f053566 _slFlags;
    __NSImmutableTextStorage *_textStorage;
}

+ (void)initialize;
+ (id)singleLineTypesetter;
+ (_Bool)_validateAttributes:(id)arg1 measuringOnly:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (void)done;
- (id)attributedString;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (id)substituteFontForFont:(id)arg1;
- (_Bool)_allowsEllipsisGlyphSubstitution;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (_Bool)_mirrorsTextAlignment;
- (_Bool)synchronizesAlignmentToDirection;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const double *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)setNotShownAttribute:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (id)_textContainerForAttachmentProtocol;
- (id)_textStorageForAttachmentProtocol;
- (_Bool)_usesScreenFonts;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;
- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setDrawsOutsideLineFragment:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (id)createRenderingContextForCharacterRange:(struct _NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(_Bool)arg3 hasStrongRight:(_Bool)arg4 syncDirection:(_Bool)arg5 mirrorsTextAlignment:(_Bool)arg6 maximumWidth:(double)arg7;
- (id)createRenderingContextForCharacterRange:(struct _NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(_Bool)arg3 hasStrongRight:(_Bool)arg4 maximumWidth:(double)arg5;
- (void)setGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5;
- (void)insertGlyphs:(const unsigned int *)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4;
- (void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3;
- (unsigned long long)layoutOptions;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;

@end
