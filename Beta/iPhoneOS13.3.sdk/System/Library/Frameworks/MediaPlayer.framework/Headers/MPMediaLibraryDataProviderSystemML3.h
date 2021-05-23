/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@class NSObject;

@protocol MPArtworkDataSource, OS_dispatch_queue;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3

{
    id <MPArtworkDataSource> _completeMyCollectionArtworkDataSource;
    long long _currentRevision;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(_Bool)arg2;
+ (id)_localizedCloudGeniusErrorForError:(id)arg1;

- (id)initWithLibrary:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isGeniusEnabled;
- (id)completeMyCollectionArtworkDataSource;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;
- (void)releaseGeniusClusterPlaylist:(void *)arg1;
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;
- (void)updateEntitesToCurrentRevision;
- (long long)_currentRevision;
- (void)_initInstanceVariableOnce;
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
