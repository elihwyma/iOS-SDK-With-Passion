/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

#import <Silex/Swift-Protocol.h>

@class NSString, SXAutoSizedCanvasController, SXFullscreenCaption, SXStandaloneTextInfo, SXStandaloneTextLayout, SXTextSource, SXTextTangierDocumentRoot, SXTextTangierStorage, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView;

@protocol SXComponentActionHandler, SXFullscreenCaptionViewDelegate, SXTextSourceFactory;

@interface SXFullscreenCaptionView : UIView <Swift>

{
    int _expansionMode;
    id <SXFullscreenCaptionViewDelegate> _delegate;
    SXFullscreenCaption *_caption;
    unsigned long long _viewIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <SXComponentActionHandler> _actionHandler;
    id <SXTextSourceFactory> _textSourceFactory;
    SXAutoSizedCanvasController *_autoSizeCanvasController;
    SXTextTangierDocumentRoot *_documentRoot;
    SXStandaloneTextInfo *_captionInfo;
    SXStandaloneTextLayout *_captionLayout;
    UIVisualEffectView *_backgroundView;
    UIScrollView *_scrollView;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    SXTextSource *_textSource;
    SXTextTangierStorage *_textStorage;
    struct CGSize _fullSize;
    struct CGRect _temporaryLayoutRect;
    struct UIEdgeInsets _fullInsets;
}

@property (nonatomic, readonly) id <SXComponentActionHandler> actionHandler;
@property (nonatomic, readonly) id <SXTextSourceFactory> textSourceFactory;
@property (retain, nonatomic) SXAutoSizedCanvasController *autoSizeCanvasController;
@property (retain, nonatomic) SXTextTangierDocumentRoot *documentRoot;
@property (retain, nonatomic) SXStandaloneTextInfo *captionInfo;
@property (retain, nonatomic) SXStandaloneTextLayout *captionLayout;
@property (nonatomic) struct CGRect temporaryLayoutRect;
@property (nonatomic) struct CGSize fullSize;
@property (nonatomic) struct UIEdgeInsets fullInsets;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer;
@property (retain, nonatomic) SXTextSource *textSource;
@property (retain, nonatomic) SXTextTangierStorage *textStorage;
@property (weak, nonatomic) id <SXFullscreenCaptionViewDelegate> delegate;
@property (nonatomic, readonly) SXFullscreenCaption *caption;
@property (nonatomic, readonly) unsigned long long viewIndex;
@property (nonatomic, readonly) int expansionMode;
@property (nonatomic, readonly) _Bool expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_applyStyle:(id)arg1 toStorage:(id)arg2;
+ (id)_overridePropertiesWithComponentStyle:(id)arg1 storage:(id)arg2;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didMoveToSuperview;
- (void)setupGestureRecognizers;
- (struct CGPoint)positionForTextLayout:(id)arg1;
- (double)marginForTextLayout:(id)arg1;
- (double)widthForTextLayout:(id)arg1;
- (void)createBackgroundView;
- (void)createScrollView;
- (void)initializeTangier;
- (void)renderCaptionInTangier;
- (void)updateFrameAnimated:(_Bool)arg1;
- (void)setExpansionMode:(int)arg1 animated:(_Bool)arg2;
- (struct CGRect)frameWithSuperview:(id)arg1 size:(struct CGSize)arg2 forExpansionMode:(int)arg3;
- (struct CGRect)determineFrameInSuperview:(id)arg1;
- (void)handleSwipeGestureRecognizer:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (_Bool)forceFullExpandsionMode;
- (id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2;
- (void)updateWithCaption:(id)arg1 forViewIndex:(unsigned long long)arg2 animated:(_Bool)arg3;

@end
