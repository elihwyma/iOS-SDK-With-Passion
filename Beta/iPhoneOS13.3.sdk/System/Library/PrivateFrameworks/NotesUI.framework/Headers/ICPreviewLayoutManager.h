/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICBaseLayoutManager.h>

@interface ICPreviewLayoutManager : ICBaseLayoutManager

- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (void)drawTodosForCharacterRange:(struct _NSRange)arg1 atOrigin:(struct CGPoint)arg2;
- (void)drawTodoItemForListRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 atOrigin:(struct CGPoint)arg3;
- (struct UIImage *)todoImageForParagraphStyle:(id)arg1;

@end
