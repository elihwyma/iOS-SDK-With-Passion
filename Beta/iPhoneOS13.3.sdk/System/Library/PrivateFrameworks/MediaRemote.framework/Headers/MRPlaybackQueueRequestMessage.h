/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRPlaybackQueueRequestProtobuf *request;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (unsigned long long)type;
- (unsigned long long)priority;
- (id)initWithRequest:(id)arg1 forPlayerPath:(id)arg2;

@end
