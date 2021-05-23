/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface AVCAudioPowerSpectrum : NSObject

{
    float _minFrequency;
    float _maxFrequency;
    NSMutableArray *_channels;
    long long _sourceType;
}

@property (nonatomic, readonly) NSArray *channels;
@property (nonatomic, readonly) float minFrequency;
@property (nonatomic, readonly) float maxFrequency;
@property (nonatomic, readonly) long long sourceType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)checkNumChannels:(unsigned short)arg1;
- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry *)arg1 binCount:(unsigned int)arg2 channelID:(unsigned short)arg3;

@end
