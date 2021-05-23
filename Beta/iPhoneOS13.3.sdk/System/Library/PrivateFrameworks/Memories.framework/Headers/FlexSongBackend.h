/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, UIImage;

@interface FlexSongBackend : NSObject

{
    _Bool _hidden;
    _Bool _recalled;
    UIImage *_cachedArtwork;
    NSString *_uid;
    NSString *_audioEncoderPresetName;
    NSString *_songName;
    NSString *_artistName;
    NSSet *_tagIDs;
    NSSet *_keywords;
    NSArray *_assets;
    NSString *_songFormat;
    long long _sampleRate;
    long long _metadataVersion;
    NSDictionary *_customOptions;
}

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *audioEncoderPresetName;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSSet *tagIDs;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) UIImage *artwork;
@property (retain, nonatomic) NSString *songFormat;
@property (nonatomic) long long sampleRate;
@property (nonatomic) _Bool hidden;
@property (nonatomic) _Bool recalled;
@property (nonatomic) long long metadataVersion;
@property (retain, nonatomic) NSDictionary *customOptions;

- (_Bool)isLoaded;
- (_Bool)canPlay;
- (void)updateAssets:(id)arg1;
- (CDStruct_1b6d18a9)naturalDuration;
- (CDStruct_1b6d18a9)minimumDuration;
- (id)assetWithID:(id)arg1;
- (id)idealDurations;
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (id)existingAssetWithID:(id)arg1;
- (void)updateSongArtist:(id)arg1 title:(id)arg2 tags:(id)arg3 keywords:(id)arg4 hidden:(_Bool)arg5 recalled:(_Bool)arg6 metadataVersion:(long long)arg7;
- (id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(_Bool)arg6 recalled:(_Bool)arg7 audioEncoderPresetName:(id)arg8 metadataVersion:(long long)arg9 songFormat:(id)arg10 sampleRate:(long long)arg11 customOptions:(id)arg12;
- (void)updateSampleRate:(long long)arg1;
- (_Bool)verifyRendition:(id)arg1 forDuration:(CDStruct_1b6d18a9)arg2 failureReason:(id *)arg3;
- (id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;
- (id)_loadArtworkImage;
- (_Bool)_verifyClips:(id)arg1 inRendition:(id)arg2 failureReason:(id *)arg3;
- (_Bool)_verifyKeyFrames:(id)arg1 failureReason:(id *)arg2;

@end
