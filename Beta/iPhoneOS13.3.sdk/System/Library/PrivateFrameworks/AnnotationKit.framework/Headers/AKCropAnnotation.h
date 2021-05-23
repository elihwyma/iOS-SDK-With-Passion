/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotation.h>

@class NSString;

@interface AKCropAnnotation : AKAnnotation

{
    _Bool _hidden;
    _Bool _cropApplied;
    _Bool _showHandles;
    struct CGColor *_color;
    struct CGRect _rectangle;
}

@property struct CGRect rectangle;
@property _Bool hidden;
@property _Bool cropApplied;
@property _Bool showHandles;
@property (nonatomic) struct CGColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (id)init;
- (void)dealloc;
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
