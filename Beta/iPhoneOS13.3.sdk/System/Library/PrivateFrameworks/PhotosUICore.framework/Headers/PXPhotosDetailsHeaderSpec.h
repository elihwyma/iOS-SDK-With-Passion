/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXPhotosDetailsHeaderSpec : PXFeatureSpec

{
    unsigned long long _contentInsetEdges;
}

@property (nonatomic, readonly) unsigned long long contentInsetEdges;
@property (nonatomic, readonly) struct CGSize playButtonSize;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (double)defaultCornerRadius;

@end
