/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SDPMini : NSObject

{
    NSString *_sdpUsername;
    NSMutableDictionary *_audioParameters;
    NSString *origin;
    NSMutableArray *audioPayloads;
    NSMutableArray *secondaryAudioPayloads;
    NSString *sessionIP;
    NSNumber *audioRTPPort;
    NSNumber *audioRTCPPort;
    NSNumber *audioRTPID;
    NSNumber *videoRTPID;
    _Bool allowRTCPFB;
    NSNumber *answerBandwidth;
    NSNumber *maxBandwidth;
    _Bool allowsDynamicMaxBitrate;
    _Bool allowsContentsChangeWithAspectPreservation;
    NSDictionary *featuresListDict;
    NSNumber *aacBlockSize;
    NSNumber *audioUnitModel;
    _Bool allowAudioRecording;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    NSMutableDictionary *_mediaLines;
}

@property (retain, nonatomic) NSString *origin;
@property (nonatomic, readonly) NSMutableArray *audioPayloads;
@property (nonatomic, readonly) NSMutableArray *secondaryAudioPayloads;
@property (retain, nonatomic) NSString *sessionIP;
@property (retain, nonatomic) NSNumber *audioRTPPort;
@property (retain, nonatomic) NSNumber *audioRTCPPort;
@property (retain, nonatomic) NSNumber *audioRTPID;
@property (nonatomic) _Bool allowRTCPFB;
@property (retain, nonatomic) NSNumber *answerBandwidth;
@property (retain, nonatomic) NSNumber *maxBandwidth;
@property (nonatomic) _Bool allowsDynamicMaxBitrate;
@property (retain, nonatomic) NSDictionary *featuresListDict;
@property (nonatomic) _Bool allowsContentsChangeWithAspectPreservation;
@property (retain, nonatomic) NSNumber *aacBlockSize;
@property (retain, nonatomic) NSNumber *audioUnitModel;
@property (nonatomic) _Bool allowAudioRecording;

+ (_Bool)setPayload:(int)arg1 mediaLine:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)SDPUsername;
- (void)addMediaLine:(id)arg1 mediaType:(int)arg2;
- (void)parseSDPFromString:(id)arg1;
- (id)getMediaLineForType:(int)arg1;
- (id)composeSessionString;
- (id)composeAudioString;
- (id)mediaTypeToString:(int)arg1;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;
- (_Bool)setVideoPayloads:(int *)arg1 count:(int)arg2;
- (id)toStringWithVideoEnabled:(_Bool)arg1;
- (void)setBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (_Bool)getBasebandCodecType:(id *)arg1 sampleRate:(id *)arg2;
- (void)getNegotiatedResolutionForPayload:(int)arg1 forInterface:(int)arg2 withRule:(id)arg3 direction:(int)arg4 result:(struct imageTag *)arg5 remoteSupportsHD:(_Bool)arg6 screenSharing:(_Bool)arg7;
- (id)composeBandwidthString;
- (id)composeFLSString;
- (id)composeAudioFMTPForPayload:(id)arg1;
- (void)parseAudioMediaAttributes:(id)arg1;
- (id)parseIP:(id)arg1;
- (void)parseBandwidth:(id)arg1;
- (void)parseMediaLine:(id)arg1;
- (void)parseSessionAttributes:(id)arg1;
- (id)parseRTPID:(id)arg1;
- (id)parseRTCPPort:(id)arg1;
- (void)parseAudioFormatAttribute:(id)arg1;
- (int)rulesFramerate:(int)arg1;
- (void)rulesImageSizeForExternalPayload:(int)arg1 pWidth:(int *)arg2 pHeight:(int *)arg3;
- (void)setUseSbr:(_Bool)arg1 blockSize:(int)arg2 forAACFormat:(int)arg3;
- (_Bool)getUseSbr:(_Bool *)arg1 blockSize:(int *)arg2 forAACFormat:(int)arg3;
- (void)setVideoRTCPFB:(_Bool)arg1 useNACK:(_Bool)arg2;

@end
