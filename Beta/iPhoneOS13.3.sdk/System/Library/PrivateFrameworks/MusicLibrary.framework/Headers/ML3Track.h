/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Entity.h>

@interface ML3Track : ML3Entity

+ (void)initialize;
+ (id)allProperties;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(_Bool)arg3;
+ (long long)revisionTrackingCode;
+ (id)containerQueryWithContainer:(id)arg1;
+ (_Bool)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (_Bool)trackWithPersistentID:(long long)arg1 visibleInLibrary:(id)arg2;
+ (id)albumsDefaultOrderingTerms;
+ (id)albumsByAlbumArtistDefaultOrderingTerms;
+ (id)artistsDefaultOrderingTerms;
+ (id)composersDefaultOrderingTerms;
+ (id)genresDefaultOrderingTerms;
+ (id)podcastsDefaultOrderingTerms;
+ (id)TVShowEpisodesDefaultOrderingTerms;
+ (id)podcastsEpisodesDefaultOrderingTerms;
+ (id)albumAllArtistsDefaultOrderingTerms;
+ (id)defaultOrderingTerms;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)databaseTable;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (id)unsettableProperties;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)extraTablesToInsert;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;
+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (id)extraTablesToDelete;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)predisambiguatedProperties;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletionType:(int)arg3 deletedFileSize:(long long *)arg4;
+ (_Bool)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (_Bool)_writeSyncDeletesToPlistWithLibrary:(id)arg1 forPersistentIDs:(id)arg2;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long *)arg3;
+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (_Bool)clearPlaybackKeysFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(_Bool)arg3 usingConnection:(id)arg4;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)artistAllAlbumsDefaultOrderingTerms;
+ (id)albumAndArtistDefaultOrderingTerms;
+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (_Bool)trackValueAreInTheCloud:(id)arg1;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;
+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;
+ (id)orderingTermsForITTGTrackOrder:(unsigned int)arg1 descending:(_Bool)arg2;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)importChaptersByParsingAsset:(id)arg1;

- (id)multiverseIdentifier;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (id)chapterTOC;
- (void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2;
- (_Bool)needsVideoSnapshot;
- (void)createVideoSnapshotAtTime:(double)arg1;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (id)absoluteFilePath;
- (_Bool)updateIntegrity;
- (id)rawIntegrity;
- (id)artworkTokenAtPlaybackTime:(double)arg1;
- (void)updateCollectionCloudStatus;
- (id)computeSHA256OfAudioPacketDataInLocalAsset;
- (void)updateStoreBookmarkMetadataIdentifier;
- (_Bool)_populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 fromLibrary:(id)arg3 usingConnection:(id)arg4;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (_Bool)populateArtworkCacheWithArtworkData:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1 isProtected:(_Bool)arg2;
- (id)multiverseIdentifierLibraryOnly:(_Bool)arg1;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;

@end
