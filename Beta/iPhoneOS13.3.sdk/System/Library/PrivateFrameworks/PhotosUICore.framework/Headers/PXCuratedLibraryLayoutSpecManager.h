/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager

{
    NSArray *_availableThumbnailSizes;
}

@property (nonatomic, readonly) PXCuratedLibraryLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;

- (id)createSpec;
- (Class)specClass;
- (_Bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;

@end
