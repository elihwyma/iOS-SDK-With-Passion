/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVCPacketFilter.h>

@interface AVCPacketFilterRTP : AVCPacketFilter

{
    unsigned int _SSRC;
    unsigned char _type;
}

- (_Bool)isMatchedPacket:(const void *)arg1 size:(int)arg2;
- (_Bool)isRTCPPayload:(unsigned short)arg1;
- (_Bool)isPayloadTypeMatched:(_Bool)arg1;
- (id)initWithIncomingSSRC:(unsigned int)arg1 acceptPacketType:(unsigned char)arg2;

@end
