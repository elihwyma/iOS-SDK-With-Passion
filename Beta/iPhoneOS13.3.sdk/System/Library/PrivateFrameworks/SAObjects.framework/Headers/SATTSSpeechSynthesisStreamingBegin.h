/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSString, SATTSSpeechSynthesisResource, SATTSSpeechSynthesisVoice, SAUIAudioDescription;

@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming

@property (retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
@property (retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property (retain, nonatomic) SATTSSpeechSynthesisResource *speechSynthesisResource;
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *speechSynthesisVoice;
@property (nonatomic) float streamingPlaybackBufferSize;
@property (copy, nonatomic) NSString *text;

+ (id)speechSynthesisStreamingBegin;
+ (id)speechSynthesisStreamingBeginWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
