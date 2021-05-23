/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPeopleDataSource.h>

@class NSDictionary, NSMutableDictionary, NSString, PXPeopleFaceTileImageManager;

@interface PXPeoplePersonDataSource : PXPeopleDataSource

{
    PXPeopleFaceTileImageManager *_imageManager;
    NSMutableDictionary *_keyFacesByPersons;
    NSDictionary *_assetsByFaces;
    unsigned long long _personFetchType;
}

@property (nonatomic) unsigned long long personFetchType;
@property (nonatomic, readonly) PXPeopleFaceTileImageManager *imageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)titleAtIndex:(unsigned long long)arg1;
- (void)startListeningForChanges;
- (void)photoLibraryDidChange:(id)arg1;
- (void)stopListeningForChanges;
- (void)loadObjectsAndUpdateMembersWithCompletion:(CDUnknownBlockType)arg1;
- (id)_itemsArrayFromObjects:(id)arg1;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3;
- (void)_cacheFacesAndAssets;
- (id)_fetchResultForFetchType:(unsigned long long)arg1 fetchOptions:(id)arg2;
- (long long)_personTypeForFetchType:(unsigned long long)arg1;
- (id)_applyChanges:(id)arg1;
- (id)_membersForModelObjects:(id)arg1;
- (void)cancelImageLoadingForItem:(id)arg1;
- (id)generateFetchResult;
- (void)updateKeyFace:(id)arg1 forPerson:(id)arg2;
- (id)faceTileAtIndex:(long long)arg1;
- (id)_faceForPerson:(id)arg1;
- (id)_assetForFace:(id)arg1;

@end
