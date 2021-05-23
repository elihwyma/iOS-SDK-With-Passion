/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/UIPDFAnnotation.h>

@interface UIPDFPopupAnnotation : UIPDFAnnotation

{
    UIPDFAnnotation *parent;
    struct CGRect _adjustedBounds;
}

@property (nonatomic) UIPDFAnnotation *parent;
@property (nonatomic) struct CGRect adjustedBounds;

- (id)init;
- (struct CGRect)bounds;
- (Class)viewClass;
- (int)annotationType;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;
- (_Bool)recognizeGestures;

@end
