/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface VSAudioData : NSObject

{
    NSData *_audioData;
    long long _packetCount;
    NSData *_packetDescriptions;
    struct AudioStreamBasicDescription _asbd;
}

@property (retain, nonatomic) NSData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription asbd;
@property (nonatomic) long long packetCount;
@property (retain, nonatomic) NSData *packetDescriptions;

+ (id)audioDataFromPresynthesisRequest:(id)arg1;
+ (id)audioDataFromFile:(id)arg1 error:(id *)arg2;
+ (struct AudioStreamBasicDescription)asbdFromDescription:(id)arg1;
+ (id)audioDataWithASBD:(struct AudioStreamBasicDescription)arg1 rawData:(id)arg2;
+ (id)audioDataFromSAUIAudioData:(id)arg1;
+ (id)pcmAudioDataFromOpusAudio:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)duration;
- (_Bool)writeToFilePath:(id)arg1;
- (void)concatenateWithAudio:(id)arg1;
- (_Bool)populateWithPCMData:(id)arg1;
- (_Bool)populateWithOpusData:(id)arg1;
- (_Bool)populatePCMDataWithSiriOpusSData:(id)arg1 withOpusASBD:(struct AudioStreamBasicDescription)arg2;

@end
