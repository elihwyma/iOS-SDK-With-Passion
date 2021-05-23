/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (nonatomic) unsigned int sceneIdentifier;
@property (nonatomic) double confidence;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 asset:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)PLJunkSceneClassificationIDForLabel:(id)arg1;

- (id)debugLogDescription;

@end
