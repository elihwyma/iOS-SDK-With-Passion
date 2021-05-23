/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSString, UIAlertView, UIColor, UIDocumentPasswordView, UIView, UIWebPDFLabelView, UIWebPDFView, WebPDFNSNumberFormatter, _UIHighlightView, _UIRotatingAlertController;

@protocol UIWebPDFViewHandlerDelegate;

@interface UIWebPDFViewHandler : NSObject

{
    UIWebPDFView *_pdfView;
    _Bool _scalesPageToFit;
    double _initialZoomScale;
    NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;
    _UIHighlightView *_linkHighlightView;
    UIWebPDFLabelView *_pageLabelView;
    _Bool _showPageLabels;
    _Bool _showsShadowsForHTMLContent;
    _Bool _cachedScrollViewShadowsState;
    UIDocumentPasswordView *_passwordEntryView;
    NSMapTable *_searchControllers;
    UIColor *_backgroundColorForUnRenderedContent;
    _Bool _hideActivityIndicatorForUnRenderedContent;
    _Bool _hidePageViewsUntilReadyToRender;
    WebPDFNSNumberFormatter *_labelViewFormatter;
    struct _PDFHistoryItem _pendingHistoryItemRestore;
    _UIRotatingAlertController *_linkActionSheet;
    NSDictionary *_linkActionInfo;
    NSArray *_linkActions;
    struct CGRect _rectOfInterest;
    _Bool _rectOfInterestConsidersHeight;
    UIAlertView *_currentAlert;
}

@property (nonatomic, readonly) UIWebPDFView *pdfView;
@property (nonatomic, readonly) UIView *frontView;
@property (nonatomic) _Bool scalesPageToFit;
@property (nonatomic) _Bool showPageLabels;
@property (nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate;
@property (retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;
@property (nonatomic) _Bool hideActivityIndicatorForUnRenderedContent;
@property (nonatomic) _Bool hidePageViewsUntilReadyToRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)contentView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_keyboardDidShow:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)clearSearchControllerForHighlighter:(id)arg1;
- (id)searchControllerForHighlighter:(id)arg1;
- (void)revealSearchResult:(id)arg1 andZoomIn:(_Bool)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (double)zoomedDocumentScale;
- (_Bool)considerHeightForDoubleTap;
- (id)enclosingScrollView;
- (double)currentDocumentScale;
- (CDStruct_39925896)scalesForContainerSize:(struct CGSize)arg1;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(CDStruct_39925896)arg2;
- (double)minimumScaleForSize:(struct CGSize)arg1;
- (struct CGRect)rectOfInterestForRotation;
- (double)minimumVerticalContentOffset;
- (double)heightToKeepVisible;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (_Bool)considerHeightOfRectOfInterestForRotation;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect)arg1;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (struct CGRect)visibleContentRect;
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;
- (CDStruct_39925896)doubleTapScalesForSize:(struct CGSize)arg1;
- (void)didScroll:(id)arg1;
- (void)ensureCorrectPagesAreInstalled:(_Bool)arg1;
- (id)passwordForPDFView:(id)arg1;
- (void)didDetermineDocumentBounds:(id)arg1;
- (void)pdfView:(id)arg1 zoomToRect:(struct CGRect)arg2 forPoint:(struct CGPoint)arg3 considerHeight:(_Bool)arg4;
- (void)resetZoom:(id)arg1;
- (void)handleLinkClick:(id)arg1 inRect:(struct CGRect)arg2;
- (void)handleLongPressOnLink:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 contentRect:(struct CGRect)arg4;
- (void)clearPageLabel;
- (void)_setSearchControllerDocumentToSearch:(id)arg1;
- (void)clearAllViews;
- (void)clearActionSheet;
- (void)clearLinkHighlight;
- (struct CGRect)_rectForPdfView:(struct CGRect)arg1;
- (id)_scroller:(id)arg1;
- (id)_getPDFDocumentViewForWebView:(id)arg1;
- (void)_replacePDFViewIfPresentWithWebDocView:(id)arg1;
- (struct CGRect)_rectForPasswordView:(id)arg1;
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)arg1;
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)arg1;
- (void)_createPDFViewIfNeeded:(id)arg1;
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1;
- (unsigned long long)_verticalEdgeForContentOffsetInScrollView:(id)arg1;
- (double)_pinValueForVerticalEdge:(unsigned long long)arg1 inScrollView:(id)arg2;
- (void)updateViewSettings;
- (void)_adjustZoomScalesForScrollViewInternal:(id)arg1;
- (id)createLinkHighlight;
- (void)_notifyDelegateWillClickLink:(id)arg1;
- (void)_notifyDelegateDidClickLink:(id)arg1;
- (void)_completeLinkClickWithURL:(id)arg1;
- (void)_completeLinkClickWithURLString:(id)arg1;
- (void)highlightRect:(struct CGRect)arg1;
- (id)_actionForType:(int)arg1 withActionInfo:(id)arg2;
- (id)_actionForType:(int)arg1;
- (id)_actionsForInteractionInfo:(id)arg1;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2;
- (void)_showLinkSheet:(id)arg1;
- (void)_showPasswordErrorAlert;
- (void)_adjustContentOffsetForKeyboardIfNeeded;
- (void)adjustZoomScalesForScrollView;
- (void)restoreStateFromPendingHistoryItem;
- (struct CGRect)_frameForDocumentBounds:(struct CGRect)arg1;
- (void)_postdidDetermineDocumentBounds;
- (void)_showPasswordEntryViewForFile:(id)arg1;
- (void)updatePageNumberLabelWithUserScrolling:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateViewHierarchyForDocumentView:(id)arg1 ignoreIfSame:(_Bool)arg2;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1 restoringZoomScale:(double)arg2 andScrollPt:(struct CGPoint)arg3;
- (id)_getLabelViewFormatter;
- (id)createPageLabel;
- (void)scrollToPageNumber:(long long)arg1 animate:(_Bool)arg2;
- (void)_resultRects:(id)arg1 andResultViews:(id)arg2 forSearchResult:(id)arg3 inViewCoordinates:(id)arg4;
- (id)findOnPageHighlighter;
- (void)removeViewFromSuperview;
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1;
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1;
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1;
- (void)handleScrollToAnchor:(id)arg1;

@end
