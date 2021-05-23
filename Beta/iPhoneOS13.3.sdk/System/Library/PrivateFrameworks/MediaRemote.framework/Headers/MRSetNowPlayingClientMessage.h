/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingClientProtobuf;

@interface MRSetNowPlayingClientMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRNowPlayingClientProtobuf *client;

- (unsigned long long)type;
- (id)initWithClient:(id)arg1;

@end
