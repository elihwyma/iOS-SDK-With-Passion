/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, PDFAKOverlayAdaptor, PDFAnnotation, PDFCoachMarkManager, PDFDocument, PDFDocumentViewController, PDFPage, PDFPasswordViewController, PDFRenderingProperties, PDFScrollView, PDFSelection, PDFTimer, PDFViewController, PDFViewLayout, UIDragInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol PDFViewDelegate;

__attribute__((visibility("hidden")))
@interface PDFViewPrivate : NSObject

{
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    _Bool autoScale;
    _Bool scaling;
    double zoomIncrement;
    id <PDFViewDelegate> delegate;
    _Bool delegateWillScale;
    _Bool delegateOrdersPageDrawing;
    double gutterWide;
    _Bool displaysPageBreaks;
    struct UIEdgeInsets pageBreakMargins;
    struct UIEdgeInsets documentMargins;
    long long displayMode;
    long long displayDirection;
    PDFViewLayout *viewLayout;
    _Bool displaysAsBook;
    _Bool displaysRTL;
    PDFRenderingProperties *renderingProperties;
    unsigned long long lastVerticalScrollDirection;
    unsigned long long lastHorizontalScrollDirection;
    _Bool displaysBookmarksForPages;
    unsigned long long currentPageIndex;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    _Bool inhibitAutoScroll;
    PDFPage *fromPage;
    PDFTimer *pageSyncTimer;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFCoachMarkManager *coachMarkManager;
    PDFPasswordViewController *passwordViewController;
    PDFAnnotation *currentTextWidget;
    PDFAKOverlayAdaptor *akOverlayAdaptor;
    _Bool showsScrollIndicators;
    _Bool dataDetectorsEnabled;
    _Bool debugDrawCGPDFNodeLayer[11];
    _Bool wantsForceUpdate;
    double blockingWaitDuration;
    unsigned long long activeMarkupStyle;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    _Bool isUsingPageViewController;
    PDFDocumentViewController *documentViewController;
    NSDictionary *pageViewControllerOptions;
    UIDragInteraction *dragInteraction;
    struct UIEdgeInsets savedSafeAreaInsets;
    double horizontalScaleFactorBeforeRotation;
    struct CGPoint documentViewCenterBeforeRotation;
    struct CGRect extensionViewBoundsInDocument;
    struct CGRect extensionViewFrame;
    double extensionViewZoomScale;
    PDFTimer *tilesSyncTimer;
}

@end
