/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@protocol CSAudioConverterDelegate;

@interface CSAudioConverter : NSObject

{
    struct OpaqueAudioConverter *_opusConverter;
    NSMutableData *_bufferedLPCM;
    unsigned int _recordBasePacketsPerSecond;
    struct AudioStreamBasicDescription _opusOutASBD;
    unsigned int _convertPacketCount;
    unsigned int _convertAudioCapacity;
    unsigned long long _lastTimestamp;
    float _outPacketSizeInSec;
    id <CSAudioConverterDelegate> _delegate;
}

@property (weak) id <CSAudioConverterDelegate> delegate;

+ (id)narrowBandOpusConverter;
+ (id)opusConverter;

- (void)dealloc;
- (void)reset;
- (void)flush;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg1;
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(_Bool)arg2 timestamp:(unsigned long long)arg3;

@end
