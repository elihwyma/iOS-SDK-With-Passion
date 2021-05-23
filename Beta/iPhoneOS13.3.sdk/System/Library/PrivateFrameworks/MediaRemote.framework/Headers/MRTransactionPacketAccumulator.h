/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface MRTransactionPacketAccumulator : NSObject

{
    NSMutableOrderedSet *_packets;
    unsigned long long _currentLength;
}

- (id)init;
- (id)mergePacket:(id)arg1;

@end
