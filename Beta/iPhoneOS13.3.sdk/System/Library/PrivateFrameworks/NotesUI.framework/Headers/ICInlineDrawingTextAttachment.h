/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICBaseTextAttachment.h>

@class ICInlineDrawingChangeCoalescer, NSHashTable, NSString;

@interface ICInlineDrawingTextAttachment : ICBaseTextAttachment

{
    _Bool _isHandlingDrawingDidChange;
    ICInlineDrawingChangeCoalescer *_changeCoalescer;
    NSHashTable *_inlineDrawingViews;
}

@property (retain, nonatomic) ICInlineDrawingChangeCoalescer *changeCoalescer;
@property (retain, nonatomic) NSHashTable *inlineDrawingViews;
@property (nonatomic) _Bool isHandlingDrawingDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)contents;
- (struct UIImage *)_image;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (void)placeView:(struct UIView *)arg1 withFrame:(struct CGRect)arg2 inParentView:(struct UIView *)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)detachView:(struct UIView *)arg1 fromParentView:(struct UIView *)arg2;
- (void)drawingDataDidChange:(id)arg1 view:(id)arg2;
- (void)resetZoom;
- (void)saveIfNeeded;
- (id)attachmentAsNSTextAttachment;
- (_Bool)canDragWithoutSelecting;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1;
- (void)detachView;
- (void)updatePaletteVisibility;

@end
