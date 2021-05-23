/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTypesetter.h>

@protocol NSCoreTypesetterDelegate;

@interface NSCoreTypesetter : NSTypesetter

{
    _Bool _wantsExtraLineFragment;
    CDUnknownBlockType laidOutLineFragment;
    id <NSCoreTypesetterDelegate> delegate;
    struct _NSRange characterRange;
    struct CGSize textContainerSize;
}

@property struct _NSRange characterRange;
@property struct CGSize textContainerSize;
@property _Bool wantsExtraLineFragment;
@property (copy) CDUnknownBlockType laidOutLineFragment;
@property (weak) id <NSCoreTypesetterDelegate> delegate;

+ (void)_lineMetricsForAttributes:(id)arg1 typesetterBehavior:(long long)arg2 usesFontLeading:(_Bool)arg3 applySpacings:(_Bool)arg4 usesSystemFontLeading:(_Bool)arg5 usesNegativeFontLeading:(_Bool)arg6 lineHeight:(double *)arg7 baselineOffset:(double *)arg8 spacing:(double *)arg9 applicationFrameworkContext:(long long)arg10 wantsTextLineFragments:(_Bool)arg11;
+ (_Bool)_supportsStringDrawingPath:(unsigned char)arg1;
+ (void)_lineMetricsFromAttributedString:(id)arg1 range:(struct _NSRange)arg2 typesetterBehavior:(long long)arg3 usesFontLeading:(_Bool)arg4 applySpacings:(_Bool)arg5 usesSystemFontLeading:(_Bool)arg6 usesNegativeFontLeading:(_Bool)arg7 lineHeight:(double *)arg8 baselineOffset:(double *)arg9 spacing:(double *)arg10 applicationFrameworkContext:(long long)arg11 wantsTextLineFragments:(_Bool)arg12;
+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray *)arg1 ascender:(double *)arg2 descender:(double *)arg3;

- (id)init;
- (void)dealloc;
- (void)layout;
- (struct CGRect)_stringDrawingCoreTextEngineWithOriginalString:(id)arg1 rect:(struct CGRect)arg2 padding:(double)arg3 graphicsContext:(id)arg4 forceClipping:(_Bool)arg5 attributes:(id)arg6 stringDrawingOptions:(long long)arg7 drawingContext:(id)arg8 wantsTextLineFragments:(_Bool)arg9 validatedAttributedString:(id)arg10 firstNonRenderedCharacterIndex:(long long *)arg11 foundSoftHyphenAtEOL:(_Bool *)arg12 enginePathUsed:(unsigned char *)arg13;
- (int)_NSFastDrawString:(id)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 paragraphStyle:(id)arg4 typesetterBehavior:(long long)arg5 lineBreakMode:(long long)arg6 rect:(struct CGRect)arg7 padding:(double)arg8 graphicsContext:(id)arg9 baselineRendering:(_Bool)arg10 usesFontLeading:(_Bool)arg11 usesScreenFont:(_Bool)arg12 scrollable:(_Bool)arg13 syncAlignment:(_Bool)arg14 mirrored:(_Bool)arg15 boundingRectPointer:(struct CGRect *)arg16 baselineOffsetPointer:(double *)arg17 wantsTextLineFragments:(_Bool)arg18 drawingContext:(id)arg19;

@end
