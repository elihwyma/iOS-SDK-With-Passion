/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class EARPSRAudioProcessor, NSString;

@protocol CSSpIdSpeakerVectorGeneratorDelegate, OS_dispatch_queue;

@interface CSSpIdSpeakerVectorGenerator : NSObject

{
    unsigned long long _spIdType;
    NSString *_spIdTypeStr;
    id <CSSpIdSpeakerVectorGeneratorDelegate> _delegate;
    EARPSRAudioProcessor *_psrAudioProcessor;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned long long spIdType;
@property (retain, nonatomic) NSString *spIdTypeStr;
@property (weak, nonatomic) id <CSSpIdSpeakerVectorGeneratorDelegate> delegate;
@property (retain, nonatomic) EARPSRAudioProcessor *psrAudioProcessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)endAudio;
- (void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (id)initWithCSSpIdType:(unsigned long long)arg1 withSysConfigFilepath:(id)arg2 sysConfigRoot:(id)arg3 delegate:(id)arg4 queue:(id)arg5;
- (void)processAudioData:(id)arg1;
- (_Bool)_isSpeakerVectorValid:(id)arg1 speakerVectorSize:(unsigned long long)arg2 fromPsrAudioProcessor:(id)arg3;

@end
