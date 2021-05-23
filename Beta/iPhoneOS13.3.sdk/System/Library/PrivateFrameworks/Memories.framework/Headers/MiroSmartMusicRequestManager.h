/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEiOSSharedObject.h>

@class FMSongLibrary, MiroAutoEditLogger, NSArray, NSDate, NSSet;

__attribute__((visibility("hidden")))
@interface MiroSmartMusicRequestManager : VEiOSSharedObject

{
    _Bool _moodIsDownloading[12];
    _Bool _allowsDownloads;
    _Bool _didLogSongs;
    FMSongLibrary *_library;
    NSSet *_moodIDSet;
    double _initTime;
    MiroAutoEditLogger *_logger;
    NSArray *_observers;
    NSDate *_dateM5Starts;
    NSDate *_dateM5Ends;
}

@property (nonatomic, readonly) FMSongLibrary *library;
@property (retain, nonatomic) NSSet *moodIDSet;
@property (nonatomic) double initTime;
@property (nonatomic) _Bool didLogSongs;
@property (retain, nonatomic) MiroAutoEditLogger *logger;
@property (retain) NSArray *observers;
@property (retain, nonatomic) NSDate *dateM5Starts;
@property (retain, nonatomic) NSDate *dateM5Ends;
@property (nonatomic) _Bool allowsDownloads;

- (id)init;
- (void)dealloc;
- (void)_setup;
- (id)fetchAllSongs;
- (id)fetchSongWithUID:(id)arg1;
- (id)songLibrary;
- (id)bestLocalSongUIDForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4;
- (_Bool)hasEnoughLocalSongsForMoodID:(id)arg1;
- (id)recommendSongUIDForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4;
- (void)_removeObserversOnLibrary;
- (void)_downloadInProgressChanged:(id)arg1;
- (unsigned long long)_indexForMoodID:(id)arg1;
- (id)_moodIDforSongUID:(id)arg1;
- (void)storeDatePlayedForSongID:(id)arg1;
- (void)_requestDownloadForMoodID:(id)arg1;
- (_Bool)_isDownloadingforMoodID:(id)arg1;
- (id)bestSongToDownloadForMoodID:(id)arg1;
- (void)_setDownloding:(_Bool)arg1 forMoodID:(id)arg2;
- (id)_addObserversOnSongLibrary:(id)arg1 indicateNetworkActivity:(_Bool)arg2;
- (_Bool)isNowWithinTheM5PromotionDateRange;
- (id)allSongsScoredForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4 localOptions:(int)arg5;
- (double)scoreSong:(id)arg1 withKeywords:(id)arg2;
- (double)scoreSong:(id)arg1 forSpecialKeywords:(id)arg2;
- (double)scoreSong:(id)arg1 withRegionID:(id)arg2;
- (double)scoreLocalityForSong:(id)arg1;
- (double)scoreSong:(id)arg1 withMusicGenreDistribution:(id)arg2;
- (double)scoreSong:(id)arg1 withDateLastSelected:(double)arg2;
- (double)scoreSong:(id)arg1 withMoodID:(id)arg2;
- (_Bool)_isDownloadingAnything;
- (void)markSongUIDAsRequested:(id)arg1;
- (void)logSongLibraryInitTimeWithLogger:(id)arg1;
- (void)tearDownSongLibrary;
- (id)moodIDForSong:(id)arg1;
- (id)genreIDsForSong:(id)arg1;
- (_Bool)songHasSpecialKeyword:(id)arg1;
- (void)purgeAllLocalCachedAssets;

@end
