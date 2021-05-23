/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable, PDFPageBackgroundManager, PDFPageViewController, PDFRenderingProperties, PDFView, UIScrollView;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewControllerPrivate : NSObject

{
    PDFView *pdfView;
    PDFRenderingProperties *renderingProperties;
    PDFPageViewController *activePageView;
    PDFPageBackgroundManager *pageBackgroundManager;
    struct os_unfair_lock_s weakPageViewControllersLock;
    NSHashTable *weakPageViewControllers;
    double minScale;
    double maxScale;
    _Bool displaysRTL;
    UIScrollView *scrollView;
}

@end
