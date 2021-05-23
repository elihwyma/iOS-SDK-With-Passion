/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString, UIColor, UIPDFAnnotation, UIPDFMarkupAnnotation, UIPDFPageView;

@protocol NSObject><UIPDFAnnotationControllerDelegate;

@interface UIPDFAnnotationController : NSObject

{
    UIPDFPageView *_pageView;
    struct os_unfair_lock_s _lock;
    struct CGPoint _startPoint;
    _Bool _moving;
    UIPDFMarkupAnnotation *_currentAnnotation;
    CDStruct_627e0f85 _initialRange;
    _Bool _tracking;
    CALayer *_drawingSurface;
    id <NSObject><UIPDFAnnotationControllerDelegate> _delegate;
    struct CGSize _cachedMarginNoteSize;
    _Bool makeUnderlineAnnotation;
    _Bool _allowEditing;
    UIColor *_currentColor;
}

@property (nonatomic, readonly) UIPDFPageView *pageView;
@property (retain, nonatomic) UIPDFAnnotation *currentAnnotation;
@property (nonatomic) _Bool allowEditing;
@property (nonatomic) UIColor *currentColor;
@property (nonatomic) _Bool makeUnderlineAnnotation;
@property (nonatomic) CALayer *drawingSurface;
@property (nonatomic) id <NSObject><UIPDFAnnotationControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool tracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newAnnotation:(struct CGPDFDictionary *)arg1 type:(const char *)arg2;
+ (_Bool)pageHasAnnotations:(id)arg1;
+ (struct CGImage *)newMaskImage:(struct CGPDFPage *)arg1 size:(struct CGSize)arg2;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)setView:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setNeedsDisplay;
- (void)addAnnotation:(id)arg1;
- (id)marginNoteImage:(id)arg1;
- (id)initWithPageView:(id)arg1;
- (void)layoutAnnotationViews:(id)arg1;
- (void)drawAnnotations:(struct CGContext *)arg1;
- (_Bool)willDoSomethingWithTap:(struct CGPoint)arg1;
- (_Bool)willTrackAtPoint:(struct CGPoint)arg1;
- (void)startTracking:(struct CGPoint)arg1;
- (void)tracking:(struct CGPoint)arg1;
- (_Bool)madeInstantAnnotation;
- (void)endTrackingAtPoint:(struct CGPoint)arg1;
- (void)doubleTapRecognized:(id)arg1;
- (_Bool)isLinkAnnotationAt:(struct CGPoint)arg1;
- (_Bool)annotationBriefPressRecognized:(id)arg1;
- (_Bool)annotationLongPressRecognized:(id)arg1;
- (_Bool)annotationSingleTapRecognized:(id)arg1;
- (void)addLinkAnnotationViews;
- (_Bool)willHandleTouchGestureAtPoint:(struct CGPoint)arg1;
- (_Bool)linkAnnotationShouldBegin:(id)arg1;
- (void)_addLinkAnnotationViewFor:(id)arg1;
- (void)setSurfacePosition:(id)arg1;
- (void)annotationTapRecognized:(id)arg1;
- (void)linkPressRecognized:(id)arg1;
- (void)_addRecognizers:(id)arg1;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (void)_addAnnotationViewFor:(id)arg1;
- (struct CGSize)marginNoteImageSize;
- (void)resetBeingPressedForRecognizer:(id)arg1 withDelegate:(id)arg2 withAnnotation:(id)arg3;
- (_Bool)isSelection:(struct CGPDFSelection *)arg1 equalTo:(struct CGPDFSelection *)arg2;
- (_Bool)intersects:(struct CGPDFSelection *)arg1 with:(struct CGPDFSelection *)arg2;
- (void)_initialRange:(struct CGPoint)arg1;
- (_Bool)trackMoved:(struct CGPoint)arg1;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (id)_linkAnnotationViewAt:(struct CGPoint)arg1;
- (id)linkAnnotationAt:(struct CGPoint)arg1;
- (id)annotationAt:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toSurfaceLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toSurfaceLayer:(id)arg2;
- (void)hostViewDidScroll;
- (void)didEndTrackingAtPoint:(struct CGPoint)arg1;
- (id)annotatePageSelection;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (struct CGImage *)newHighlightMaskImageFor:(struct CGRect)arg1;
- (struct CGImage *)underlineImageFor:(struct CGRect)arg1;

@end
