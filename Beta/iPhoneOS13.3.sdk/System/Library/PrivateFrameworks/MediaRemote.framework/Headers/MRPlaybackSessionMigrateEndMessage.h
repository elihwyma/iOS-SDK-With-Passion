/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSError, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRPlaybackSessionRequestProtobuf *request;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (unsigned long long)type;
- (id)initWithRequest:(id)arg1 error:(id)arg2 playerPath:(id)arg3;

@end
