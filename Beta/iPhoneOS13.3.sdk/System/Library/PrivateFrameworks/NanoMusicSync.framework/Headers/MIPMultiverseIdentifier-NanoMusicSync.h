/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <MusicLibrary/MIPMultiverseIdentifier.h>

@interface MIPMultiverseIdentifier (NanoMusicSync)

+ (id)midDataFromPlaylistPID:(id)arg1;
+ (id)midDataArrayFromPlaylistPIDs:(id)arg1;
+ (id)midDataArrayFromAlbumPIDs:(id)arg1;
+ (id)pidsFromMIDDataArray:(id)arg1;
+ (id)pidFromMIDData:(id)arg1;
+ (id)_pidsFromSyncIDs:(id)arg1 containerClass:(Class)arg2;
+ (id)_multiverseIdentifiersWithPIDs:(id)arg1 groupingType:(long long)arg2;
+ (id)midDataArrayFromPlaylistSyncIDs:(id)arg1;
+ (id)midDataArrayFromAlbumSyncIDs:(id)arg1;
+ (id)midDataFromPlaylistSyncID:(id)arg1;

@end
