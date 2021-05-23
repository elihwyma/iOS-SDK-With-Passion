/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKApplicationStateTrackingView.h>

@class NSData, NSString, UIView;

__attribute__((visibility("hidden")))
@interface WKPDFView : WKApplicationStateTrackingView

{
    struct RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;
    struct RetainPtr<NSData> _data;
    struct RetainPtr<CGPDFDocument *> _documentForPrinting;
    struct BlockPtr<void ()> _findCompletion;
    struct RetainPtr<NSString> _findString;
    unsigned long long _findStringCount;
    unsigned long long _findStringMaxCount;
    struct RetainPtr<UIView> _fixedOverlayView;
    struct Optional<unsigned long> _focusedSearchResultIndex;
    long long _focusedSearchResultPendingOffset;
    struct RetainPtr<PDFHostViewController> _hostViewController;
    struct CGSize _overlaidAccessoryViewsInset;
    struct RetainPtr<UIView> _pageNumberIndicator;
    struct CString _passwordForPrinting;
    struct InteractionInformationAtPosition _positionInformation;
    struct RetainPtr<NSString> _suggestedFilename;
    struct WeakObjCPtr<WKWebView> _webView;
    struct RetainPtr<WKKeyboardScrollViewAnimator> _keyboardScrollingAnimator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGPDFDocument *_wk_printedDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *web_contentView;
@property (nonatomic, readonly) NSData *web_dataRepresentation;
@property (nonatomic, readonly) NSString *web_suggestedFilename;
@property (nonatomic, readonly) _Bool web_isBackground;

+ (_Bool)web_requiresCustomSnapshotting;

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_contentView;
- (unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1;
- (id)web_initWithFrame:(struct CGRect)arg1 webView:(id)arg2 mimeType:(id)arg3;
- (void)web_setMinimumSize:(struct CGSize)arg1;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (_Bool)web_handleKeyEvent:(id)arg1;
- (void)web_scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)web_scrollViewDidScroll:(id)arg1;
- (void)web_scrollViewDidZoom:(id)arg1;
- (void)web_scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)web_computedContentInsetDidChange;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_hideFindUI;
- (void)web_beginAnimatedResizeWithUpdates:(CDUnknownBlockType)arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)web_snapshotRectInContentViewCoordinates:(struct CGRect)arg1 snapshotWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint)arg2;
- (void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(struct CGRect)arg3;
- (Optional_d40c49cf)positionInformationForActionSheetAssistant:(id)arg1;
- (RetainPtr_f649c0c3)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr_f649c0c3)arg3;
- (_Bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (id)dataDetectionContextForActionSheetAssistant:(id)arg1;
- (struct CGPoint)_offsetForPageNumberIndicator;
- (void)_movePageNumberIndicatorToPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_updateLayoutAnimated:(_Bool)arg1;
- (void)_scrollToURLFragment:(id)arg1;
- (void)_resetFind;
- (void)_findString:(id)arg1 withOptions:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_computeFocusedSearchResultIndexWithOptions:(unsigned long long)arg1 didWrapAround:(_Bool *)arg2;
- (void)_focusOnSearchResultWithOptions:(unsigned long long)arg1;
- (void)_goToURL:(id)arg1 atLocation:(struct CGPoint)arg2;
- (id)_URLWithPageIndex:(long long)arg1;
- (void)_showActionSheetForURL:(id)arg1 atLocation:(struct CGPoint)arg2 withAnnotationRect:(struct CGRect)arg3;
- (void)pdfHostViewController:(id)arg1 updatePageCount:(long long)arg2;
- (void)pdfHostViewController:(id)arg1 documentDidUnlockWithPassword:(id)arg2;
- (void)pdfHostViewController:(id)arg1 findStringUpdate:(unsigned long long)arg2 done:(_Bool)arg3;
- (void)pdfHostViewController:(id)arg1 goToURL:(id)arg2;
- (void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(struct CGRect)arg3;
- (void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;
- (void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;
- (void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg1;
- (struct CGPDFDocument *)_ensureDocumentForPrinting;

@end
