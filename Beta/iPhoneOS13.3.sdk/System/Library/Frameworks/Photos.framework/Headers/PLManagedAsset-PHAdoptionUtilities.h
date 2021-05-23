/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <PhotoLibraryServices/PLManagedAsset.h>

@interface PLManagedAsset (PHAdoptionUtilities)

+ (id)pl_PHAssetsForManagedAssets:(id)arg1 photoLibrary:(id)arg2;

- (id)pl_PHAssetFromPhotoLibrary:(id)arg1;
- (id)pl_PHAssetWithPropertySets:(id)arg1 photoLibrary:(id)arg2;

@end
