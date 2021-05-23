/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioChannelLayout, NSData, NSDictionary;

@interface AVAudioFormat : NSObject

{
    struct AudioStreamBasicDescription _asbd;
    AVAudioChannelLayout *_layout;
    unsigned long long _commonFormat;
    void *_reserved;
}

@property (nonatomic, readonly, getter=isStandard) _Bool standard;
@property (nonatomic, readonly) unsigned long long commonFormat;
@property (nonatomic, readonly) unsigned int channelCount;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly, getter=isInterleaved) _Bool interleaved;
@property (nonatomic, readonly) const struct AudioStreamBasicDescription *streamDescription;
@property (nonatomic, readonly) AVAudioChannelLayout *channelLayout;
@property (retain, nonatomic) NSData *magicCookie;
@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription *formatDescription;

+ (_Bool)supportsSecureCoding;
+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription *)arg1 channelLayout:(id)arg2;
+ (id)formatWithInvalidSampleRateAndChannelCount;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription *)arg1;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription *)arg1 channelLayout:(id)arg2;
- (id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned int)arg3 interleaved:(_Bool)arg4;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(_Bool)arg3 channelLayout:(id)arg4;
- (id)initWithCMAudioFormatDescription:(struct opaqueCMFormatDescription *)arg1;

@end
