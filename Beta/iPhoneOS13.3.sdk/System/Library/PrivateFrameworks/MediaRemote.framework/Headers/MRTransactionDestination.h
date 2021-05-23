/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRTransactionPacketizer, _MRNowPlayingPlayerPathProtobuf;

@protocol OS_dispatch_queue;

@interface MRTransactionDestination : NSObject

{
    MRTransactionPacketizer *_packetizer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _name;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2;
- (void)packetsFromMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
