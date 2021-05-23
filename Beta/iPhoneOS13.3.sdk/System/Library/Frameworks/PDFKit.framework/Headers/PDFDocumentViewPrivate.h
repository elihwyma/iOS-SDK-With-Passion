/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PDFDocument, PDFDocumentContentView, PDFPageBackgroundManager, PDFRenderingProperties, PDFView;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewPrivate : NSObject

{
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    struct CGSize documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableDictionary *pageViews;
    NSMutableDictionary *pageFrames;
    PDFPageBackgroundManager *pageBackgroundManager;
    _Bool ignoreChangedBoundsForBoxNotification;
}

@end
