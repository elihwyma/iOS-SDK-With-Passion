/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf;

@interface MRRemovePlayerMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (unsigned long long)type;
- (id)initWithPlayerPath:(id)arg1;

@end
