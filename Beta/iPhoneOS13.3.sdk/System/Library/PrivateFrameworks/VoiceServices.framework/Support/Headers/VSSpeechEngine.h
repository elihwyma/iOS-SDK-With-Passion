/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSString, VSSpeechSynthesisCallbackResult;

@interface VSSpeechEngine : NSObject

{
    float _rate;
    float _pitch;
    float _volume;
    NSString *_voicePath;
    unsigned long long _pcmBufferSize;
    struct TTSSynthesizer *_synthesizer;
    VSSpeechSynthesisCallbackResult *_currentCallbackResult;
    struct AudioStreamBasicDescription _asbd;
}

@property (retain, nonatomic) NSString *voicePath;
@property (nonatomic) struct TTSSynthesizer *synthesizer;
@property (retain, nonatomic) VSSpeechSynthesisCallbackResult *currentCallbackResult;
@property (nonatomic) unsigned long long pcmBufferSize;
@property (nonatomic, readonly) struct AudioStreamBasicDescription asbd;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;

+ (_Bool)isUserCancelError:(id)arg1;

- (void)dealloc;
- (void)preheat;
- (id)synthesizeText:(id)arg1 loggable:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2;
- (void)stopAtMarker:(long long)arg1;
- (void)reloadMappedFiles;
- (id)loadResourceAtPath:(id)arg1 mimeType:(id)arg2;
- (_Bool)initializeWithResourcePath:(id)arg1;

@end
