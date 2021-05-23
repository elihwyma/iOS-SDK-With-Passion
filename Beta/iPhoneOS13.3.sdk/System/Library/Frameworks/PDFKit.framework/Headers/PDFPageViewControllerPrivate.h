/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFPage, PDFPageView, PDFRenderingProperties, PDFTextInputView, PDFView, UIImage, UIScrollView;

__attribute__((visibility("hidden")))
@interface PDFPageViewControllerPrivate : NSObject

{
    PDFRenderingProperties *renderingProperties;
    PDFView *pdfView;
    struct UIEdgeInsets pageMargins;
    PDFPage *page;
    UIScrollView *scrollView;
    PDFTextInputView *pageViewContainerView;
    PDFPageView *pageView;
    double minScale;
    double maxScale;
    UIImage *backgroundImage;
    int backgroundQuality;
}

@end
