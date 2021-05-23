/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSMutableArray, NSMutableDictionary, NSTextStorage, PDFAnnotation, PDFPage, PDFPageLayer, PDFPageLayerEffect, PDFPageViewAnnotationController, PDFRenderingProperties, UIImage;

@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFPageViewPrivate : NSObject

{
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    PDFPageLayer *pageLayer;
    PDFPageLayerEffect *searchLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
    NSTextStorage *activeTextStorage;
    NSMutableArray *pageSignatures;
    PDFPageViewAnnotationController *annotationController;
    CALayer *backgroundLayer;
    UIImage *backgroundImage;
    int backgroundQuality;
    unsigned long long visibilityDelegateIndex;
    _Bool isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize bookmarkSize;
}

@end
