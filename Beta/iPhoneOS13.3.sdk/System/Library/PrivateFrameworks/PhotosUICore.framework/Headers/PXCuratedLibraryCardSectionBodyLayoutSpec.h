/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class PXGGradient;

@interface PXCuratedLibraryCardSectionBodyLayoutSpec : PXFeatureSpec

{
    double _aspectRatio;
    double _horizontalMargin;
    PXGGradient *_skimmingHintGradient;
    double _distanceToNextLayout;
    CDStruct_2bd92d94 _cornerRadius;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) CDStruct_2bd92d94 cornerRadius;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double distanceToNextLayout;
@property (nonatomic, readonly) PXGGradient *skimmingHintGradient;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end
