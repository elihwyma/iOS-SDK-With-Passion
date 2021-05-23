/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGDejunkerDeduper_CLSInvestigationItem.h>

@class NSDictionary, NSSet, PHPhotoLibrary;

@interface PGDejunkerDeduper_PHAsset : PGDejunkerDeduper_CLSInvestigationItem

{
    NSDictionary *_personLocalIdentifiersByAssetUUID;
    NSDictionary *_peopleScenesByAssetUUID;
    NSDictionary *_averageFaceQualityByAssetUUID;
    PHPhotoLibrary *_photoLibrary;
    NSSet *_verifiedPersonLocalIdentifiers;
}

@property (readonly) PHPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)arg1;
- (void)setVerifiedPersonLocalIdentifiers:(id)arg1;
- (id)dejunkedDedupedAssetsInAssets:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)_buildCachesWithAssets:(id)arg1 options:(id)arg2;
- (id)bestItemInItems:(id)arg1 options:(id)arg2;
- (_Bool)isJunkForItem:(id)arg1;
- (id)debugPersonStringForItem:(id)arg1;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)featureWithItem:(id)arg1;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;
- (id)verifiedPersonLocalIdentifiers;

@end
