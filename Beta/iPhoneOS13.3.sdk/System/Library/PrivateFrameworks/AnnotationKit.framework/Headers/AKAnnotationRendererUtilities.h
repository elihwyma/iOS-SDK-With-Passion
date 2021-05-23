/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKAnnotationRendererUtilities : NSObject

+ (struct CGRect)outsetRectForShadow:(struct CGRect)arg1 onAnnotation:(id)arg2;
+ (void)setStandardLineStateInContext:(struct CGContext *)arg1 forLineWidth:(double)arg2;
+ (void)setStandardLineDashInContext:(struct CGContext *)arg1 forLineWidth:(double)arg2;
+ (void)beginShadowInContext:(struct CGContext *)arg1 forAnnotation:(id)arg2;
+ (void)endShadowInContext:(struct CGContext *)arg1;
+ (struct CGPath *)newStandardStrokedBorderPathWithPath:(struct CGPath *)arg1 withStrokeWidth:(double)arg2;
+ (struct CGPoint)_shadowDirectionForAnnotation:(id)arg1;

@end
