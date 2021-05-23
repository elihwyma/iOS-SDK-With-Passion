/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCSessionMediaStreamConfigurationProvider : NSObject

{
    NSMutableArray *_allocatedStreamIDs;
    NSMutableArray *_audioStreamConfigurations;
    NSMutableArray *_videoStreamConfigurations;
    long long _highestEncodingResolution;
    _Bool _isEncodingSqaures;
}

@property (nonatomic, readonly) NSArray *audioStreamConfigurations;
@property (nonatomic, readonly) NSArray *videoStreamConfigurations;
@property (nonatomic, readonly) long long highestEncodingResolution;
@property (nonatomic, readonly) _Bool isEncodingSqaures;

+ (void)computeMaxNetworkBitrate:(unsigned int *)arg1 maxMediaBitrate:(unsigned int *)arg2 maxPacketsPerSecond:(float *)arg3 audioStreamIndex:(unsigned int)arg4;

- (id)init;
- (void)dealloc;
- (unsigned short)generateStreamID;
- (_Bool)initializeStreams;
- (_Bool)initializeAudioStreams;
- (_Bool)initializeVideoStreams;
- (_Bool)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1 streamIndex:(unsigned int)arg2;
- (_Bool)initializeVideoStreamWithDefaults;
- (int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1;
- (_Bool)initializeAudioStreamWithIndex:(unsigned int)arg1 supportedAudioRules:(id)arg2;
- (id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg1 supportedAudioRules:(id)arg2;

@end
