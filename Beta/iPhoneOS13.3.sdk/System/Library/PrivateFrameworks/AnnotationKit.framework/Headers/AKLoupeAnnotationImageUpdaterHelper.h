/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKLoupeAnnotationImageUpdaterHelper : NSObject

+ (struct CGAffineTransform)transformForFastPathLayer:(id)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)updateFastPathImageOnLoupeAnnotation:(id)arg1 withFastPathLayer:(id)arg2 onPageController:(id)arg3;
+ (void)updateModelImageOnLoupeAnnotation:(id)arg1 onPageController:(id)arg2;
+ (struct CGRect)magnifiedRectForUnmagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (struct CGRect)unmagnifiedRectForMagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2;

@end
