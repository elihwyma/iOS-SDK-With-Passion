/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class FlexCloudManager, FlexReachability, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface FMSongLibrary : NSObject

{
    _Bool _networkingIsDisabled;
    _Bool _contactedCloud;
    NSMutableArray *_songs;
    NSDictionary *_options;
    NSMutableDictionary *_songsByUID;
    NSMutableSet *_assetsInFlight;
    FlexCloudManager *_cloudManager;
    FlexReachability *_flexReachability;
    long long _networkStatus;
}

@property (retain, nonatomic) NSMutableArray *songs;
@property (nonatomic, readonly) NSDictionary *options;
@property (retain, nonatomic) NSMutableDictionary *songsByUID;
@property (retain, nonatomic) NSMutableSet *assetsInFlight;
@property (retain, nonatomic) FlexCloudManager *cloudManager;
@property (retain, nonatomic) FlexReachability *flexReachability;
@property (nonatomic) long long networkStatus;
@property (nonatomic) _Bool contactedCloud;
@property (nonatomic, readonly) _Bool networkingIsDisabled;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)_setupReachability;
- (void)networkStatusChanged:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;
- (id)fetchSongWithUID:(id)arg1;
- (id)fetchSongsWithOptions:(id)arg1;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2;
- (void)_createCloudManager;
- (void)_loadBundledSongs;
- (void)_loadCachedSongs;
- (void)_updateFromCloud;
- (void)_notifySongsChanged:(id)arg1;
- (void)_downloadProgressChanged:(id)arg1;
- (void)_notifySongDownloadInProgressChanged:(_Bool)arg1;
- (id)registerSongBundleAtPath:(id)arg1;
- (_Bool)supportForCloud;
- (void)unregisterSongWithID:(id)arg1;
- (id)_registerSongs:(id)arg1;
- (void)cancelDownloadOfAllAssets;

@end
