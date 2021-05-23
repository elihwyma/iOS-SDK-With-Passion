/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSData, NSMutableArray, NSObject, NSString, NSURL, UIColor, UIPDFDocument, UITapGestureRecognizer, WebPDFViewPlaceholder;

@protocol UIWebPDFViewDelegate;

@interface UIWebPDFView : UIView <Swift>

{
    NSMutableArray *_backingLayerImageViews;
    struct CGPDFDocument *_cgPDFDocument;
    UIPDFDocument *_document;
    _Bool _hasScheduledCacheUpdate;
    struct CGRect _documentBounds;
    NSObject<UIWebPDFViewDelegate> *_pdfDelegate;
    _Bool _delegateRespondsToDidScroll;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSURL *_documentURL;
    _Bool _rotating;
    _Bool _zooming;
    double _initialZoomScale;
    struct CGAffineTransform _documentTransform;
    double _documentScale;
    long long _ignoreContentOffsetChanges;
    struct CGPoint _contentOffsetAtScrollStart;
    NSMutableArray *_pageViews;
    NSArray *_pageMinYs;
    _Bool hidePageViewsUntilReadyToRender;
    _Bool hideActivityIndicatorForUnRenderedContent;
    _Bool readyForSnapshot;
    WebPDFViewPlaceholder *pdfPlaceHolderView;
    UIColor *backgroundColorForUnRenderedContent;
    NSString *documentPassword;
    NSArray *pageRects;
}

@property WebPDFViewPlaceholder *pdfPlaceHolderView;
@property (retain, nonatomic) NSURL *documentURL;
@property (nonatomic) double initialZoomScale;
@property (retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;
@property (nonatomic) _Bool hideActivityIndicatorForUnRenderedContent;
@property (nonatomic) _Bool hidePageViewsUntilReadyToRender;
@property (nonatomic) long long ignoreContentOffsetChanges;
@property (nonatomic) struct CGAffineTransform documentTransform;
@property (retain, nonatomic) NSString *documentPassword;
@property (nonatomic, readonly) double documentScale;
@property (retain, nonatomic) NSArray *pageRects;
@property (nonatomic) _Bool readyForSnapshot;
@property (retain, nonatomic) NSArray *pageMinYs;
@property (nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate;
@property (nonatomic, readonly) struct CGRect documentBounds;
@property (nonatomic, readonly) unsigned long long totalPages;
@property (nonatomic, readonly) struct CGPDFDocument *cgPDFDocument;
@property (nonatomic, readonly) UIPDFDocument *document;
@property (nonatomic, readonly) NSData *documentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)setAsPDFDocRepAndView;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_didScroll;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)clearSelection;
- (void)_share:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)_define:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)_selection;
- (id)uiPDFDocument;
- (void)didCompleteLayout;
- (void)_tapGestureRecognized:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)didZoom:(id)arg1;
- (void)willScroll:(id)arg1;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (id)viewportView;
- (struct CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (id)viewAtIndex:(long long)arg1;
- (id)_installViewAtIndex:(long long)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)_viewCachingBoundsInUIViewCoords;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect)arg1;
- (void)_removePageViewsNotInCurrentViewCoordsRect;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect)arg1 force:(_Bool)arg2;
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;
- (void)ensureCorrectPagesAreInstalled:(_Bool)arg1;
- (struct CGRect)_viewportBoundsInUIViewCoords;
- (void)_recreateUIPDFDocument;
- (_Bool)_checkIfDocumentNeedsUnlock;
- (void)resetZoom:(id)arg1;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4;
- (id)_pageWithSelection;
- (unsigned long long)_pageNumberForRect:(struct CGRect)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)viewWillClose;
- (_Bool)_hasPageRects;
- (id)initWithWebPDFViewPlaceholder:(id)arg1;
- (id)_addPageAtIndex:(unsigned long long)arg1;
- (unsigned long long)firstVisiblePageNumber;
- (void)prepareForSnapshot:(_Bool)arg1;
- (void)snapshotComplete;
- (_Bool)_tryToUnlockDocumentWithPassword:(id)arg1;
- (id)imageForContactRect:(struct CGRect)arg1 onPageInViewRect:(struct CGRect)arg2 destinationRect:(struct CGRect)arg3;

@end
