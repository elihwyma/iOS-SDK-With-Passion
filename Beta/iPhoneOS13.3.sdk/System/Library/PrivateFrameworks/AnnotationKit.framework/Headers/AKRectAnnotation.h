/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKRectAnnotation : AKRectangularShapeAnnotation

{
    double _cornerRadius;
}

@property double cornerRadius;

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (struct CGRect)hitTestBounds;

@end
