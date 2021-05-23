/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVCRTCPPacket.h>

@interface AVCRTCPReceiverReport : AVCRTCPPacket

{
    unsigned int _reportedSourceSSRC;
    unsigned char _fractionLost;
    unsigned int _cumulativePacketsLost;
    unsigned int _extendedHighestSequenceNumber;
    unsigned int _interarrivalJitter;
    unsigned int _lastSRTimestamp;
    unsigned int _delaySinceLastSR;
}

@property (nonatomic) unsigned int reportedSourceSSRC;
@property (nonatomic) unsigned char fractionLost;
@property (nonatomic) unsigned int cumulativePacketsLost;
@property (nonatomic) unsigned int extendedHighestSequenceNumber;
@property (nonatomic) unsigned int interarrivalJitter;
@property (nonatomic) unsigned int lastSRTimestamp;
@property (nonatomic) unsigned int delaySinceLastSR;

- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end
