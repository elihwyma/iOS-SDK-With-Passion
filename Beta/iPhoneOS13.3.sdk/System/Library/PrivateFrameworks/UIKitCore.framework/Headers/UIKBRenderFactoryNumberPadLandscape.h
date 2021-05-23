/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactoryNumberPad.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryNumberPadLandscape : UIKBRenderFactoryNumberPad

- (struct CGPoint)deleteGlyphOffset;
- (struct CGPoint)dictationGlyphOffset;
- (struct CGPoint)specialSymbolOffset;
- (struct CGPoint)loneZeroOffset;
- (double)numberFontSize;
- (double)letterFontSize;
- (struct CGPoint)leftColumnNumberOffset;
- (struct CGPoint)leftColumnLetterOffset;
- (struct CGPoint)rightColumnNumberOffset;
- (struct CGPoint)rightColumnLetterOffset;
- (struct CGPoint)centerColumnNumberOffset;
- (struct CGPoint)centerColumnLetterOffset;
- (void)_customizeSymbolStyle:(id)arg1 secondaryStyle:(id)arg2 forKey:(id)arg3 contents:(id)arg4;

@end
