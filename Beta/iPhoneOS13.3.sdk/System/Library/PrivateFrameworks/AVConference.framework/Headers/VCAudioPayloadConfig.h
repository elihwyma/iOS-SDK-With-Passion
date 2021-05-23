/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCAudioPayloadConfig : NSObject

{
    int _payload;
    int _format;
    unsigned int _blockSize;
    unsigned int _codecSampleRate;
    unsigned int _inputSampleRate;
    unsigned int _codecSamplesPerFrame;
    unsigned int _inputSamplesPerFrame;
    unsigned int _internalBundleFactor;
    unsigned int _bundleHeaderBytes;
    NSArray *_supportedBitrates;
    unsigned int _bitrate;
    _Bool _forcingBitrate;
    _Bool _useSBR;
    _Bool _isDTXEnabled;
    unsigned int _evsSIDPeriod;
    unsigned short _evsChannelAwareOffset;
    _Bool _evsHeaderFullOnly;
    _Bool _payloadOctetAligned;
}

@property (nonatomic, readonly) int payload;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, readonly) unsigned int samplesPerFrame;
@property (nonatomic, readonly) unsigned int codecSampleRate;
@property (nonatomic, readonly) unsigned int bitrate;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) unsigned int internalBundleFactor;
@property (nonatomic, readonly) _Bool payloadOctetAligned;
@property (nonatomic, readonly) _Bool forcingBitrate;
@property (nonatomic, readonly) NSArray *supportedBitrates;
@property (nonatomic, readonly) unsigned int inputSampleRate;
@property (nonatomic, readonly) _Bool isDTXEnabled;
@property (nonatomic, readonly) unsigned int evsSIDPeriod;
@property (nonatomic, readonly) unsigned int blockSize;
@property (nonatomic, readonly) unsigned int bundleHeaderBytes;
@property (nonatomic, readonly) unsigned short evsChannelAwareOffset;
@property (nonatomic, readonly) _Bool evsHeaderFullOnly;

- (void)dealloc;
- (id)description;
- (id)className;
- (_Bool)configure:(id)arg1;
- (void)setUseSBR:(_Bool)arg1;
- (id)initWithConfigDict:(id)arg1;
- (float)qualityForBitRate:(unsigned int)arg1;
- (void)setupEncodeProperties:(id)arg1;
- (void)createSupportedBitrates;
- (unsigned int)aacBitrate;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitratesForOpus;
- (void)createSupportedBitratesForAMR8k;
- (void)createSupportedBitratesForAMR16k;
- (void)createSupportedBitratesForEVS;

@end
