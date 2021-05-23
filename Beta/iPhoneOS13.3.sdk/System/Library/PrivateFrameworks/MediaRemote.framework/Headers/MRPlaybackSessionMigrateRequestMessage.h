/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionMigrateRequest, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRPlaybackSessionProtobuf *playbackSession;
@property (nonatomic, readonly) MRPlaybackSessionMigrateRequest *request;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (unsigned long long)type;
- (id)initWithPlaybackSession:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3;

@end
