/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@interface AVCRTCPPacket : NSObject

{
    unsigned char _packetType;
    unsigned int _SSRC;
}

@property (nonatomic) unsigned char packetType;
@property (nonatomic) unsigned int SSRC;

+ (id)newPacketWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end
