/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNonuniformTransform.h>

@class UIView;

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform

{
    UIView *_transformedView;
    PXNonuniformTransform *_transform;
}

@property (nonatomic, readonly) UIView *transformedView;
@property (nonatomic, readonly) PXNonuniformTransform *transform;

- (struct CGAffineTransform)affineTransformForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)inverseTransform;
- (id)initWithTransformedView:(id)arg1 transform:(id)arg2;

@end
