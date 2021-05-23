/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelCurator, MPTiledArtworkRequest, NSDate, NSDateComponents, NSString, NSURL;

@interface MPModelPlaylist : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) MPModelCurator *curator;
@property (nonatomic) unsigned long long trackCount;
@property (nonatomic) _Bool hasCleanContent;
@property (nonatomic) _Bool hasExplicitContent;
@property (nonatomic, getter=isCuratorPlaylist) _Bool curatorPlaylist;
@property (nonatomic, getter=isOwner) _Bool owner;
@property (nonatomic, getter=isPublicPlaylist) _Bool publicPlaylist;
@property (nonatomic, getter=isVisiblePlaylist) _Bool visiblePlaylist;
@property (nonatomic, getter=isSubscribed) _Bool subscribed;
@property (nonatomic) long long userEditableComponents;
@property (nonatomic) long long type;
@property (nonatomic, getter=isLibraryAdded) _Bool libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSURL *shareShortURL;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents;
@property (copy, nonatomic) NSDateComponents *lastModifiedDateComponents;
@property (copy, nonatomic) NSDate *lastDevicePlaybackDate;
@property (copy, nonatomic) NSString *cloudVersionHash;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock;
@property (copy, nonatomic) MPTiledArtworkRequest *tiledArtworkRequest;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (copy, nonatomic, readonly) NSDate *downloadedDate;

+ (id)__trackCount_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__name_KEY;
+ (id)__editorNotes_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__type_KEY;
+ (id)__shareURL_KEY;
+ (id)__curator_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (_Bool)supportsLibraryRemoval;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (_Bool)supportsKeepLocalStatusObservation;
+ (id)kindWithPlaylistEntryKind:(id)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3;
+ (id)__hasCleanContent_KEY;
+ (id)__curatorPlaylist_KEY;
+ (id)__owner_KEY;
+ (id)__publicPlaylist_KEY;
+ (id)__visiblePlaylist_KEY;
+ (id)__subscribed_KEY;
+ (id)__userEditableComponents_KEY;
+ (id)__shareShortURL_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__lastModifiedDateComponents_KEY;
+ (id)__tiledArtworkRequest_KEY;
+ (id)__cloudVersionHash_KEY;

- (id)humanDescription;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)contentItemCollectionInfo;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)trackArtworkCatalogsWithCount:(long long)arg1;
- (id)tracksTiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;

@end
