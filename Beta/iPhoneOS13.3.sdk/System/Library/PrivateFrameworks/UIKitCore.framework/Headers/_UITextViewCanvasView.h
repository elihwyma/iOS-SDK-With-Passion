/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextCanvasView.h>

@protocol _UITextViewCanvasViewContext;

__attribute__((visibility("hidden")))
@interface _UITextViewCanvasView : _UITextCanvasView

@property (weak, nonatomic) id <_UITextViewCanvasViewContext> context;

- (void)drawTextInRect:(struct CGRect)arg1;
- (struct _NSRange)_extendedGlyphRangeForRange:(struct _NSRange)arg1 maxGlyphIndex:(unsigned long long)arg2;

@end
