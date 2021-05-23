/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class FMSongLibrary, NSMutableArray, NSMutableDictionary;

@interface FlexCloudManager : NSObject

{
    FMSongLibrary *_library;
    NSMutableArray *_cloudManagedSongs;
    NSMutableDictionary *_cloudManagedSongsByUID;
    unsigned long long _retryCount;
}

@property (nonatomic) unsigned long long retryCount;
@property (weak, readonly) FMSongLibrary *library;
@property (readonly) NSMutableArray *cloudManagedSongs;
@property (readonly) NSMutableDictionary *cloudManagedSongsByUID;

+ (id)createCloudManager:(long long)arg1 withLibrary:(id)arg2 options:(id)arg3;

- (id)initWithLibrary:(id)arg1;
- (void)retryFetchAllSongs;
- (void)_registerSongs:(id)arg1;
- (void)cancelDownloadOfAsset:(id)arg1;
- (id)loadCachedSongs;
- (void)fetchAllSongsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (void)requestDownloadOfAsset:(id)arg1 withOptions:(id)arg2;
- (void)cancelDownloadOfAllAssets;
- (void)requestPurgeOfAsset:(id)arg1;
- (unsigned long long)assetStatus:(id)arg1;
- (id)_purgeAndReturnReplacementFor:(id)arg1;
- (void)requestDownloadOfAsset:(id)arg1;

@end
