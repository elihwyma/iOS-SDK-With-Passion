/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@class NSString, UIBezierPath;

@interface AKTriangleAnnotation : AKRectangularShapeAnnotation

{
    _Bool _verticallyFlipped;
    _Bool _horizontallyFlipped;
    UIBezierPath *_path;
}

@property (retain) UIBezierPath *path;
@property _Bool verticallyFlipped;
@property _Bool horizontallyFlipped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (struct CGRect)hitTestBounds;

@end
