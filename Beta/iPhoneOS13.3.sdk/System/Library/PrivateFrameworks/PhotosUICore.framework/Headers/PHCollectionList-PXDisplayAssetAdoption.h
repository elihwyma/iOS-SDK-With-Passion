/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Photos/PHCollectionList.h>

@class NSString;

@interface PHCollectionList (PXDisplayAssetAdoption)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool px_isUserCreated;
@property (nonatomic, readonly) _Bool px_isRegularAlbum;
@property (nonatomic, readonly) _Bool px_isStandInAlbum;
@property (nonatomic, readonly) _Bool px_isImportedAlbum;
@property (nonatomic, readonly) _Bool px_isMyPhotoStreamAlbum;
@property (nonatomic, readonly) _Bool px_isUserSmartAlbum;
@property (nonatomic, readonly) _Bool px_isSmartAlbum;
@property (nonatomic, readonly) _Bool px_isRootSmartAlbum;
@property (nonatomic, readonly) _Bool px_isMediaTypeSmartAlbum;
@property (nonatomic, readonly) _Bool px_isAllPhotosSmartAlbum;
@property (nonatomic, readonly) _Bool px_isFavoritesSmartAlbum;
@property (nonatomic, readonly) _Bool px_isPlacesSmartAlbum;
@property (nonatomic, readonly) _Bool px_isHiddenSmartAlbum;
@property (nonatomic, readonly) _Bool px_isRecentlyAddedSmartAlbum;
@property (nonatomic, readonly) _Bool px_isRecentlyDeletedSmartAlbum;
@property (nonatomic, readonly) _Bool px_isRecentsSmartAlbum;
@property (nonatomic, readonly) _Bool px_isRecentlyEditedSmartAlbum;
@property (nonatomic, readonly) _Bool px_isScreenRecordingsSmartAlbum;
@property (nonatomic, readonly) _Bool px_isSharedAlbum;
@property (nonatomic, readonly) _Bool px_isOwnedSharedAlbum;
@property (nonatomic, readonly) _Bool px_isCloudMultipleContributorsEnabled;
@property (nonatomic, readonly) _Bool px_isFolder;
@property (nonatomic, readonly) _Bool px_isRegularFolder;
@property (nonatomic, readonly) _Bool px_isSmartFolder;
@property (nonatomic, readonly) _Bool px_isFavoriteMemoriesSmartFolder;
@property (nonatomic, readonly) _Bool px_isTopLevelFolder;
@property (nonatomic, readonly) _Bool px_isSharedAlbumsFolder;
@property (nonatomic, readonly) _Bool px_isMediaTypesFolder;
@property (nonatomic, readonly) _Bool px_isProjectsFolder;
@property (nonatomic, readonly) _Bool px_isMacSyncedAlbum;
@property (nonatomic, readonly) _Bool px_isMacSyncedEventsFolder;
@property (nonatomic, readonly) _Bool px_isMacSyncedFacesFolder;
@property (nonatomic, readonly) _Bool px_isProject;
@property (nonatomic, readonly) _Bool px_isPhotosVirtualCollection;
@property (nonatomic, readonly) _Bool px_isMomentsVirtualCollection;
@property (nonatomic, readonly) _Bool px_isMemoriesVirtualCollection;
@property (nonatomic, readonly) _Bool px_isPeopleVirtualCollection;
@property (nonatomic, readonly) _Bool px_isSharedActivityVirtualCollection;
@property (nonatomic, readonly) _Bool px_isTransientPlacesCollection;
@property (nonatomic, readonly) _Bool px_isImportHistoryCollection;
@property (nonatomic, readonly) _Bool px_isImportSessionCollection;
@property (nonatomic, readonly) _Bool px_canRearrangeContent;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *px_localizedTitle;

+ (id)_assetCollectionsWithAlbumSubtypes:(id)arg1;
+ (id)px_rootProjectCollectionList;
+ (id)px_otherAlbumsCollectionList;
+ (id)px_otherAlbumsWithoutDeletedCollectionList;
+ (id)px_sharedAlbumsCollectionList;
+ (id)px_mediaTypesCollectionList;
+ (id)px_rootAlbumCollectionList;

- (_Bool)px_fetchIsEmpty;
- (_Bool)px_fetchContainsAnyAssets;

@end
