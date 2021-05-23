/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKArrowAnnotationRenderer : AKAnnotationRenderer

+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (void)_drawPathForArrow:(id)arg1 inContext:(struct CGContext *)arg2 inPath:(struct CGPath *)arg3 pageControllerForPixelAlignmentOrNil:(id)arg4 minimumGrabbableBorderThickness:(double)arg5;
+ (void)_controlPointsForArrow:(id)arg1 outControlPoint1:(struct CGPoint *)arg2 outControlPoint2:(struct CGPoint *)arg3;
+ (void)_arrowHeadPathsForArrow:(id)arg1 inOutStartArrowHead:(struct CGPath *)arg2 outBezierStartParameter:(double *)arg3 inOutEndArrowHead:(struct CGPath *)arg4 outBezierEndParameter:(double *)arg5;
+ (struct CGPath *)_newLinePathForArrow:(id)arg1 withHeads:(_Bool)arg2 fromBezierParameter:(double)arg3 toBezierParameter:(double)arg4 optionalPageController:(id)arg5 optionalContext:(struct CGContext *)arg6;
+ (void)_arrowHeadLineIntersection:(id)arg1 outStartIntersection:(struct CGPoint *)arg2 outBezierStartParameter:(double *)arg3 outEndIntersection:(struct CGPoint *)arg4 outBezierEndParameter:(double *)arg5;
+ (unsigned long long)_drawableArrowHeads:(id)arg1;
+ (double)_oneDimensionalCubicBezierValueForParameter:(double)arg1 start:(double)arg2 controlPt1:(double)arg3 controlPt2:(double)arg4 end:(double)arg5;
+ (struct CGPoint)_cubicBezierPointForParameter:(double)arg1 start:(struct CGPoint)arg2 controlPt1:(struct CGPoint)arg3 controlPt2:(struct CGPoint)arg4 end:(struct CGPoint)arg5;

@end
