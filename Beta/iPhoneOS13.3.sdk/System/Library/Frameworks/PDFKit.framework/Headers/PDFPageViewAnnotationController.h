/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFPageViewAnnotationControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageViewAnnotationController : NSObject

{
    PDFPageViewAnnotationControllerPrivate *_private;
}

- (void)dealloc;
- (id)activeAnnotation;
- (void)_didRotatePageNotification:(id)arg1;
- (void)_addPopupForAnnotation:(id)arg1;
- (void)_rotateActiveAnnotation;
- (void)removeControlForAnnotation:(id)arg1;
- (void)addControlForAnnotation:(id)arg1;
- (id)_getIndexSetIntersectionBetween:(id)arg1 and:(id)arg2;
- (_Bool)_indexSet:(id)arg1 touchesIndexSet:(id)arg2;
- (id)markupAnnotationsForIndexSet:(id)arg1;
- (void)_propagateNotesForIndexSet:(id)arg1;
- (id)_markupAnnotationsForExactIndexSet:(id)arg1;
- (id)initWithPDFPageView:(id)arg1;
- (void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2;

@end
