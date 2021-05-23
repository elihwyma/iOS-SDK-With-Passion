/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSData, SATTSSpeechSynthesisAudioInfo;

@interface SATTSSpeechSynthesisStreamingChunk : SATTSSpeechSynthesisStreaming

@property (copy, nonatomic) NSData *audioData;
@property (retain, nonatomic) SATTSSpeechSynthesisAudioInfo *audioInfo;
@property (nonatomic) long long index;

+ (id)speechSynthesisStreamingChunk;
+ (id)speechSynthesisStreamingChunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
