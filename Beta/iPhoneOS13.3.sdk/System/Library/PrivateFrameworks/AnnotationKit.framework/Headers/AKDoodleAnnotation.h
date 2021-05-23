/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotation.h>

@class NSString, UIBezierPath, UIColor;

@interface AKDoodleAnnotation : AKAnnotation

{
    _Bool _dashed;
    _Bool _hasShadow;
    _Bool _pathIsPrestroked;
    _Bool _pathIsDot;
    double _rotationAngle;
    double _strokeWidth;
    UIColor *_strokeColor;
    long long _brushStyle;
    UIBezierPath *_path;
    struct CGRect _rectangle;
}

@property struct CGRect rectangle;
@property double rotationAngle;
@property double strokeWidth;
@property (retain) UIColor *strokeColor;
@property (getter=isDashed) _Bool dashed;
@property (getter=brushStyle) long long brushStyle;
@property _Bool hasShadow;
@property (retain) UIBezierPath *path;
@property _Bool pathIsPrestroked;
@property _Bool pathIsDot;
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
- (void)adjustModelToCompensateForOriginalExif;
- (struct CGRect)hitTestBounds;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)translateBy:(struct CGPoint)arg1;
- (id)keysForValuesToObserveForAdornments;

@end
