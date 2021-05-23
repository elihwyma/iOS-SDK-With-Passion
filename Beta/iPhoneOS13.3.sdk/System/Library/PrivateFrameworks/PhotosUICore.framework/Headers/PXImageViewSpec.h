/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXViewSpec.h>

@class NSArray;

@interface PXImageViewSpec : PXViewSpec

{
    _Bool _shouldEnableFocus;
    NSArray *_overlaySpecs;
    long long _roundedCornersMode;
}

@property (copy, nonatomic) NSArray *overlaySpecs;
@property (nonatomic) _Bool shouldEnableFocus;
@property (nonatomic) long long roundedCornersMode;
@property (nonatomic, readonly) struct CGPoint floatingContentMotionRotation;
@property (nonatomic, readonly) struct CGPoint floatingContentMotionTranslation;
@property (nonatomic, readonly) double floatingUnfocusedShadowOpacity;
@property (nonatomic, readonly) double floatingShadowOpacity;
@property (nonatomic, readonly) double floatingUnfocusedShadowRadius;
@property (nonatomic, readonly) double floatingShadowRadius;
@property (nonatomic, readonly) double floatingUnfocusedShadowVerticalOffset;
@property (nonatomic, readonly) struct CGSize floatingUnfocusedShadowExpansion;
@property (nonatomic, readonly) double focusedSizeIncrease;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
