/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsEmbedded

{
    NSString *_deviceName;
    int _screenWidth;
    int _screenHeight;
    int _deviceClass;
    long long _chipId;
    long long _videoEncoderType;
    _Bool _hasBasebandInitialized;
    _Bool _hasBaseband;
    _Bool _hasAppleNeuralEngine;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) _Bool hasBaseband;
@property (nonatomic, readonly) int screenWidth;
@property (nonatomic, readonly) int screenHeight;
@property (nonatomic, readonly) long long deviceClass;
@property (nonatomic, readonly) long long chipId;
@property (nonatomic, readonly) long long videoEncoderType;
@property (nonatomic, readonly) _Bool useSoftFramerateSwitching;
@property (nonatomic, readonly) _Bool hasAppleNeuralEngine;
@property (nonatomic, readonly) unsigned int audioPacketLossConcealmentAlgorithmAACELD;
@property (nonatomic, readonly) _Bool isSecondDisplaySupportEnabled;
@property (nonatomic, readonly) _Bool supportHEVC;
@property (nonatomic, readonly) _Bool vcpSupportsHEVCEncoder;
@property (nonatomic, readonly) unsigned int maxActiveVideoEncoders;
@property (nonatomic, readonly) unsigned int maxActiveVideoDecoders;
@property (nonatomic, readonly) _Bool isDeviceLargeScreen;
@property (nonatomic, readonly) _Bool supportsHEIFEncoding;

+ (id)sharedInstance;
+ (long long)deviceClass;

- (id)init;
- (void)dealloc;
- (void)_initializeScreenDimension;

@end
