/*
 Image: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVCRTPAudioSessionDelegate : NSObject

{
    struct AVCRTPAudioSession *owner;
    struct AVCRTPStackController *stackController;
}

@property (nonatomic) struct AVCRTPAudioSession *owner;
@property (nonatomic) struct AVCRTPStackController *stackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)streamDidStop:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)stream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didPause:(_Bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didResume:(_Bool)arg2 error:(id)arg3;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)stream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)stream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)stream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)handleRTCPPacketWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithOwner:(struct AVCRTPAudioSession *)arg1 andStackController:(struct AVCRTPStackController *)arg2;

@end
