/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRPlaybackSessionRequestProtobuf *request;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (unsigned long long)type;
- (id)initWithRequest:(id)arg1 playerPath:(id)arg2;

@end
