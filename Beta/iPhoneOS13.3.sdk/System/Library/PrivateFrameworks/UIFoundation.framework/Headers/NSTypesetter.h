/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@interface NSTypesetter : NSObject

{
    void *_reserved;
}

+ (void)initialize;
+ (long long)defaultTypesetterBehavior;
+ (_Bool)allowsDefaultLineBreakStrategy;
+ (unsigned long long)defaultLineBreakStrategy;
+ (id)sharedSystemTypesetterForBehavior:(long long)arg1;
+ (long long)defaultStringDrawingTypesetterBehavior;
+ (_Bool)_usesATSTypesetter;
+ (id)sharedSystemTypesetter;

- (void)dealloc;
- (void)finalize;
- (void)setAttributedString:(id)arg1;
- (double)lineFragmentPadding;
- (id)attributedString;
- (void)setUsesFontLeading:(_Bool)arg1;
- (void)setLineFragmentPadding:(double)arg1;
- (id)layoutManager;
- (_Bool)usesFontLeading;
- (long long)applicationFrameworkContext;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long *)arg4;
- (id)substituteFontForFont:(id)arg1;
- (_Bool)_allowsEllipsisGlyphSubstitution;
- (id)_ellipsisFontForFont:(id)arg1;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (CDStruct_3fda14a5 *)_getAuxData;
- (_Bool)bidiProcessingEnabled;
- (struct _NSRange)paragraphCharacterRange;
- (struct _NSRange)paragraphSeparatorCharacterRange;
- (long long)_baseWritingDirection;
- (long long)typesetterBehavior;
- (id)currentTextContainer;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (_Bool)finalizeLineFragmentRect:(inout struct CGRect *)arg1 lineFragmentUsedRect:(inout struct CGRect *)arg2 baselineOffset:(inout double *)arg3 forGlyphRange:(struct _NSRange)arg4;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const double *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)setNotShownAttribute:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)endLineWithGlyphRange:(struct _NSRange)arg1;
- (id)currentParagraphStyle;
- (void)beginParagraph;
- (void)endParagraph;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange)arg3 atProposedOrigin:(struct CGPoint)arg4;
- (float)hyphenationFactor;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint *)arg1;
- (CDStruct_3fda14a5 *)_allocateAuxData;
- (CDUnion_09a75e3c *)_lineFragmentRectForProposedRectArgs;
- (struct _NSRange)paragraphGlyphRange;
- (struct _NSRange)paragraphSeparatorGlyphRange;
- (id)textContainers;
- (_Bool)_forceOriginalFontBaseline;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;
- (id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3;
- (void)setHyphenationFactor:(float)arg1;
- (void)setTypesetterBehavior:(long long)arg1;
- (_Bool)_isLineBreakModeOverridden;
- (float)tightenThresholdForTruncation;
- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setDrawsOutsideLineFragment:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setHardInvalidation:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)_setForceOriginalFontBaseline:(_Bool)arg1;
- (void)setParagraphGlyphRange:(struct _NSRange)arg1 separatorGlyphRange:(struct _NSRange)arg2;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(_Bool *)arg5 bidiLevels:(char *)arg6;
- (id)attributesForExtraLineFragment;
- (void)_updateParagraphStyleCache:(id)arg1;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange *)arg1 andParagraphSeparatorRange:(struct _NSRange *)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (void)_setLineBreakModeOverridden:(_Bool)arg1;
- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long *)arg5 nextCharacterIndex:(unsigned long long *)arg6;
- (void)setBidiProcessingEnabled:(_Bool)arg1;
- (void)setTightenThresholdForTruncation:(float)arg1;

@end
