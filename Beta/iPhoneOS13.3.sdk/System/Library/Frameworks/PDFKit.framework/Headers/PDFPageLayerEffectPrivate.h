/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSMutableArray, NSMutableDictionary, NSUUID, PDFAnnotation, PDFPageLayerEffect, PDFScannerResult;

@protocol PDFPageLayerInterface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffectPrivate : NSObject

{
    id <PDFPageLayerInterface> pageLayer;
    NSUUID *uuid;
    struct CGRect pageFrame;
    _Bool shouldRotateContent;
    PDFAnnotation *annotation;
    NSMutableDictionary *markupEffectLayers;
    NSMutableArray *selections;
    NSMutableDictionary *selectionEffectLayers;
    PDFScannerResult *pdfResult;
    CALayer *rootSelectionLayer;
    PDFPageLayerEffect *noteLayer;
}

@end
