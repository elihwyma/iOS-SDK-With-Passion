/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface VCMediaStreamManager : NSObject

{
    struct _opaque_pthread_mutex_t stateLock;
    NSMutableArray *streamArray;
    NSObject<OS_dispatch_queue> *xpcQueue;
    NSMutableDictionary *_vcMomentsCollectorDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;
+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(_Bool)arg3;
- (void)vcMediaStreamDidInterruptionBegin:(id)arg1;
- (void)vcMediaStreamDidInterruptionEnd:(id)arg1;
- (id)textStreamWithStreamToken:(long long)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didPauseStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didResumeStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveText:(struct NSString *)arg2;
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3 dictionary:(id)arg4;
- (void)pauseStreams:(_Bool)arg1;

@end
