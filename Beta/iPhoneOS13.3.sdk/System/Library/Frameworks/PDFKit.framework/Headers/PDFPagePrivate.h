/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PDFAKPageAdaptor, PDFDocument, PDFView, UIImage;

__attribute__((visibility("hidden")))
@interface PDFPagePrivate : NSObject

{
    PDFDocument *document;
    struct CGPDFPage *page;
    struct CGColor *pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    UIImage *image;
    struct CGImage *cgImage;
    struct CGImageSource *cgImageSource;
    unsigned int cgImageOrientation;
    struct os_unfair_lock_s layoutLock;
    struct CGPDFLayout *layout;
    struct os_unfair_lock_s dataDetectorsLock;
    _Bool ranDataDetectors;
    NSString *text;
    NSAttributedString *attributedString;
    _Bool displaysAnnotations;
    _Bool displaysMarkups;
    NSMutableArray *annotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *scannedAnnotations;
    long long rotation;
    struct CGRect mediaBox;
    struct CGRect cropBox;
    struct CGRect bleedBox;
    struct CGRect trimBox;
    struct CGRect artBox;
    _Bool bookmarked;
    _Bool isFullyConstructed;
    _Bool colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    _Bool akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    NSMutableArray *scannerResults;
    _Bool didChangeBounds;
}

@end
