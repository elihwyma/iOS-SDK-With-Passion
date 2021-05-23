/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FlexSongBackend.h>

@class FlexMLSummaryManager, NSString, NSURL;

@interface FlexMLSong : FlexSongBackend

{
    NSURL *_audioFileURL;
    FlexMLSummaryManager *_summaryManager;
    NSString *_rootPath;
    NSString *_metadataPath;
    NSString *_audioFileExtension;
    CDStruct_1b6d18a9 _cachedNaturalDuration;
}

@property (retain, nonatomic) FlexMLSummaryManager *summaryManager;
@property (nonatomic, readonly) NSString *rootPath;
@property (nonatomic, readonly) NSString *metadataPath;
@property (retain, nonatomic) NSString *audioFileExtension;
@property (nonatomic) CDStruct_1b6d18a9 cachedNaturalDuration;
@property (nonatomic, readonly) NSURL *audioFileURL;

+ (id)loadSongAtPath:(id)arg1;

- (id)initWithFileAtPath:(id)arg1;
- (_Bool)isLoaded;
- (_Bool)canPlay;
- (CDStruct_1b6d18a9)naturalDuration;
- (CDStruct_1b6d18a9)minimumDuration;
- (id)idealDurations;
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (void)_setupInitialAssets:(id)arg1;
- (_Bool)verifyRendition:(id)arg1 forDuration:(CDStruct_1b6d18a9)arg2 failureReason:(id *)arg3;
- (id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;

@end
