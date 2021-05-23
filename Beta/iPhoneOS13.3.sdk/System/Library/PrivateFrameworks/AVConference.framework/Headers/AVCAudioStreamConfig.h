/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@interface AVCAudioStreamConfig : NSObject

{
    long long _codecType;
    _Bool _cnEnabled;
    unsigned long long _cnPayloadType;
    unsigned long long _dtmfPayloadType;
    unsigned long long _dtmfTimestampRate;
    unsigned long long _ptime;
    unsigned long long _maxPtime;
    unsigned long long _channelAwareOffset;
    long long _audioStreamMode;
    unsigned int _codecRateModeMask;
    long long _preferredCodecRateMode;
    _Bool _octetAligned;
    _Bool _headerFullOnly;
    _Bool _dtxEnabled;
    _Bool _latencySensitiveMode;
    _Bool _enableMaxBitrateOnNoChangeCMR;
    unsigned long long _numRedundantPayloads;
    unsigned long long _txRedPayloadType;
    unsigned long long _rxRedPayloadType;
    float _volume;
}

@property (nonatomic) long long audioStreamMode;
@property (nonatomic) long long codecType;
@property (nonatomic, getter=isCNEnabled) _Bool cnEnabled;
@property (nonatomic) unsigned long long cnPayloadType;
@property (nonatomic) unsigned long long dtmfPayloadType;
@property (nonatomic) unsigned long long dtmfTimestampRate;
@property (nonatomic) unsigned long long ptime;
@property (nonatomic) unsigned long long maxPtime;
@property (nonatomic) float volume;
@property (nonatomic) unsigned long long channelAwareOffset;
@property (nonatomic, getter=isOctectAligned) _Bool octetAligned;
@property (nonatomic, getter=isHeaderFullOnly) _Bool headerFullOnly;
@property (nonatomic, getter=isDTXEnabled) _Bool dtxEnabled;
@property (nonatomic) long long preferredCodecRateMode;
@property (nonatomic) unsigned int codecRateModeMask;
@property (nonatomic, getter=isLatencySensitiveMode) _Bool latencySensitiveMode;
@property (nonatomic) _Bool enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) unsigned long long numRedundantPayloads;
@property (nonatomic) unsigned long long txRedPayloadType;
@property (nonatomic) unsigned long long rxRedPayloadType;

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)clientStreamModeWithStreamMode:(long long)arg1;
+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)arg1;
+ (long long)clientCodecRateModeForCodecRateMode:(int)arg1;
+ (long long)streamModeWithClientStreamMode:(long long)arg1;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)arg1;
+ (int)codecRateModeForClientCodecRateMode:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;

- (id)init;
- (_Bool)isValid;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (_Bool)isDTMFValid;
- (_Bool)isCNValid;
- (_Bool)isRedValid;

@end
