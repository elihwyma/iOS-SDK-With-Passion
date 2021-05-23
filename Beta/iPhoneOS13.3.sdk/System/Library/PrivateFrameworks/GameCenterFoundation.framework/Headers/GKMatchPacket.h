/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface GKMatchPacket : NSObject

{
    unsigned char _version;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    unsigned short _checksum;
    _Bool _valid;
    NSData *_data;
}

@property (nonatomic) unsigned char version;
@property (nonatomic) unsigned char packetType;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned int totalLength;
@property (nonatomic) unsigned short checksum;
@property (nonatomic) _Bool valid;
@property (retain, nonatomic) NSData *data;

- (id)init;
- (void)dealloc;
- (id)message;
- (id)initWithMessage:(id)arg1;

@end
