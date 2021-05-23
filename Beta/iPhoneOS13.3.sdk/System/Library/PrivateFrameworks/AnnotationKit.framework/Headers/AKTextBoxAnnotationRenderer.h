/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKTextBoxAnnotationRenderer : AKAnnotationRenderer

+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;

@end
