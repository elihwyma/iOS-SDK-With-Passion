/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioProvider, CSAudioStreamHolding, NSMutableDictionary, NSString;

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerFirstPassHearst : NSObject

{
    float _remoteMicVADThreshold;
    float _remoteMicVADMyriadThreshold;
    float _minimumPhraseLengthForVADGating;
    id <CSVoiceTriggerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_hearstSecondPassRequests;
    CSAsset *_currentAsset;
    CSAudioStreamHolding *_triggeredAudioStreamHolding;
    CSAudioProvider *_triggeredAudioProvider;
    unsigned long long _secondChanceHotTillMachTime;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *hearstSecondPassRequests;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (nonatomic) float remoteMicVADThreshold;
@property (nonatomic) float remoteMicVADMyriadThreshold;
@property (nonatomic) float minimumPhraseLengthForVADGating;
@property (retain, nonatomic) CSAudioStreamHolding *triggeredAudioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (weak, nonatomic) id <CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)reset;
- (void)_reset;
- (void)setAsset:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)_handleRemoteMicVoiceTriggerEvent:(id)arg1 secondPassRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleRemoteMicVADEventWithSecondPassRequest:(id)arg1;
- (void)_cancelAllAudioStreamHoldings;
- (void)_requestStartAudioStreamWitContext:(id)arg1 secondPassRequest:(id)arg2 startStreamOption:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSecondPassResult:(unsigned long long)arg1 secondPassRequest:(id)arg2 voiceTriggerInfo:(id)arg3 deviceId:(id)arg4 secondChanceCandidate:(_Bool)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
