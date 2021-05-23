/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject

{
    void *_echo;
    void *_echo_library;
    void *_echo_cluster_playlist;
    NSMutableData *_sharedBlobMutableData;
}

+ (id)geniusTracksForSeedTrack:(id)arg1 error:(id *)arg2;
+ (id)playlistControllerWithSeedTracks:(id)arg1 error:(id *)arg2;
+ (void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)hasGeniusDataAvailable;
+ (_Bool)hasGeniusFeatureEnabled;
+ (unsigned long long)defaultMinTrackCount;
+ (unsigned long long)defaultTrackCount;
+ (_Bool)useFakeGeniusData;
+ (void)ignoreUnusedWarnings;

- (id)init;
- (void)dealloc;
- (id)tracksFromClusterForCount:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id *)arg3;
- (_Bool)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id *)arg3;
- (_Bool)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id *)arg2;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)arg1 error:(id *)arg2;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned long long)arg2 stride:(int)arg3;
- (_Bool)_canIncludeTrackInGeniusContainer:(id)arg1;
- (id)_sharedBlobMutableData;

@end
