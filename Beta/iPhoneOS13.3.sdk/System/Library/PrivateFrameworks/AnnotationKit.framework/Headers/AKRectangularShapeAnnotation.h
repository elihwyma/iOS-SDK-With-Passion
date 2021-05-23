/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKShapeAnnotation.h>

@class NSDictionary, NSString, NSTextStorage;

@interface AKRectangularShapeAnnotation : AKShapeAnnotation

{
    NSTextStorage *_annotationText;
    NSDictionary *_typingAttributes;
    double _rotationAngle;
    struct CGRect _rectangle;
}

@property struct CGRect rectangle;
@property (retain) NSTextStorage *annotationText;
@property (copy) NSDictionary *typingAttributes;
@property double rotationAngle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool isEditingText;
@property _Bool textIsFixedWidth;
@property _Bool textIsFixedHeight;
@property _Bool textIsClipped;
@property _Bool shouldUsePlaceholderText;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (void)adjustModelToCompensateForOriginalExif;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)translateBy:(struct CGPoint)arg1;
- (id)keysForValuesToObserveForAdornments;

@end
