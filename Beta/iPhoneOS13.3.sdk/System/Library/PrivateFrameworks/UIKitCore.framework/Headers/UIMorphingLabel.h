/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, UIMorphingLabelGlyphSet, _UIViewAnimationAttributes;

@interface UIMorphingLabel : UIView

{
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    UIView *_colorView;
    unsigned long long _alignmentSrc[100];
    unsigned long long _alignmentDst[100];
    _Bool _alignmentIsEqual[100];
    unsigned long long _alignmentSize;
    double _alignmentDelays[100];
    _UIViewAnimationAttributes *_textAnimationAttributes;
    _UIViewAnimationAttributes *_textColorAnimationAttributes;
    double _lastUpdateTime;
    double _slowdown;
    double _rippleFactor;
    double _scaleFactor;
    _Bool _isDoingFastAnimation;
    _Bool _textDidChange;
    _Bool _textColorDidChange;
    _Bool _suppressLayoutSubviews;
    _Bool _enableAnimation;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    double _initialScale;
    double _glyphScaleAnimationSpeed;
    double _rippleDuration;
    struct CGRect _visibleRect;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) _Bool suppressLayoutSubviews;
@property (nonatomic) _Bool enableAnimation;
@property (nonatomic) double initialScale;
@property (nonatomic) double glyphScaleAnimationSpeed;
@property (nonatomic) double rippleDuration;

+ (id)preferredFontWithSize:(double)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)attributedString;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_isRTL;
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(_Bool)arg2;
- (double)flushAmount;
- (void)hideGlyph:(id)arg1;
- (void)contentSizeDidChange:(id)arg1;
- (void)baseInit;
- (double)alphaForFrame:(struct CGRect)arg1;
- (unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)arg1 fromGlyphsInRange:(struct _NSRange)arg2 toGlyphsInRange:(struct _NSRange)arg3;
- (double)currentMediaTime;
- (id)uniqueStringWithPrefix:(id)arg1;
- (void)animateShowGlyph:(id)arg1 alpha:(double)arg2 alphaDuration:(double)arg3 delay:(double)arg4;
- (void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3 delay:(double)arg4;
- (struct _NSRange)srcRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (struct _NSRange)dstRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint)arg2 delay:(double)arg3;
- (double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateGlyphsInRange:(struct _NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(double)arg3 delay:(double)arg4;
- (double)_rippleDurationForEndInsertion:(_Bool)arg1;
- (void)animateHideGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)calculateGlyphAlignment;
- (void)initAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateAlignmentHunkAtIndex:(unsigned long long)arg1;
- (id)attributedStringForText:(id)arg1;
- (void)animateGlyphs;
- (void)animateTextColor;
- (double)requiredWidthForText:(id)arg1;
- (void)animateShowGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (_Bool)canFitText:(id)arg1;

@end
