/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVCVideoStreamConfig : NSObject

{
    long long _txCodecType;
    long long _rxCodecType;
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _rxMaxBitrate;
    unsigned long long _rxMinBitrate;
    NSString *_txCodecFeatureListString;
    NSString *_rxCodecFeatureListString;
    unsigned long long _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    _Bool _enableCVO;
    unsigned long long _cvoExtensionID;
    _Bool _isVideoProtected;
    long long _videoStreamMode;
    long long _captureSource;
    unsigned long long _screenDisplayID;
    unsigned long long _customWidth;
    unsigned long long _customHeight;
    unsigned long long _tilesPerFrame;
}

@property (nonatomic) long long txCodecType;
@property (nonatomic) long long rxCodecType;
@property (nonatomic) long long videoResolution;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) unsigned long long rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate;
@property (retain, nonatomic) NSString *rxCodecFeatureListString;
@property (retain, nonatomic) NSString *txCodecFeatureListString;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) int remoteVideoInitialOrientation;
@property (nonatomic) _Bool enableCVO;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) _Bool isVideoProtected;
@property (nonatomic) long long videoStreamMode;
@property (nonatomic) long long captureSource;
@property (nonatomic) unsigned long long screenDisplayID;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) unsigned long long tilesPerFrame;

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
+ (long long)clientVideoResolutionFromResolution:(long long)arg1;
+ (long long)clientVideoStreamModeFromVideoStreamType:(long long)arg1;
+ (long long)clientVideoCaptureSourceFromCaptureSource:(int)arg1;
+ (long long)videoResolutionFromClientResolution:(long long)arg1;
+ (long long)videoStreamTypeFromClientVideoStreamMode:(long long)arg1;
+ (int)videoCaptureSourceFromClientCaptureSource:(long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isValid;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;

@end
