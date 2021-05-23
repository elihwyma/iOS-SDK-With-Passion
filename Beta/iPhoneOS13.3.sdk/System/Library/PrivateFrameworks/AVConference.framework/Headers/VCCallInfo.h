/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, SDPMini;

__attribute__((visibility("hidden")))
@interface VCCallInfo : NSObject

{
    unsigned int callID;
    NSString *participantID;
    unsigned int auNumber;
    unsigned int maxBandwidth;
    unsigned int cellBandwidth;
    _Bool videoIsPaused;
    _Bool isPreLionOS;
    _Bool isVideoQualityDegraded;
    double lastGoodVideoQualityTime;
    double lastBadVideoQualityTime;
    double lastVideoQualityDegradedSwitchTime;
    NSString *sdpString;
    SDPMini *sdp;
    _Bool is4x;
    _Bool isIOS;
    _Bool usesInitialFECImplementation;
    _Bool supportsDynamicMaxBitrate;
    _Bool supportsSpecialAACBundle;
    _Bool supportsSKEOptimization;
    unsigned int visibleRectCropping;
    _Bool useNewPLCalc;
    double firstDegradedMeasure;
    double videoDegradedThreshold;
    unsigned char u8Version;
    NSString *_frameworkVersion;
    NSString *_osVersion;
    NSString *_deviceType;
}

@property unsigned int callID;
@property (nonatomic) unsigned int auNumber;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) unsigned int cellBandwidth;
@property (copy, nonatomic) NSString *participantID;
@property (nonatomic, readonly) _Bool isHDVideoSupported;
@property (nonatomic) _Bool isPreLionOS;
@property (nonatomic) _Bool isVideoQualityDegraded;
@property (nonatomic) _Bool videoIsPaused;
@property (retain, nonatomic) NSString *sdpString;
@property (retain, nonatomic) SDPMini *sdp;
@property (nonatomic, readonly) _Bool requiresImplicitFeatureString;
@property (nonatomic, readonly) _Bool isIOS;
@property (nonatomic, readonly) _Bool usesInitialFECImplementation;
@property (nonatomic) _Bool supportsDynamicMaxBitrate;
@property (nonatomic) _Bool supportsSKEOptimization;
@property (nonatomic, readonly) _Bool supportsSpecialAACBundle;
@property (nonatomic) unsigned int visibleRectCropping;
@property (nonatomic, readonly) _Bool useNewPLCalc;
@property (nonatomic) unsigned char u8Version;
@property (readonly) _Bool supportsDynamicContentsRectWithAspectPreservation;
@property (copy, nonatomic) NSString *frameworkVersion;
@property (copy, nonatomic) NSString *OSVersion;
@property (copy, nonatomic) NSString *deviceType;

+ (unsigned char)getVCCurrentVersion;

- (id)init;
- (void)dealloc;
- (void)setUserAgent:(id)arg1;
- (_Bool)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (struct VoiceIOFarEndVersionInfo)audioVersionInfo:(_Bool)arg1;
- (_Bool)supportSDPCompression;

@end
