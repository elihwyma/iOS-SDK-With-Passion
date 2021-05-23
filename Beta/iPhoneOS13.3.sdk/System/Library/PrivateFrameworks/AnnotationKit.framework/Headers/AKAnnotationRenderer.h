/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKAnnotationRenderer : NSObject

+ (struct CGSize)draggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)textBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (_Bool)pointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (void)_transformContextToModelCoordinates:(struct CGContext *)arg1 forAnnotation:(id)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (struct CGPath *)newTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (struct CGRect)rectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (void)renderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (_Bool)annotationShouldAvoidRedrawDuringLiveResize:(id)arg1;
+ (struct CGRect)drawingBoundsOfAnnotation:(id)arg1;
+ (_Bool)pointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (Class)_rendererClassForAnnotation:(id)arg1;
+ (void)_testRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;

@end
