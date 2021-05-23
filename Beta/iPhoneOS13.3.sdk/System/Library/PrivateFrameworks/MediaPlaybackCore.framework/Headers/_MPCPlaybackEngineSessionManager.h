/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCPlaybackEngine, MPCPlayerPath, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSMutableArray, NSMutableDictionary, NSString, _MPCPlaybackSessionArchive;

@protocol OS_dispatch_queue;

@interface _MPCPlaybackEngineSessionManager : NSObject <Swift>

{
    MPCPlaybackEngine *_playbackEngine;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MPNowPlayingInfoCenter *_infoCenter;
    MPRemoteCommandCenter *_commandCenter;
    NSMutableArray *_sessionArchives;
    NSMutableDictionary *_sessionIdentifierArchiveMap;
    _MPCPlaybackSessionArchive *_stagedArchive;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) MPNowPlayingInfoCenter *infoCenter;
@property (nonatomic, readonly) MPRemoteCommandCenter *commandCenter;
@property (nonatomic, readonly) NSMutableArray *sessionArchives;
@property (nonatomic, readonly) NSMutableDictionary *sessionIdentifierArchiveMap;
@property (retain, nonatomic) _MPCPlaybackSessionArchive *stagedArchive;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (weak, nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) NSString *stateRestorationSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archivesAtURL:(id)arg1;

- (id)_cachesDirectory;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationWithCompletion:(CDUnknownBlockType)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)loadSessionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_playbackSessionsDirectory;
- (void)setStateRestorationSessionIdentifier:(id)arg1;
- (void)deleteSessionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
