/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioCircularBuffer, NSString;

@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFidesClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioCircularBuffer *_audioBuffer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) CSAudioCircularBuffer *audioBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_medicalIDName;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerGotSuperVector:(id)arg1;
- (id)_lastTriggerDataWithResult:(id)arg1;
- (void)_logDESRecordWithType:(long long)arg1 result:(id)arg2;
- (id)_medicalIDAge;

@end
