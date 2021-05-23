/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MSVMultiCallback, NSArray, NSMutableDictionary, _MRNowPlayingPlayerPathProtobuf;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientCallbacks : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MSVMultiCallback *_createPlaybackQueueForRequestCallbacks;
    MSVMultiCallback *_createItemForOffsetCallbacks;
    MSVMultiCallback *_createItemForIdentifierCallbacks;
    MSVMultiCallback *_createChildItemCallbacks;
    MSVMultiCallback *_metadataCallbacks;
    MSVMultiCallback *_languageOptionsCallbacks;
    MSVMultiCallback *_infoCallbacks;
    MSVMultiCallback *_lyricsCallbacks;
    MSVMultiCallback *_artworkCallbacks;
    CDUnknownBlockType _playbackSessionCallback;
    CDUnknownBlockType _playbackSessionMigrateBeginCallback;
    CDUnknownBlockType _playbackSessionMigrateEndCallback;
    CDUnknownBlockType _playbackSessionMigrateRequestCallback;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    CDUnknownBlockType _videoThumbnailsCallback;
    CDUnknownBlockType _audioAmplitudeSamplesCallback;
    NSMutableDictionary *_commandHandlerBlocks;
    MSVMultiCallback *_createItemToken;
    MSVMultiCallback *_createItemForIdentifierToken;
    MSVMultiCallback *_metadataToken;
    MSVMultiCallback *_languageToken;
    MSVMultiCallback *_artworkToken;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) _Bool hasPlaybackQueueCallbacks;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) MSVMultiCallback *createPlaybackQueueForRequestCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *createItemForOffsetCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *createItemForIdentifierCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *createChildItemCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *metadataCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *languageOptionsCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *infoCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *lyricsCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *artworkCallbacks;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionMigrateEndCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionMigrateRequestCallback;
@property (copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property (copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property (copy, nonatomic) CDUnknownBlockType videoThumbnailsCallback;
@property (copy, nonatomic) CDUnknownBlockType audioAmplitudeSamplesCallback;
@property (copy, nonatomic, readonly) NSArray *commandHandlerBlocks;

- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)addCommandHandlerBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (unsigned long long)_onQueue_capabilities;
- (void)registerNowPlayingInfoCallbacks:(id)arg1;
- (void)registerNowPlayingInfoAssetCallbacks:(id)arg1;
- (void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2;
- (void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;

@end
