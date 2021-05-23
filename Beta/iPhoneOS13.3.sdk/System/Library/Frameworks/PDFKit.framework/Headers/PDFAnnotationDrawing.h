/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFAnnotationDrawing : NSObject

+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withAnnotation:(id)arg3;
+ (id)createLigtherColor:(struct CGColor *)arg1 withIntensity:(double)arg2;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withAKAnnotation:(id)arg3 forAnnotation:(id)arg4;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withCircleAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withFreeTextAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withInkAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withLineAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withLinkAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withMarkupAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withPopupAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withSquareAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withStampAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withTextAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withButtonWidgetAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withTextWidgetAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withChoiceWidgetAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withUnknownAnnotation:(id)arg3;
+ (void)fillRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
+ (_Bool)renderString:(id)arg1 forRect:(struct CGRect)arg2 font:(id)arg3 color:(id)arg4 alignment:(long long)arg5 rotation:(int)arg6 breaks:(_Bool)arg7 context:(struct CGContext *)arg8 withAnnotation:(id)arg9;
+ (struct CGPath **)createCGPathArrayWithBezierPaths:(id)arg1;
+ (void)drawArrowFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 open:(_Bool)arg3 inContext:(struct CGContext *)arg4 withBorder:(id)arg5;
+ (void)drawBulletAtPoint:(struct CGPoint)arg1 shape:(int)arg2 inContext:(struct CGContext *)arg3 withBorder:(id)arg4;
+ (void)createPillBezier:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
+ (void)drawNoteInContext:(struct CGContext *)arg1 withParentAnnotation:(id)arg2;
+ (struct CGRect)adjustedRectForBox:(long long)arg1 withAnnotation:(id)arg2;
+ (void)drawInContext:(struct CGContext *)arg1 withBounds:(struct CGRect)arg2 withPopupAnnotation:(id)arg3;
+ (void)drawNoteAsSelected:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
+ (void)drawCommentIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
+ (void)drawKeyIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
+ (void)drawNoteIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
+ (void)drawHelpIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
+ (void)drawNewParagraphIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
+ (void)drawParagraphIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
+ (void)drawInsertIconInRect:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
+ (void)setupDrawColor:(id)arg1 withComponents:(double *)arg2 forContext:(struct CGContext *)arg3;
+ (void)drawCommonCommentNoteIconToContext:(struct CGContext *)arg1 colorComponents:(double *)arg2 rect:(struct CGRect)arg3;
+ (void)fillOval:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
+ (void)drawPushButton:(id)arg1 inContext:(struct CGContext *)arg2 withBackgroundColor:(id)arg3 withCaption:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6 isHighlighted:(_Bool)arg7;
+ (void)drawRadioButton:(id)arg1 inContext:(struct CGContext *)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(_Bool)arg7;
+ (void)drawCheckBox:(id)arg1 inContext:(struct CGContext *)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(_Bool)arg7;
+ (void)strokeRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
+ (void)strokeOval:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
+ (void)drawListBox:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withAnnotation:(id)arg3 withOptions:(id)arg4 withStringValue:(id)arg5 withFont:(id)arg6 withFontColor:(id)arg7;
+ (void)drawComboBox:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withAnnotation:(id)arg3 withStringValue:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6;
+ (void)drawDisclosureBox:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
+ (id)stringByTrimmingTrailingCharactersInSet:(id)arg1 forString:(id)arg2;

@end
