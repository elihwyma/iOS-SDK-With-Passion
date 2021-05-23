/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTypesetter.h>

@class NSArray, NSAttributedString, NSLayoutManager, NSParagraphStyle, NSTextContainer;

@interface NSATSTypesetter : NSTypesetter

{
    NSAttributedString *attributedString;
    struct _NSRange paragraphGlyphRange;
    struct _NSRange paragraphSeparatorGlyphRange;
    double lineFragmentPadding;
    NSLayoutManager *layoutManager;
    NSArray *textContainers;
    NSTextContainer *currentTextContainer;
    unsigned long long currentTextContainerIndex;
    struct CGSize currentTextContainerSize;
    NSParagraphStyle *currentParagraphStyle;
    void *_atsReserved[8];
    id _private;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (id)sharedTypesetter;
+ (_Bool)_allowsScreenFontKerning;

- (id)init;
- (void)dealloc;
- (_Bool)_isBusy;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long *)arg4;
- (_Bool)_mirrorsTextAlignment;
- (id)paragraphArbitrator;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (const char *)_bidiLevels;
- (struct __CTTypesetter *)_ctTypesetter;
- (_Bool)synchronizesAlignmentToDirection;
- (void)_doBidiProcessing;
- (long long)_baseWritingDirection;
- (_Bool)_baselineRenderingMode;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (void)endLineWithGlyphRange:(struct _NSRange)arg1;
- (void)_flushCachedObjects;
- (unsigned long long)lineBreakStrategy;
- (void)beginParagraph;
- (void)endParagraph;
- (_Bool)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long *)arg1 characterIndex:(unsigned long long *)arg2 atPoint:(struct CGPoint *)arg3 renderingContext:(id *)arg4;
- (void)_setBusy:(_Bool)arg1;
- (_Bool)_forceWordWrapping;
- (void)_setForceWordWrapping:(_Bool)arg1;
- (double)defaultTighteningFactor;
- (void)setDefaultTighteningFactor:(double)arg1;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (_Bool)limitsLayoutForSuspiciousContents;
- (void)setLimitsLayoutForSuspiciousContents:(_Bool)arg1;
- (void)_setBaselineRenderingMode:(_Bool)arg1;
- (id)_getATSTypesetterGuts;
- (id)_textContainerForAttachmentProtocol;
- (id)_textStorageForAttachmentProtocol;
- (_Bool)_usesScreenFonts;
- (unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)arg1;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint *)arg1;
- (_Bool)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg1;
- (_Bool)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg1;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned long long)arg1;
- (struct CGRect)boundingBoxForControlGlyphAtIndex:(unsigned long long)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect)arg3 glyphPosition:(struct CGPoint)arg4 characterIndex:(unsigned long long)arg5;
- (unsigned int)hyphenCharacterForGlyphAtIndex:(unsigned long long)arg1;
- (CDStruct_3fda14a5 *)_allocateAuxData;
- (CDUnion_09a75e3c *)_lineFragmentRectForProposedRectArgs;

@end
