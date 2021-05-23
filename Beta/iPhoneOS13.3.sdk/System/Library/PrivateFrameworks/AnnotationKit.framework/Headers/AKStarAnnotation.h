/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKPolygonAnnotation.h>

@interface AKStarAnnotation : AKPolygonAnnotation

{
    double _innerRadiusFactor;
}

@property double innerRadiusFactor;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForAdornments;

@end
