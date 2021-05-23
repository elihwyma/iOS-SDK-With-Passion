/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, VSAudioData;

@interface VSSpeechCacheAudio : NSObject

{
    long long _magicVersion;
    NSArray *_timingInfos;
    VSAudioData *_audio;
    NSString *_key;
    NSData *_audioData;
    long long _packetCount;
    NSData *_packetDescriptions;
    struct AudioStreamBasicDescription _asbd;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription asbd;
@property (nonatomic) long long packetCount;
@property (retain, nonatomic) NSData *packetDescriptions;
@property (nonatomic, readonly) long long magicVersion;
@property (nonatomic, readonly) NSArray *timingInfos;
@property (nonatomic, readonly) VSAudioData *audio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)serializedData;
- (id)initWithKey:(id)arg1 data:(id)arg2;
- (id)initWithKey:(id)arg1 audio:(id)arg2 wordTimingInfo:(id)arg3;

@end
