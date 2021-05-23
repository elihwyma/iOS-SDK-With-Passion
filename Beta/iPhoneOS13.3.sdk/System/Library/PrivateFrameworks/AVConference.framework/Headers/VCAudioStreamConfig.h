/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStreamConfig.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VCAudioStreamConfig : VCMediaStreamConfig

{
    unsigned long long _ptime;
    unsigned long long _maxPtime;
    long long _audioStreamMode;
    _Bool _latencySensitiveMode;
    NSMutableDictionary *_codecConfigurations;
    _Bool _redEnabled;
    unsigned char _numRedundantPayloads;
    NSMutableSet *_supportedNumRedundantPayload;
    _Bool _enableMaxBitrateOnNoChangeCMR;
    _Bool _forceEVSWideBand;
    float _volume;
}

@property (nonatomic) long long audioStreamMode;
@property (nonatomic) unsigned long long ptime;
@property (nonatomic) unsigned long long maxPtime;
@property (nonatomic, getter=isLatencySensitiveMode) _Bool latencySensitiveMode;
@property (nonatomic, readonly) NSDictionary *codecConfigurations;
@property (nonatomic, readonly, getter=isRedEnabled) _Bool redEnabled;
@property (nonatomic) unsigned char numRedundantPayloads;
@property (nonatomic, readonly) NSArray *supportedNumRedundantPayload;
@property (nonatomic) _Bool enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) _Bool forceEVSWideBand;
@property (nonatomic) float volume;

- (id)init;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;
- (void)setupRedWithRxPayload:(unsigned int)arg1 txPayload:(unsigned int)arg2;
- (void)addCodecConfiguration:(id)arg1;
- (void)addSupportedNumRedundantPayload:(unsigned int)arg1;
- (_Bool)setupCodecWithClientDictionary:(id)arg1;
- (_Bool)setupCNCodecWithClientDictionary:(id)arg1;
- (_Bool)setupDTMFCodecWithClientDictionary:(id)arg1;

@end
