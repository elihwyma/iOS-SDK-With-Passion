/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SXScrollView, SXTangierRepDirectLayerHostProvider, SXTangierTextRenderCollector, SXTextTangierCanvasViewController, SXTextTangierDocumentRoot, SXTextTangierInteractiveCanvasController, SXViewport, TSKDocumentRoot, TSWPSelection, UIView;

@protocol SXComponentActionHandler, SXComponentController, SXComponentInteractionManager, SXTangierControllerDelegate, SXTangierDragItemProvider;

@interface SXTangierController : NSObject

{
    SXTextTangierDocumentRoot *_documentRoot;
    _Bool _enclosingCanvasScrolling;
    _Bool _rebuildFlows;
    _Bool _preventScrollViewDidScrollReentrance;
    _Bool _disableClippingForTiles;
    _Bool _performedInitialLayoutAndRender;
    struct os_unfair_lock_s _unfairLock;
    id <SXTangierControllerDelegate> _delegate;
    SXTextTangierCanvasViewController *_cvc;
    SXTextTangierInteractiveCanvasController *_icc;
    unsigned long long _initialSubviewCount;
    SXViewport *_viewport;
    SXScrollView *_scrollView;
    id <SXComponentActionHandler> _componentActionHandler;
    id <SXTangierDragItemProvider> _dragItemProvider;
    id <SXComponentController> _componentController;
    id <SXComponentInteractionManager> _componentInteractionManager;
    SXTangierTextRenderCollector *_textRenderCollector;
    SXTangierRepDirectLayerHostProvider *_directLayerHostProvider;
    UIView *_underRepsHost;
    UIView *_aboveRepsHost;
    UIView *_overlayRepsHost;
    TSWPSelection *_storedSelection;
    NSMutableSet *_presentedTextViews;
}

@property (retain, nonatomic) SXViewport *viewport;
@property (retain, nonatomic) SXScrollView *scrollView;
@property (nonatomic, readonly) id <SXComponentActionHandler> componentActionHandler;
@property (nonatomic, readonly) id <SXTangierDragItemProvider> dragItemProvider;
@property (weak, nonatomic, readonly) id <SXComponentController> componentController;
@property (weak, nonatomic, readonly) id <SXComponentInteractionManager> componentInteractionManager;
@property (nonatomic, readonly) SXTangierTextRenderCollector *textRenderCollector;
@property (nonatomic, readonly) SXTangierRepDirectLayerHostProvider *directLayerHostProvider;
@property (nonatomic, readonly) UIView *underRepsHost;
@property (nonatomic, readonly) UIView *aboveRepsHost;
@property (nonatomic, readonly) UIView *overlayRepsHost;
@property (nonatomic) _Bool preventScrollViewDidScrollReentrance;
@property (nonatomic) _Bool disableClippingForTiles;
@property (retain, nonatomic) TSWPSelection *storedSelection;
@property (nonatomic) _Bool performedInitialLayoutAndRender;
@property (nonatomic, readonly) NSMutableSet *presentedTextViews;
@property (nonatomic, readonly) struct os_unfair_lock_s unfairLock;
@property (nonatomic, getter=isEnclosingCanvasScrolling) _Bool enclosingCanvasScrolling;
@property (weak, nonatomic) id <SXTangierControllerDelegate> delegate;
@property (nonatomic, readonly) SXTextTangierCanvasViewController *cvc;
@property (nonatomic, readonly) SXTextTangierInteractiveCanvasController *icc;
@property (nonatomic) _Bool selectionEnabled;
@property (nonatomic) _Bool rebuildFlows;
@property (nonatomic) unsigned long long initialSubviewCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) TSKDocumentRoot *documentRoot;
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

- (void)dealloc;
- (void)teardown;
- (struct CGRect)visibleBounds;
- (void)clearSelection;
- (void)endSelection;
- (void)updateCanvasSize:(struct CGSize)arg1 forComponentViews:(id)arg2;
- (id)scrollPositionForVisibleRectWithComponentRect:(struct CGRect)arg1;
- (struct CGPoint)pointForCharacterAtIndex:(unsigned long long)arg1 inComponentWithIndetifier:(id)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)interactiveCanvasControllerDidScroll:(id)arg1;
- (void)interactiveCanvasControllerDidStopScrolling:(id)arg1;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(struct CGRect)arg2;
- (id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1;
- (id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3;
- (_Bool)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1;
- (id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(_Bool)arg6;
- (void)interactiveCanvasController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)interactiveCanvasControllerWillStartInteraction:(id)arg1;
- (_Bool)interactiveCanvasController:(id)arg1 shouldBeginInteraction:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)initWithViewport:(id)arg1 scrollView:(id)arg2 componentActionHandler:(id)arg3 dragItemProvider:(id)arg4 componentController:(id)arg5 componentInteractionManager:(id)arg6;
- (void)didStartPresentingTextView:(id)arg1;
- (void)setUnscaledCanvasRect:(struct CGRect)arg1;
- (void)updateInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)topLevelRepsForInteractiveCanvasController:(id)arg1;
- (id)topLevelLayersForInteractiveCanvasController:(id)arg1;
- (void)didStopPresentingTextView:(id)arg1;
- (void)updatePresentationState;
- (void)willTransitionToPresented;
- (void)didTransitionToPresented;
- (void)_fixLayoutOffsets;
- (id)layoutDescriptionForComponent:(id)arg1;

@end
