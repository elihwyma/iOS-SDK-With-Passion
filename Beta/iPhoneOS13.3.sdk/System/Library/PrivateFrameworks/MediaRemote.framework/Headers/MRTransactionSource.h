/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRTransactionPacketizer, NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@protocol MRTransactionSourceDelegate;

@interface MRTransactionSource : NSObject

{
    unsigned long long _name;
    MRTransactionPacketizer *_packetizer;
    NSMutableArray *_packets;
    id <MRTransactionSourceDelegate> _delegate;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void)_begin;
- (void)_processMessage:(id)arg1;
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 packets:(id)arg3 delegate:(id)arg4;

@end
