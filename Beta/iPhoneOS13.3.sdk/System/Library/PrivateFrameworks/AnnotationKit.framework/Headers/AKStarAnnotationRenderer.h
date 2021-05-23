/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKPolygonAnnotationRenderer.h>

@interface AKStarAnnotationRenderer : AKPolygonAnnotationRenderer

+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (id)innerStarPoints:(id)arg1;
+ (double)innerRadiusFactorForPoint:(struct CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;
+ (struct CGPath *)_newPathForAnnotation:(id)arg1;
+ (double)defaultInnerRadiusForStar:(id)arg1;
+ (id)_innerStarPoints:(id)arg1 withInnerRadiusFactor:(double)arg2;
+ (id)starPoints:(id)arg1;
+ (double)_segLengthOfStarWithPoints:(id)arg1;

@end
