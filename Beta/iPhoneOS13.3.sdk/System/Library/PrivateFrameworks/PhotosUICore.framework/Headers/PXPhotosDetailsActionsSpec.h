/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXPhotosDetailsActionsSpec : PXFeatureSpec

{
    _Bool _shouldShowSeparators;
    _Bool _shouldInsetAllSeparators;
}

@property (nonatomic, readonly) _Bool shouldShowSeparators;
@property (nonatomic, readonly) _Bool shouldInsetAllSeparators;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end
