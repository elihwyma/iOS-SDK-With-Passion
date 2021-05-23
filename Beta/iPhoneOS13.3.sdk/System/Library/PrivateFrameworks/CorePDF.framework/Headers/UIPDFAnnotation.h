/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CALayer, NSMutableArray, NSString, UIPDFAnnotationController, UIPDFAnnotationView, UIPDFPage, UIPDFPopupAnnotation, UIPDFSelection;

@interface UIPDFAnnotation : NSObject

{
    struct CGPDFDictionary *_dictionary;
    struct CGColor *_color;
    void *_appearanceStream;
    struct CGPDFString *_pdfContents;
    NSString *_annotationID;
    _Bool _hidden;
    UIPDFAnnotationView *_annotationView;
    UIPDFAnnotationController *_annotationController;
    NSMutableArray *_quadPoints;
    CALayer *_drawingLayer;
    UIPDFSelection *_selection;
    _Bool editable;
    id data;
    NSString *_contents;
    long long _index;
    UIPDFPopupAnnotation *_popup;
    NSString *_associatedAnnotationID;
    UIPDFPage *_page;
    unsigned long long _tag;
}

@property (retain, nonatomic) CALayer *drawingLayer;
@property (retain, nonatomic) UIPDFAnnotationView *annotationView;
@property (nonatomic) UIPDFPage *page;
@property (nonatomic) UIPDFAnnotationController *annotationController;
@property (nonatomic, readonly) _Bool recognizeGestures;
@property (nonatomic) _Bool editable;
@property (nonatomic) UIPDFSelection *selection;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) long long index;
@property (nonatomic) UIPDFPopupAnnotation *popup;
@property (retain, nonatomic) NSString *associatedAnnotationID;
@property (nonatomic) unsigned long long tag;

+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;

- (id)init;
- (void)dealloc;
- (struct CGRect)bounds;
- (struct CGColor *)color;
- (void)setColor:(struct CGColor *)arg1;
- (struct CGRect)frame;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (Class)viewClass;
- (_Bool)hidden;
- (struct CGRect)Rect;
- (id)archive;
- (int)annotationType;
- (void)setPageView:(id)arg1;
- (void)setAnnotationID:(id)arg1;
- (id)newSelection;
- (id)annotationID;
- (struct CGRect)rectIn:(struct CGPDFArray *)arg1;
- (void)makeQuadpointsFrom:(id)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;
- (id)getImageNamed:(id)arg1 ofType:(id)arg2;
- (_Bool)hasPopUp;
- (const char *)pdfContents;
- (struct CGRect)popUpAnnotationRect;
- (id)descriptionHOLD;
- (struct CGPath *)newPathFromQuadPoints;

@end
