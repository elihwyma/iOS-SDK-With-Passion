/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDLayout.h>

@class TSDShadow;

@protocol EQKitLayout, EQKitLayoutContext;

@interface TSWPEquationLayout : TSDLayout

{
    _Bool _equationIsValid;
    id <EQKitLayout> _equationLayout;
    id <EQKitLayoutContext> _equationLayoutContext;
    struct CGColor *_textColor;
    TSDShadow *_textShadow;
}

@property (retain, nonatomic) id <EQKitLayoutContext> equationLayoutContext;
@property (nonatomic, readonly) id <EQKitLayout> equationLayout;
@property (nonatomic, readonly) _Bool equationIsValid;
@property (nonatomic, readonly) struct CGColor *textColor;
@property (nonatomic, readonly) TSDShadow *textShadow;

- (void)dealloc;
- (void)validate;
- (id)computeLayoutGeometry;
- (double)inlineVerticalOffset;
- (double)inlineCenteredAlignmentOffset;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary *)arg1 columnWidth:(double)arg2;
- (_Bool)wantsRoundedInlinePosition;
- (struct CGRect)frameForCulling;

@end
