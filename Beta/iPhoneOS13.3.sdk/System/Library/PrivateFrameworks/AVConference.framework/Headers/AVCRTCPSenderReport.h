/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVCRTCPPacket.h>

@class AVCRTCPReceiverReport;

@interface AVCRTCPSenderReport : AVCRTCPPacket

{
    unsigned int _NTPMostSignificantWord;
    unsigned int _NTPLeastSignificantWord;
    unsigned int _RTPTimestamp;
    unsigned int _packetsSent;
    unsigned int _octetsSent;
    AVCRTCPReceiverReport *_receiverReport;
}

@property (nonatomic) unsigned int NTPMostSignificantWord;
@property (nonatomic) unsigned int NTPLeastSignificantWord;
@property (nonatomic) unsigned int RTPTimestamp;
@property (nonatomic) unsigned int packetsSent;
@property (nonatomic) unsigned int octetsSent;
@property (retain, nonatomic) AVCRTCPReceiverReport *receiverReport;

- (void)dealloc;
- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end
