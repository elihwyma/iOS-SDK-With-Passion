/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CSADCompanionServiceProvider, OS_dispatch_queue;

@interface CSP2PService : NSObject

{
    id <CSADCompanionServiceProvider> _adCompanionServiceProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_lastCommunicatedPeer;
    NSString *_voiceTriggerBatchId;
    NSString *_voiceIdentificationBatchId;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *lastCommunicatedPeer;
@property (retain, nonatomic) NSString *voiceTriggerBatchId;
@property (retain, nonatomic) NSString *voiceIdentificationBatchId;
@property (weak, nonatomic) id <CSADCompanionServiceProvider> adCompanionServiceProvider;

+ (id)sharedInstance;

- (id)init;
- (void)sendVoiceGradingDataToNearbyPeer;
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1;
- (void)sendVoiceTriggerGradingDataToCompanion;
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_sendParallelRecordingsToPeerId:(id)arg1 voiceProfileRequestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processMusicAccountSignInCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_sendVoiceGradingDataToPeerId:(id)arg1;
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1;
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2;
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(CDUnknownBlockType)arg3;
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7;
- (void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2;
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(CDUnknownBlockType)arg3;

@end
