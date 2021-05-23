/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/_UITextAttachmentDrawingView.h>

#import <PencilKit/Swift-Protocol.h>

@class CALayer, NSString, NSTextAttachment, PKSelectDrawingGestureRecognizer, PKTextAttachmentDrawingResizeView, PKTextAttachmentDrawingViewTouchRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;

@interface PKTextAttachmentDrawingView : _UITextAttachmentDrawingView <Swift>

{
    UIScrollView *_tileMaskView;
    _Bool _resizeUpper;
    _Bool _inserted;
    _Bool _zoomingProgramatically;
    UIView *_tileScaleView;
    NSTextAttachment *_textAttachment;
    double _zoomScale;
    PKTextAttachmentDrawingResizeView *_topResizeView;
    PKTextAttachmentDrawingResizeView *_bottomResizeView;
    CALayer *_linesLayer;
    PKTextAttachmentDrawingViewTouchRecognizer *_resizeHighlightGestureRecognizer;
    UIPanGestureRecognizer *_resizeDragGestureRecognizer;
    PKSelectDrawingGestureRecognizer *_selectDrawingGestureRecognizer;
    UITapGestureRecognizer *_eatKeyboardGestureRecognizer;
    UILongPressGestureRecognizer *_showMenuGestureRecognizer;
    UILongPressGestureRecognizer *_hideMenuGestureRecognizer;
    double _zoomStartScale;
    struct CGPoint _zoomStartLocationInWindow;
    struct CGPoint _zoomStartLocationInAttachment;
    struct CGPoint _textViewContentOffsetStartLocation;
    struct CGRect _originalDrawingBounds;
    struct CGRect _originalViewBounds;
    struct UIEdgeInsets _originalContentInset;
}

@property (retain, nonatomic) PKTextAttachmentDrawingResizeView *topResizeView;
@property (retain, nonatomic) PKTextAttachmentDrawingResizeView *bottomResizeView;
@property (retain, nonatomic) CALayer *linesLayer;
@property (retain, nonatomic) PKTextAttachmentDrawingViewTouchRecognizer *resizeHighlightGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *resizeDragGestureRecognizer;
@property (retain, nonatomic) PKSelectDrawingGestureRecognizer *selectDrawingGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *eatKeyboardGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *showMenuGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *hideMenuGestureRecognizer;
@property (nonatomic) _Bool resizeUpper;
@property (nonatomic) struct CGRect originalDrawingBounds;
@property (nonatomic) struct CGRect originalViewBounds;
@property (nonatomic) struct UIEdgeInsets originalContentInset;
@property (nonatomic) _Bool inserted;
@property (nonatomic) _Bool zoomingProgramatically;
@property (nonatomic) struct CGPoint zoomStartLocationInWindow;
@property (nonatomic) struct CGPoint zoomStartLocationInAttachment;
@property (nonatomic) struct CGPoint textViewContentOffsetStartLocation;
@property (nonatomic) double zoomStartScale;
@property (nonatomic, readonly) _Bool drawingMenuVisible;
@property (nonatomic, readonly) struct CGSize drawingVisibleSize;
@property (nonatomic, readonly) double drawingAspectRatio;
@property (nonatomic, readonly) UIView *tileScaleView;
@property (weak, nonatomic) NSTextAttachment *textAttachment;
@property (nonatomic, readonly) _Bool isAtBeginningOfDocument;
@property (nonatomic) double zoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (long long)_characterIndex;
- (id)_textView;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)drawingBounds;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (_Bool)resignFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)didMoveToSuperview;
- (void)setContentHidden:(_Bool)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (id)keyCommands;
- (void)_share:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)gestureRecognizerShouldDelayLift:(id)arg1;
- (void)menuDidHide:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)fingerDrawingEnabledDidChange;
- (void)drawingWillBegin;
- (void)drawingDidEraseStrokes;
- (_Bool)isAtEndOfDocument;
- (void)drawingDidChange;
- (void)updateDrawingHeight:(double)arg1;
- (void)updateFrameForTextContainer;
- (void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2;
- (_Bool)hitByTouchLocation:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
- (_Bool)hitChrome:(struct CGPoint)arg1 isStylus:(_Bool)arg2;
- (id)tileMaskView;
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;
- (void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(_Bool)arg2;
- (id)_drawingGestureRecognizer;
- (void)updateTileContainerViewFrame;
- (id)initWithAttachment:(id)arg1 inserted:(_Bool)arg2;
- (void)_adjustResizeIndicatorVisibility;
- (void)resizeDrawing:(id)arg1;
- (void)higlightResize:(id)arg1;
- (void)selectDrawing:(id)arg1;
- (void)_preemptKeyboardForTapOnDrawing:(id)arg1;
- (void)showDrawingMenu:(id)arg1;
- (void)hideDrawingMenu:(id)arg1;
- (void)_triggerRedraw;
- (void)_updateAttachmentBounds;
- (void)_adjustResizeIndicatorVisibilityNotification;
- (void)drawingDataDidChange:(id)arg1;
- (void)_adjustResizeIndicatorVisibility:(_Bool)arg1;
- (void)layoutTileViews;
- (void)_setHeight:(double)arg1 originalHeight:(double)arg2 growFromTop:(_Bool)arg3;
- (_Bool)hitTestResizeHandles:(struct CGPoint)arg1 threshold:(double)arg2;
- (void)drawingScrollViewDidScroll:(id)arg1;
- (void)metadata:(id)arg1;
- (void)copyStrokeSelection:(id)arg1;
- (void)cutStrokeSelection:(id)arg1;
- (void)deleteStrokeSelection:(id)arg1;
- (void)scaleDrawing:(double)arg1 withOffset:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)scaleDrawing:(double)arg1;
- (void)drawLines;
- (void)resetZoom;
- (id)dataForTextAttachment:(id)arg1;

@end
