/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotation.h>

@class NSString, UIColor;

@interface AKStrokedAnnotation : AKAnnotation

{
    _Bool _dashed;
    _Bool _hasShadow;
    double _strokeWidth;
    UIColor *_strokeColor;
    long long _brushStyle;
}

@property double strokeWidth;
@property (retain) UIColor *strokeColor;
@property (getter=isDashed) _Bool dashed;
@property long long brushStyle;
@property _Bool hasShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;

@end
