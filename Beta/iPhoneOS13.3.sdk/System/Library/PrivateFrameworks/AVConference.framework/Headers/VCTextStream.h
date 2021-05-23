/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStream.h>

@class NSString, VCTextReceiver, VCTextTransmitter;

@protocol VCTextReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCTextStream : VCMediaStream

{
    VCTextReceiver *_textReceiver;
    VCTextTransmitter *_textTransmitter;
    id <VCTextReceiverDelegate> _receiveDelegate;
}

@property (nonatomic) id <VCTextReceiverDelegate> receiveDelegate;
@property (nonatomic, readonly) double lastReceivedRTPPacketTime;
@property (nonatomic, readonly) double lastReceivedRTCPPacketTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)sendText:(struct NSString *)arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (id)supportedPayloads;
- (void)didReceiveText:(struct NSString *)arg1;
- (void)setupTextTransmitter;
- (_Bool)setupTextReceiverWithError:(id *)arg1;
- (void)didReceiveCharacter:(unsigned short)arg1;
- (void)onCallIDChanged;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSendRTCPPacket;
- (void)onRTPTimeout;
- (void)onRTCPTimeout;
- (double)rtcpHeartbeatLeeway;

@end
