/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@protocol FlexSongProtocol;

@interface FMSong : NSObject

{
    NSObject<FlexSongProtocol> *_backend;
}

@property (readonly) NSObject<FlexSongProtocol> *backend;

+ (id)loadSongBundleAtPath:(id)arg1;
+ (id)availableTagIDs;
+ (id)localizedNameForTagWithID:(id)arg1;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)arg1;
+ (_Bool)hasValidTagIDs:(id)arg1;
+ (long long)versionFromArtworkFilename:(id)arg1;

- (id)description;
- (_Bool)isLoaded;
- (id)_impl;
- (id)keywords;
- (id)uid;
- (_Bool)hidden;
- (long long)sampleRate;
- (id)artwork;
- (_Bool)canPlay;
- (id)artistName;
- (id)initWithBackend:(id)arg1;
- (long long)metadataVersion;
- (id)tagIDs;
- (void)updateAssets:(id)arg1;
- (void)_loadIfNeeded;
- (CDStruct_1b6d18a9)naturalDuration;
- (CDStruct_1b6d18a9)minimumDuration;
- (id)songName;
- (id)assetWithID:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)arg1;
- (_Bool)recalled;
- (id)mappedToVEK;
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2;
- (void)_notifySongAssetsChanged;
- (_Bool)_loadFlexSong;
- (id)idealDurations;
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (id)customOptions;
- (id)existingAssetWithID:(id)arg1;
- (void)updateBackend:(id)arg1;
- (id)songFormat;
- (id)audioEncoderPresetName;
- (void)updateAsset:(id)arg1 downloadProgress:(double)arg2;

@end
