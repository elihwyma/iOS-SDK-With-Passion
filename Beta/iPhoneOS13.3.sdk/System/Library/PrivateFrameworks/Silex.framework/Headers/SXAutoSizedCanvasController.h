/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTextTangierCanvasViewController, SXTextTangierInteractiveCanvasController, TSDCanvasView, TSKDocumentRoot;

@protocol SXAutoSizedCanvasControllerDelegate, SXComponentActionHandler, SXTangierDragItemProvider;

@interface SXAutoSizedCanvasController : NSObject

{
    TSKDocumentRoot *_documentRoot;
    struct CGRect _frame;
    id <SXAutoSizedCanvasControllerDelegate> _delegate;
    SXTextTangierInteractiveCanvasController *_icc;
    SXTextTangierCanvasViewController *_cvc;
    double _lineHeight;
    id <SXComponentActionHandler> _actionHandler;
    id <SXTangierDragItemProvider> _dragItemProvider;
}

@property (nonatomic, readonly) id <SXComponentActionHandler> actionHandler;
@property (nonatomic, readonly) id <SXTangierDragItemProvider> dragItemProvider;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (weak, nonatomic) id <SXAutoSizedCanvasControllerDelegate> delegate;
@property (nonatomic, readonly) SXTextTangierInteractiveCanvasController *icc;
@property (nonatomic, readonly) SXTextTangierCanvasViewController *cvc;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic, readonly) double lineHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool editorShouldAlwaysBeInParagraphMode;
@property (nonatomic, readonly) _Bool editorAllowsEditMenu;
@property (nonatomic, readonly) _Bool editorAllowsMagnifier;
@property (nonatomic, readonly) _Bool editorAllowsParagraphMode;
@property (nonatomic, readonly) _Bool editorAllowsKeyboard;
@property (nonatomic, readonly) _Bool editorAllowsCaret;
@property (nonatomic, readonly) _Bool editorAllowsHyperlinkInteraction;
@property (nonatomic, readonly) _Bool editorAllowsRubyInteraction;
@property (nonatomic, readonly) _Bool editorAllowsListInteraction;
@property (nonatomic, readonly) _Bool isCanvasInteractive;
@property (nonatomic, readonly) _Bool isPrintingCanvas;
@property (nonatomic, readonly) _Bool spellCheckingSupported;
@property (nonatomic, readonly) _Bool spellCheckingSuppressed;
@property (nonatomic, readonly) _Bool shouldResizeCanvasToScrollView;
@property (nonatomic, readonly) _Bool shouldClipToScrollViewBoundsInVisibleBounds;
@property (nonatomic, readonly) _Bool shouldShowTextOverflowGlyphs;
@property (nonatomic, readonly) _Bool shouldShowInstructionalText;
@property (nonatomic, readonly) _Bool shouldPopKnobsOutsideEnclosingScrollView;
@property (nonatomic, readonly) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property (nonatomic, readonly) _Bool allowEditMenuToAppear;
@property (nonatomic, readonly) _Bool allowTextEditingToBegin;
@property (nonatomic, readonly) _Bool interactiveCanvasControllerAllowsHyperlinkInteraction;

- (void)teardown;
- (_Bool)allowHighlighting;
- (void)invalidateLayoutsAndFrames;
- (struct CGSize)sizeThatFits;
- (id)initWithDocumentRoot:(id)arg1 actionHandler:(id)arg2 dragItemProvider:(id)arg3;
- (Class)wpEditorClassOverride;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(_Bool)arg6;
- (_Bool)interactiveCanvasController:(id)arg1 shouldBeginInteraction:(id)arg2 atPoint:(struct CGPoint)arg3;
- (_Bool)allowCopy;
- (_Bool)allowSelectionPopover;

@end
