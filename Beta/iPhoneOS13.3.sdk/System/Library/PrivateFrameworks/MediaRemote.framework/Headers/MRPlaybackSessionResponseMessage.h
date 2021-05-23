/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRPlaybackSessionProtobuf;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRPlaybackSessionProtobuf *playbackSession;

- (unsigned long long)type;
- (id)initWithPlaybackSession:(id)arg1;

@end
