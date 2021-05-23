/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKImageAnnotationEventHandler : AKRectangularAnnotationEventHandler

- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (_Bool)lockAspectRatioByDefault;
- (struct CGSize)naturalSizeForAnnotation;

@end
