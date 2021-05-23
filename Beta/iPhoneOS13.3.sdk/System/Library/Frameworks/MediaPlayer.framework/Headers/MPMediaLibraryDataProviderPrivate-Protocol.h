/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MPArtworkDataSource;

@protocol MPMediaLibraryDataProviderPrivate <Swift>

@property (copy, nonatomic, readonly) NSString *accountDSID;
@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) long long playbackHistoryPlaylistPersistentID;
@property (nonatomic, readonly) _Bool isGeniusEnabled;
@property (nonatomic, readonly) NSArray *preferredAudioLanguages;
@property (nonatomic, readonly) NSArray *preferredSubtitleLanguages;
@property (nonatomic, readonly) id <MPArtworkDataSource> completeMyCollectionArtworkDataSource;
@property (nonatomic, readonly) NSArray *localizedSectionIndexTitles;

+ (unsigned short)onDiskProviders;
+ (unsigned short)setOnDiskProviders: /* Error: Ran out of types for this method. */;

- (unsigned short)databasePath;
- (unsigned short)lastModifiedDate;
- (unsigned short)accountDSID;
- (unsigned short)hasMediaOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)hasGeniusMixes;
- (unsigned short)hasUbiquitousBookmarkableItems;
- (unsigned short)itemExistsWithPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)playlistExistsWithPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionExistsWithPersistentID:groupingType: /* Error: Ran out of types for this method. */;
- (unsigned short)localizedSectionHeaderForSectionIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)localizedSectionIndexTitles;
- (unsigned short)setValues:forProperties:forItemPersistentIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)geniusItemsForSeedItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isGeniusEnabled;
- (unsigned short)preferredAudioLanguages;
- (unsigned short)preferredSubtitleLanguages;
- (unsigned short)performTransactionWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performReadTransactionWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)isCurrentThreadInTransaction;
- (unsigned short)valueForDatabaseProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forDatabaseProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteDatabaseProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)multiverseIdentifierForTrackWithPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)multiverseIdentifierForCollectionWithPersistentID:groupingType: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionExistsContainedWithinPersistentIDs:count:groupingType:existentPID: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionExistsWithName:groupingType:existentPID: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionExistsWithStoreID:groupingType:existentPID: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionExistsWithSagaID:groupingType:existentPID: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionExistsWithCloudUniversalLibraryID:groupingType:existentPID: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionExistsContainedWithinSyncIDs:groupingType:existentPID: /* Error: Ran out of types for this method. */;
- (unsigned short)completeMyCollectionArtworkDataSource;
- (unsigned short)performStoreItemLibraryImport:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addTracksToMyLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)importArtworkTokenForEntityPersistentID:entityType:artworkToken:artworkType:sourceType: /* Error: Ran out of types for this method. */;
- (unsigned short)importOriginalArtworkFromImageData:withArtworkToken:artworkType:sourceType:mediaType: /* Error: Ran out of types for this method. */;
- (unsigned short)addGlobalPlaylistWithID:andAddToCloudLibrary:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addNonLibraryOwnedPlaylistsWithGlobalIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recordPlayEventForAlbumPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)recordPlayEventForPlaylistPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)itemPersistentIDForStoreID: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty:ofItemWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty:ofPlaylistWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty:ofCollectionWithIdentifier:groupingType:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaylistWithValuesForProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)sdk_addPlaylistWithValuesForProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteItemsWithIdentifiers:count: /* Error: Ran out of types for this method. */;
- (unsigned short)removeItemsWithIdentifiers:count: /* Error: Ran out of types for this method. */;
- (unsigned short)removePlaylistWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setItemsWithIdentifiers:forPlaylistWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addItemWithIdentifier:toPlaylistWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addItemsWithIdentifiers:toPlaylistWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)sdk_addItemWithOpaqueIdentifier:toPlaylistWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeItemsAtIndexes:inPlaylistWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllItemsInPlaylistWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFirstItemFromPlaylistWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)moveItemFromIndex:toIndex:inPlaylistWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)seedPlaylistWithIdentifier:withItemWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)createGeniusClusterPlaylistWithSeedItemIdentifiers:count:error: /* Error: Ran out of types for this method. */;
- (unsigned short)generateItemIdentifiersForGeniusClusterPlaylist:count:error: /* Error: Ran out of types for this method. */;
- (unsigned short)releaseGeniusClusterPlaylist: /* Error: Ran out of types for this method. */;
- (unsigned short)populateLocationPropertiesOfItemWithIdentifier:withPath:assetProtectionType: /* Error: Ran out of types for this method. */;
- (unsigned short)populateLocationPropertiesOfItemWithIdentifier:withPath:assetProtectionType:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clearLocationPropertiesOfItemWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsEntityChangeTrackingForMediaEntityType:collectionGroupingType:dataProviderClass: /* Error: Ran out of types for this method. */;
- (unsigned short)updateEntitesToCurrentRevision;
- (unsigned short)sdk_addItemWithOpaqueID:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaylistStoreItemsForLookupItems:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)playbackHistoryPlaylistPersistentID;

@end
