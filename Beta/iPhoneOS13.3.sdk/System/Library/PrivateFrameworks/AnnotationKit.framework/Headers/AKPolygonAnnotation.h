/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@class NSString;

@interface AKPolygonAnnotation : AKRectangularShapeAnnotation

{
    _Bool _verticallyFlipped;
    unsigned long long _pointCount;
}

@property unsigned long long pointCount;
@property _Bool verticallyFlipped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool horizontallyFlipped;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;

@end
