/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStreamConfig.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig : VCMediaStreamConfig

{
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _rxMaxBitrate;
    unsigned long long _rxMinBitrate;
    unsigned long long _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    _Bool _enableCVO;
    unsigned long long _cvoExtensionID;
    _Bool _isVideoProtected;
    long long _type;
    unsigned long long _sourceFramerate;
    int _encodingMode;
    _Atomic unsigned char *_videoPriorityPointer;
    int _captureSource;
    unsigned int _screenDisplayID;
    unsigned long long _customWidth;
    unsigned long long _customHeight;
    NSString *_rxCodecFeatureListString;
    NSString *_txCodecFeatureListString;
    unsigned long long _tilesPerFrame;
}

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
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long sourceFramerate;
@property (nonatomic) int encodingMode;
@property (nonatomic) _Atomic unsigned char *videoPriorityPointer;
@property (nonatomic) int captureSource;
@property (nonatomic) unsigned int screenDisplayID;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) unsigned long long tilesPerFrame;

+ (_Bool)validateClientDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;
- (_Bool)updateWithClientDictionary:(id)arg1;
- (_Bool)applyVideoStreamClientDictionary:(id)arg1;

@end
