/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol AVSpeechSynthesizerDelegate;

@interface AVSpeechSynthesizer : NSObject

{
    _Bool _speaking;
    _Bool _paused;
    _Bool _usesApplicationAudioSession;
    _Bool _mixToTelephonyUplink;
    id <AVSpeechSynthesizerDelegate> _delegate;
    NSArray *_outputChannels;
}

@property (weak, nonatomic) id <AVSpeechSynthesizerDelegate> delegate;
@property (nonatomic, readonly, getter=isSpeaking) _Bool speaking;
@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (retain, nonatomic) NSArray *outputChannels;
@property (nonatomic) _Bool usesApplicationAudioSession;
@property (nonatomic) _Bool mixToTelephonyUplink;

+ (void)initialize;

- (void)speakUtterance:(id)arg1;
- (_Bool)pauseSpeakingAtBoundary:(long long)arg1;
- (_Bool)continueSpeaking;
- (_Bool)stopSpeakingAtBoundary:(long long)arg1;
- (void)writeUtterance:(id)arg1 toBufferCallback:(CDUnknownBlockType)arg2;

@end
