/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, UITextView, _UITextViewCanvasView;

@protocol _UITextContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView

{
    struct UIEdgeInsets _textContainerInset;
    struct CGPoint _textContainerOrigin;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    NSTextContainer *_textContainer;
    NSDictionary *_linkTextAttributes;
    unsigned long long _invalidationSeqNo;
    long long _invalidationSeqClipsToBounds;
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int freezeTextContainerSize:1;
        unsigned int usesStandardTextScaling:1;
    } _tcvFlags;
    struct CGRect _constrainedTiledRenderingRect;
    UITextView *_textView;
    _UITextViewCanvasView *_canvasView;
    id <_UITextContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) NSTextContainer *textContainer;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (weak, nonatomic) id <_UITextContainerViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets textContainerInset;
@property (nonatomic, getter=isHorizontallyResizable) _Bool horizontallyResizable;
@property (nonatomic, getter=isVerticallyResizable) _Bool verticallyResizable;
@property (nonatomic) struct CGSize minSize;
@property (nonatomic) struct CGSize maxSize;
@property (nonatomic) _Bool usesTiledViews;
@property (nonatomic) double maxTileHeight;
@property (nonatomic, readonly) _UITextViewCanvasView *canvasView;
@property (nonatomic) _Bool usesStandardTextScaling;
@property (nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) _Bool freezeTextContainerSize;
@property (nonatomic, readonly) long long layoutOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct _NSRange markedRange;
@property (nonatomic, readonly) NSDictionary *markedTextStyle;
@property (nonatomic, readonly) struct CGPoint textContainerOrigin;
@property (nonatomic, readonly, getter=isEditable) _Bool editable;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) struct CGPoint drawingScale;
@property (nonatomic, readonly) struct CGRect constrainedTiledRenderingRect;

- (void)setBounds:(struct CGRect)arg1;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (id)linkTextAttributes;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (struct CGRect)visibleRect;
- (void)invalidateTextContainerOrigin;
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (void)setNeedsDisplay;
- (void)willMoveToSuperview:(id)arg1;
- (void)addGhostedRange:(struct _NSRange)arg1;
- (void)removeAllGhostedRanges;
- (void)_setNeedsContentsFormatUpdate;
- (void)_ensureLayoutCompleteForRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2 delegate:(id)arg3;
- (void)_constrainTiledRenderingToRect:(struct CGRect)arg1;
- (void)_unconstrainTiledRendering;
- (void)_sizeToConstrainedContainerUsedRect;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)_setFrameOrBounds:(struct CGRect)arg1 oldRect:(struct CGRect)arg2 isFrameRect:(_Bool)arg3 settingAction:(CDUnknownBlockType)arg4;
- (_Bool)_shouldCapSizeToFitLayoutRange:(out struct _NSRange *)arg1;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;
- (struct CGRect)_intersectRectWithConstrainedTiledRenderingRect:(struct CGRect)arg1;

@end
