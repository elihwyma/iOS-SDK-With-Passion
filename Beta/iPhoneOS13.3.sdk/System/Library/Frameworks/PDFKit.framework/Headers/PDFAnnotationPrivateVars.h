/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSLayoutManager, NSLock, NSMutableDictionary, NSString, NSTextStorage, NSUUID, PDFAKAnnotationAdaptor, PDFAccessibilityNode, PDFAnnotation, PDFPage, UIColor;

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface PDFAnnotationPrivateVars : NSObject

{
    _Bool loggingEnabled;
    _Bool shouldExport;
    PDFPage *page;
    struct CGPDFDictionary *sourceDictionary;
    struct __CFDictionary *dictionaryRef;
    NSUUID *pdfAnnotationUUID;
    struct CGPDFAnnotation *cgAnnotation;
    NSMutableDictionary *PDFAnnotationDictionary;
    NSDictionary *PDFAnnotationKeyMapping;
    NSMutableDictionary *internalPDFAnnotationDictionary;
    struct CGPDFForm *normalAppearance;
    struct CGPDFForm *rolloverAppearance;
    struct CGPDFForm *downAppearance;
    struct CGPDFForm *normalOffAppearance;
    struct CGPDFForm *rolloverOffAppearance;
    struct CGPDFForm *downOffAppearance;
    _Bool saveAppearance;
    _Bool isSelected;
    _Bool isHighlighted;
    NSIndexSet *quadPointsIndexSet;
    PDFAnnotation *parent;
    PDFAnnotation *popup;
    struct CGPDFDictionary *popupDictionary;
    _Bool popupDrawCloseWidget;
    _Bool popupDrawText;
    struct CGPath **cgPaths;
    NSLock *pathLock;
    _Bool isSignature;
    _Bool shouldBurnIn;
    NSString *widgetOnStateString;
    id control;
    UIColor *mouseHoverBackgroundColor;
    NSLayoutManager *layoutManager;
    NSTextStorage *textStorage;
    struct UIEdgeInsets textInsets;
    _Bool restoreLinePoints;
    _Bool restoreQuadPoints;
    struct CGPoint startPoint;
    struct CGPoint endPoint;
    NSArray *quadPoints;
    PDFAccessibilityNode *accessibilityNode;
    double scaleFactor;
    _Bool isFullyConstructed;
    _Bool constructingDictionaryRef;
    PDFAKAnnotationAdaptor *akAnnotationAdaptor;
    id <NSCopying> akAnnotationForCopying;
}

@end
