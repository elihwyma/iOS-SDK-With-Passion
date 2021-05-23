/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKCropAnnotationRenderer : AKAnnotationRenderer

+ (struct CGPath *)cropHandle:(long long)arg1 forAnnotation:(id)arg2 withPageController:(id)arg3;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (void)_pixelAlignedBaseRect:(struct CGRect *)arg1 interiorRect:(struct CGRect *)arg2 scaleFactor:(double *)arg3 forAnnotation:(id)arg4 withPageController:(id)arg5;
+ (struct CGPath *)_newClipMaskEOPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)_newRectanglePathForAnnotation:(id)arg1 withPageController:(id)arg2 outLineWidth:(double *)arg3;
+ (struct CGPath *)newLeftEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newRightEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newBottomEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newTopEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newTopLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newTopRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newBottomLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newBottomRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;

@end
