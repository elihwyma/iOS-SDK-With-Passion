/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationEventHandler : NSObject

{
    _Bool _draggingHorizontalOnly;
    _Bool _draggingVerticalOnly;
    AKPageController *_pageController;
    AKAnnotation *_annotation;
    unsigned long long _initiallyDraggedArea;
    struct CGPoint _initialDraggedPoint;
    struct CGPoint _initialOtherPoint;
    struct CGPoint _initialCenter;
    struct CGPoint _lastPositionInModel;
    struct CGPoint _lastPositionInWindow;
}

@property (weak) AKPageController *pageController;
@property (retain) AKAnnotation *annotation;
@property unsigned long long initiallyDraggedArea;
@property struct CGPoint initialDraggedPoint;
@property struct CGPoint initialOtherPoint;
@property struct CGPoint initialCenter;
@property _Bool draggingHorizontalOnly;
@property _Bool draggingVerticalOnly;
@property struct CGPoint lastPositionInModel;
@property struct CGPoint lastPositionInWindow;

+ (_Bool)allowsDragging;
+ (struct CGRect)annotationRectangleForDraggingBounds:(struct CGRect)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(struct CGPoint)arg4;
+ (Class)_handlerClassForPlatformForAnnotation:(id)arg1;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (_Bool)allowsDraggingOfAnnotation:(id)arg1;

- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (double)naturalAspectRatioForAnnotation;
- (_Bool)lockAspectRatioByDefault;
- (struct CGSize)naturalSizeForAnnotation;
- (_Bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)setupDraggingConstraints;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (_Bool)canLockAspectRatio;
- (_Bool)alwaysLockAspectRatio;
- (struct CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint)modelPointFromPointInWindow:(struct CGPoint)arg1;

@end
