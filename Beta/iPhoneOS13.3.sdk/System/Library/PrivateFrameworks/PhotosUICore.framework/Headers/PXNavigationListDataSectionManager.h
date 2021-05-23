/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSectionManager.h>

@class NSMapTable, NSMutableDictionary, NSString, PHCollectionList, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;

@interface PXNavigationListDataSectionManager : PXDataSectionManager

{
    NSMutableDictionary *_childDataSectionManagers;
    NSMutableDictionary *_childDataSectionIndexes;
    NSMapTable *_parentListItems;
    PHCollectionList *_collectionList;
    long long _indentationLevel;
    PXPhotoKitCollectionsDataSourceManager *_collectionsDataSourceManager;
    PXPhotoKitCollectionsDataSource *_collectionsDataSource;
}

@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *collectionsDataSource;
@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic) long long indentationLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)makeCollectionsDataSourceManagerForConfiguration:(id)arg1;

- (id)initWithConfiguration:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)createDataSection;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSection:(id)arg2 expanding:(_Bool)arg3;
- (void)_requestParentForListItem:(id)arg1 hintIndex:(long long)arg2 resultHandler:(CDUnknownBlockType)arg3 recursionHandler:(CDUnknownBlockType)arg4;
- (void)startBackgroundFetchingIfNeeded;
- (void)expandListItem:(id)arg1 hintIndex:(long long)arg2;
- (void)collapseListItem:(id)arg1 hintIndex:(long long)arg2;

@end
