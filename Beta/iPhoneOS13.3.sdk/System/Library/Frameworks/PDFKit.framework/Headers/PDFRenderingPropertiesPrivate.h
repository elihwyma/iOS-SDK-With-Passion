/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFLayerController, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFRenderingPropertiesPrivate : NSObject

{
    PDFView *pdfView;
    PDFLayerController *pdfLayerController;
    long long displayBox;
    _Bool shouldAntiAlias;
    double greekingThreshold;
    long long interpolationQuality;
    double lineWidthThreshold;
    UIColor *pageColor;
    _Bool enablePageShadows;
    _Bool enableTileEdgeColoring;
    _Bool enableAccessibilityDrawing;
    double screenScaleFactor;
    _Bool enableTileUpdates;
    _Bool enableBackgroundImages;
    _Bool isUsingPDFExtensionView;
    struct CGColorSpace *deviceColorSpace;
}

@end
