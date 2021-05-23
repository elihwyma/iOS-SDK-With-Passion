/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKHighlightAnnotationRenderer : AKAnnotationRenderer

+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (void)_enumerateQuadPathsOfAnnotation:(id)arg1 applyStyle:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
+ (struct CGRect)_rectForQuad:(struct AKQuadrilateral)arg1 rotationAngle:(double *)arg2;
+ (double)_highlightOutsetFactor;

@end
