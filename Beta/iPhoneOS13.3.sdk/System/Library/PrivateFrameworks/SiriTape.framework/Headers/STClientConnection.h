/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <SiriTape/STProxyConnection.h>

@class NSObject, NSString, NSURL, STMockSessionDJ, SiriCoreDataCompressor;

@protocol OS_dispatch_data;

@interface STClientConnection : STProxyConnection

{
    NSObject<OS_dispatch_data> *_bufferedGeneralOutputData;
    SiriCoreDataCompressor *_outputCompressor;
    double _lastReplayEvent;
    NSURL *_replayFileURL;
    STMockSessionDJ *_sessionDJ;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_initializeBufferedGeneralOutputDataWithInitialPayload:(_Bool)arg1;
- (void)_bufferGeneralData:(id)arg1;
- (_Bool)_hasBufferedDataOrOutstandingPings;
- (void)_tryToWriteBufferedOutputData;
- (void)_sendGeneralData:(id)arg1;
- (void)_handleAceNop;
- (void)_handleAcePing:(unsigned int)arg1;
- (void)_handleAcePong:(unsigned int)arg1;
- (void)_handleAceEnd;
- (_Bool)_sendAcePongWithId:(unsigned int)arg1 error:(id *)arg2;
- (id)initWithSocket:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3;
- (void)handleAceObject:(id)arg1;
- (void)handlePacket:(CDStruct_95d471ab *)arg1;
- (void)_handleLoadAssistant:(id)arg1;
- (void)_addStartRequestIDToReplay:(id)arg1;
- (void)_startReplayWithAceID:(id)arg1 atURL:(id)arg2;
- (_Bool)_sendAceCommand:(id)arg1 error:(id *)arg2;
- (void)_checkForReplayTimeout;
- (_Bool)_sendAceEndWithError:(id *)arg1;
- (void)sessionDJ:(id)arg1 replayAceCommand:(id)arg2;
- (void)sessionDJReplayDidFinish:(id)arg1;

@end
