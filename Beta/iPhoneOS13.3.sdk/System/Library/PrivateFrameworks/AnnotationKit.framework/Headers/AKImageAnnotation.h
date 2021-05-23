/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotation.h>

@class NSString, UIImage;

@interface AKImageAnnotation : AKAnnotation

{
    _Bool _hasShadow;
    _Bool _verticallyFlipped;
    _Bool _horizontallyFlipped;
    UIImage *_image;
    double _rotationAngle;
    struct CGRect _rectangle;
}

@property struct CGRect rectangle;
@property _Bool hasShadow;
@property (retain) UIImage *image;
@property _Bool verticallyFlipped;
@property _Bool horizontallyFlipped;
@property double rotationAngle;
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

@end
