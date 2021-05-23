/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class EARCaesuraSilencePosteriorGenerator, NSString;

@protocol CSStartOfSpeechDetectorDelegate, OS_dispatch_queue;

@interface CSStartOfSpeechDetector : NSObject

{
    _Bool _startDetected;
    float _prevAudioProcessedMs;
    id <CSStartOfSpeechDetectorDelegate> _delegate;
    EARCaesuraSilencePosteriorGenerator *_caesuraSPG;
    NSString *_configFile;
    unsigned long long _minSpeechFrames;
    unsigned long long _curSpeechFrames;
    unsigned long long _numLeadingFrames;
    unsigned long long _samplingRate;
    NSObject<OS_dispatch_queue> *_spgQueue;
    NSObject<OS_dispatch_queue> *_sosQueue;
}

@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (retain, nonatomic) NSString *configFile;
@property (nonatomic) _Bool startDetected;
@property (nonatomic) unsigned long long minSpeechFrames;
@property (nonatomic) unsigned long long curSpeechFrames;
@property (nonatomic) unsigned long long numLeadingFrames;
@property (nonatomic) float prevAudioProcessedMs;
@property (nonatomic) unsigned long long samplingRate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sosQueue;
@property (weak, nonatomic) id <CSStartOfSpeechDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)endAudio;
- (void)resetForNewRequest;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)initWithConfig:(id)arg1 samplingRate:(unsigned long long)arg2 minSpeechFrames:(unsigned long long)arg3 numLeadingFrames:(unsigned long long)arg4 delegate:(id)arg5;

@end
