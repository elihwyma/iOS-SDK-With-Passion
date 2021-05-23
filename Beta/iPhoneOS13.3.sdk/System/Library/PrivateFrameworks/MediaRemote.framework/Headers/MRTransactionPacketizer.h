/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject

{
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}

- (_Bool)isEmpty;
- (void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
