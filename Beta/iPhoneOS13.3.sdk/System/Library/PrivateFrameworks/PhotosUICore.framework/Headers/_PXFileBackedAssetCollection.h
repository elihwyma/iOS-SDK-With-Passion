/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBaseDisplayCollection.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@interface _PXFileBackedAssetCollection : PXBaseDisplayCollection <Swift>

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
@property (nonatomic, readonly) _Bool isEnriched;
@property (nonatomic, readonly) _Bool isEnrichmentComplete;
@property (nonatomic, readonly) double promotionScore;
@property (nonatomic, readonly) _Bool isAggregation;
@property (nonatomic, readonly) _Bool isRecent;
@property (nonatomic, readonly) unsigned short px_highlightEnrichmentState;
@property (nonatomic, readonly) long long px_highlightKind;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedDebugDescription;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSString *localizedDateDescription;
@property (nonatomic, readonly) NSString *localizedSmartDescription;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;

@end
