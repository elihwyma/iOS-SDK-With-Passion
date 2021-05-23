/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, NSArray, NSData, NSString;

@interface AVAudioConverter : NSObject

{
    void *_impl;
}

@property (nonatomic) long long bitRate;
@property (retain, nonatomic) NSString *bitRateStrategy;
@property (nonatomic, readonly) long long maximumOutputPacketSize;
@property (nonatomic, readonly) NSArray *availableEncodeBitRates;
@property (nonatomic, readonly) NSArray *applicableEncodeBitRates;
@property (nonatomic, readonly) NSArray *availableEncodeSampleRates;
@property (nonatomic, readonly) NSArray *applicableEncodeSampleRates;
@property (nonatomic, readonly) NSArray *availableEncodeChannelLayoutTags;
@property (nonatomic, readonly) AVAudioFormat *inputFormat;
@property (nonatomic, readonly) AVAudioFormat *outputFormat;
@property (retain, nonatomic) NSArray *channelMap;
@property (retain, nonatomic) NSData *magicCookie;
@property (nonatomic) _Bool downmix;
@property (nonatomic) _Bool dither;
@property (nonatomic) long long sampleRateConverterQuality;
@property (retain, nonatomic) NSString *sampleRateConverterAlgorithm;
@property (nonatomic) long long primeMethod;
@property (nonatomic) struct AVAudioConverterPrimeInfo primeInfo;

- (void)dealloc;
- (void)reset;
- (id)initFromFormat:(id)arg1 toFormat:(id)arg2;
- (_Bool)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id *)arg3;
- (long long)convertToBuffer:(id)arg1 error:(id *)arg2 withInputFromBlock:(CDUnknownBlockType)arg3;

@end
