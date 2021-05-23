/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, VCTextJitterBuffer;

@protocol VCTextReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCTextReceiver : NSObject

{
    struct tagHANDLE *_rtpHandle;
    unsigned int _sampleRate;
    id <VCTextReceiverDelegate> _delegate;
    struct tagVCRealTimeThread *_receiverThread;
    NSArray *_supportedPayloads;
    VCTextJitterBuffer *_jitterBuffer;
    double _lastReceivedRTPPacketTime;
    double _lastReceivedRTCPPacketTime;
}

@property (nonatomic) id <VCTextReceiverDelegate> delegate;
@property (retain, nonatomic) NSArray *supportedPayloads;
@property (nonatomic) double lastReceivedRTPPacketTime;
@property (nonatomic) double lastReceivedRTCPPacketTime;

- (void)dealloc;
- (_Bool)stop;
- (_Bool)start;
- (id)initWithConfiguration:(struct _VCTextReceiverConfiguration *)arg1;
- (void)initializeTextPacket:(struct tagAudioPacket *)arg1 withMediaPacket:(struct _RTPMediaPacket *)arg2;
- (void)processRTPPacket;
- (void)processRTCPPacket;
- (int)retrieveRTPPacket:(struct tagAudioPacket *)arg1;
- (void)splitPacket:(struct tagAudioPacket *)arg1 packetArray:(struct tagAudioPacketArray *)arg2;
- (void)validateAndEnqueuePackets:(struct tagAudioPacketArray *)arg1;
- (_Bool)isSupportedPayload:(int)arg1;
- (_Bool)enqueuePacket:(struct tagAudioPacket *)arg1;
- (struct tagAudioFrame *)allocFrameWithPacket:(struct tagAudioPacket *)arg1 data:(char *)arg2 dataLength:(int)arg3 timestamp:(unsigned int)arg4;
- (_Bool)parsePacket:(struct tagAudioPacket *)arg1;
- (void)didDetectMissingFrame;
- (void)didReceiveFrame:(struct tagAudioFrame *)arg1;
- (void)receiverThreadCallback:(struct tagVCRealTimeThreadParameters *)arg1;

@end
