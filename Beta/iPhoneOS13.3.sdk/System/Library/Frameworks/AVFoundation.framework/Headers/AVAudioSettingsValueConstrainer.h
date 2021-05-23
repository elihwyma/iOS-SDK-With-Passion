/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVAudioSettingsValueConstrainer : NSObject

{
    struct AudioStreamBasicDescription _inputASBD;
    struct AudioStreamBasicDescription _outputASBD;
    struct OpaqueAudioConverter *_audioConverter;
    unsigned int _outputDataRate;
    _Bool _needNewConverter;
    _Bool _needAvailableSampleRates;
    _Bool _needApplicableParameters;
    NSArray *_availableOutputSampleRates;
    NSMutableArray *_availableOutputDataRates;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
}

@property (nonatomic) float outputSampleRate;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) unsigned int outputFormatFlags;
@property (nonatomic) unsigned int outputBitsPerChannel;
@property (nonatomic) unsigned int outputChannelCount;
@property (nonatomic) unsigned int outputDataRate;

- (id)init;
- (void)dealloc;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription)arg1;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;
- (void)_buildAudioConverter;
- (id)_fetchApplicableOutputDataRates;
- (void)_buildAvailableSampleRates;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_bringUpToDate;
- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;

@end
