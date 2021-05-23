/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation

+ (id)defaultPlaceholderText;
+ (_Bool)deleteAfterEditingIfEmpty;

- (id)init;
- (id)displayName;
- (struct CGRect)hitTestBounds;

@end
