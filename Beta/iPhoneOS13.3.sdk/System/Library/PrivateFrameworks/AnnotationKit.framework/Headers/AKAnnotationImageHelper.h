/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKAnnotationImageHelper : NSObject

+ (id)imageForShapeTag:(long long)arg1;
+ (id)_imageOfSize:(struct CGSize)arg1 forAnnotation:(id)arg2 strokeWidth:(double)arg3 withFillColor:(_Bool)arg4;
+ (void)_drawFilledShapeImageForAnnotation:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
+ (void)_drawImageForPath:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
+ (void)_drawImageForSignature:(id)arg1 withFillColor:(id)arg2 scale:(double)arg3 pathOffset:(struct CGPoint)arg4 inContext:(struct CGContext *)arg5;
+ (id)imageOfSize:(struct CGSize)arg1 forAnnotationTag:(long long)arg2;
+ (id)imageOfSize:(struct CGSize)arg1 forAnnotation:(id)arg2;
+ (id)imageOfSize:(struct CGSize)arg1 forPath:(id)arg2;
+ (id)imageOfSize:(struct CGSize)arg1 withFillColor:(id)arg2 forSignature:(id)arg3;
+ (struct CGImage *)createImageOfAnnotation:(id)arg1 withScale:(double)arg2;

@end
