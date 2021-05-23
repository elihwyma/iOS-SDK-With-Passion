/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionMessage : MRProtocolMessage

{
    NSMutableArray *_packets;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) NSArray *packets;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (unsigned long long)type;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;
- (id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(id)arg3;
- (id)initWithPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2;

@end
