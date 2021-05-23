/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKTwoPointLinePointOfInterestHelper.h>

@interface AKArrowShapePointOfInterestHelper : AKTwoPointLinePointOfInterestHelper

+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (struct CGPoint)_arrowHeadOuterControlPoint:(id)arg1;
+ (struct CGPoint)_arrowHeadInnerControlPoint:(id)arg1;
+ (struct CGPoint)_centeredBaseControlPoint:(id)arg1;
+ (struct CGPoint)_normalizedDirectionVector:(id)arg1;

@end
