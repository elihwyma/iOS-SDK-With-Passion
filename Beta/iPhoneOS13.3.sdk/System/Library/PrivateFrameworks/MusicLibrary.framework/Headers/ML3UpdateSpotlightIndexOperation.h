/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseOperation.h>

@class CSSearchableIndex, NSString;

@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation

{
    CSSearchableIndex *_index;
    NSString *_bundleIdentifier;
    unsigned long long _bundle;
    unsigned long long _batchCount;
}

@property (retain, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long bundle;
@property (nonatomic) unsigned long long batchCount;

- (unsigned long long)type;
- (_Bool)_execute:(id *)arg1;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;
- (_Bool)_updateIndexedItemsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)_indexItemsFromLibrarySinceRevision:(long long)arg1 targetRevision:(long long)arg2 error:(id *)arg3;
- (_Bool)_deleteAllIndexedItemsWithError:(id *)arg1;
- (_Bool)_deleteIndexedItemsWithEntityStringIDs:(id)arg1 error:(id *)arg2;
- (_Bool)_indexTracksWithPersistentIDs:(id)arg1 playlistsWithPersistentIDs:(id)arg2 error:(id *)arg3;
- (_Bool)_batchIndexWithTrackPersistentIDsToUpdate:(id)arg1 playlistsPersistentIDsToUpdateSet:(id)arg2 entityStringsToDelete:(id)arg3 currentRevision:(id)arg4 targetRevision:(id)arg5 error:(id *)arg6;
- (_Bool)_enumerateSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)_createSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id *)arg3;
- (id)_createSearchableItemsForTracksWithQuery:(id)arg1 error:(id *)arg2;
- (id)_createSearchableItemsForPlaylistsWithQuery:(id)arg1 error:(id *)arg2;
- (id)_queryForPlaylistsContainingMusicShowsMissedByQuery:(id)arg1 inContainerPIDs:(id)arg2;

@end
