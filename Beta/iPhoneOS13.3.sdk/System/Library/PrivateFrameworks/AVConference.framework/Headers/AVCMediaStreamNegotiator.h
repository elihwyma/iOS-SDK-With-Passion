/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, VCMediaNegotiator;

@interface AVCMediaStreamNegotiator : NSObject

{
    long long _errorDetailCode;
    long long _videoHeight;
    long long _videoWidth;
    long long _dpiFactor;
    unsigned char _deviceRole;
    NSData *_mediaBlobCompressed;
    NSData *_mediaBlobNegotiated;
    NSString *_dataSessionID;
    long long _mediaStreamMode;
    VCMediaNegotiator *_mediaNegotiator;
    NSData *_remoteCallInfoBlob;
    NSData *_offer;
    NSData *_answer;
}

@property (nonatomic, readonly) NSData *offer;
@property (nonatomic, readonly) NSData *answer;

- (void)dealloc;
- (_Bool)createAnswer;
- (id)initWithMode:(long long)arg1 error:(id *)arg2;
- (void)refreshLoggingParameters;
- (int)AVConferenceOperatingModeWithAVCMediaStreamMode:(long long)arg1;
- (long long)AVCVideoStreamModeWithAVCMediaStreamMode:(long long)arg1;
- (long long)clientCodecTypeWithCodecType:(long long)arg1;
- (unsigned char)VCVideoFeatureListStringTypeWithAVCMediaStreamMode:(long long)arg1;
- (_Bool)initNegotiatorLocalConfiguration:(id *)arg1;
- (_Bool)createOffer;
- (_Bool)addLocalCallInfoBlobToOutgoingDictionary:(id)arg1;
- (id)initWithOffer:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)processOfferWithError:(id *)arg1 errorReason:(id *)arg2;
- (_Bool)processInitOptions:(id)arg1 error:(id *)arg2 errorReason:(id *)arg3;
- (_Bool)processAnswerWithError:(id *)arg1 errorReason:(id *)arg2;
- (id)initWithOffer:(id)arg1 error:(id *)arg2;
- (_Bool)setAnswer:(id)arg1 withError:(id *)arg2;
- (id)generateMediaStreamConfigurationWithError:(id *)arg1;
- (id)generateMediaStreamInitOptionsWithError:(id *)arg1;

@end
