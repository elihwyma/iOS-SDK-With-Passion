/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDBezierPath;

@interface TSWPRenderer : NSObject

{
    struct CGContext *_context;
    _Bool _flipShadows;
    double _viewScale;
    TSDBezierPath *_interiorClippingPath;
    _Bool _preventClipToColumn;
}

@property (nonatomic) _Bool flipShadows;
@property (nonatomic) double viewScale;
@property (retain, nonatomic) TSDBezierPath *interiorClippingPath;
@property (nonatomic) _Bool preventClipToColumn;

+ (struct __CTFont *)invisiblesFont;

- (void)dealloc;
- (id)initWithContext:(struct CGContext *)arg1;
- (void)willRenderFragmentsWithDrawingState:(const struct TSWPDrawingState *)arg1;
- (struct CGRect)getClipBoundingBox;
- (void)drawAdornmentRects:(const vector_e65b05c3 *)arg1 forColumn:(id)arg2 foreground:(_Bool)arg3;
- (void)drawFragment:(const struct TSWPLineFragment *)arg1 updateRect:(struct CGRect)arg2 drawingState:(const struct TSWPDrawingState *)arg3 runState:(CDStruct_3b6efdb6 *)arg4 lineDrawFlags:(unsigned int)arg5;
- (void)didRenderFragments;
- (_Bool)p_shouldClipFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned int)arg3 updateRect:(struct CGRect)arg4 outClipRect:(struct CGRect *)arg5;
- (void)p_drawAdornmentLineBackgroundRect:(const struct TSWPAdornmentLine *)arg1 lineDrawFlags:(unsigned int)arg2 drawingState:(const struct TSWPDrawingState *)arg3 bounds:(struct CGRect)arg4;
- (void)p_calculateMarkAdornments:(vector_5a1d2cc3 *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineFragment:(const struct TSWPLineFragment *)arg3;
- (void)p_drawMisspelledWordMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawUngrammaticMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawDictationMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawAutocorrectionMarkingsFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2;
- (void)p_drawListLabelForFragment:(const struct TSWPLineFragment *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineDrawFlags:(unsigned int)arg3;
- (void)p_drawTextInRunsForLine:(struct __CTLine *)arg1 fragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3 tateChuYoko:(_Bool)arg4 baseRange:(struct _NSRange)arg5 isFirstLineRef:(_Bool)arg6;
- (void)p_drawAdornmentLine:(const struct TSWPAdornmentLine *)arg1 drawingState:(const struct TSWPDrawingState *)arg2 lineFragment:(const struct TSWPLineFragment *)arg3 lineFragmentStart:(struct CGPoint)arg4 vertical:(_Bool)arg5;
- (void)p_drawAdornments:(const struct TSWPAdornments *)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawInvisiblesBreakLine:(const struct TSWPAdornmentLine *)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (void)p_drawWordMarkingsForFragment:(const struct TSWPLineFragment *)arg1 color:(id)arg2 ranges:(const struct TSWPRangeVector *)arg3 suppressRange:(struct _NSRange)arg4 drawingState:(const struct TSWPDrawingState *)arg5;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 width:(double)arg3;
- (_Bool)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)arg1 state:(const struct TSWPDrawingState *)arg2;
- (void)p_drawAttachmentGlyphAtPosition:(CDStruct_316206b0)arg1 fragment:(const struct TSWPLineFragment *)arg2;
- (void)p_drawHiddenDeletionsAdornments:(const struct TSWPAdornments *)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAttachmentAdornments:(const struct TSWPAdornments *)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (void)p_drawAdornmentGlyphs:(const struct TSWPAdornments *)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;
- (struct CGSize)convertSizeToDeviceSpace:(struct CGSize)arg1;
- (void)p_drawInvisiblesAdornments:(const struct TSWPAdornments *)arg1 lineFragment:(const struct TSWPLineFragment *)arg2 state:(const struct TSWPDrawingState *)arg3;

@end
