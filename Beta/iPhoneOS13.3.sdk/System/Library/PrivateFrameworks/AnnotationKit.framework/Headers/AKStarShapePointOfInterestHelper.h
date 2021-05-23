/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKPolygonPointOfInterestHelper.h>

@interface AKStarShapePointOfInterestHelper : AKPolygonPointOfInterestHelper

+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (unsigned long long)maxPolygonPoints;
+ (unsigned long long)minPolygonPoints;

@end
