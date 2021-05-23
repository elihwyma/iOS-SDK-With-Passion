/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@protocol VCHardwareSettingsEmbeddedProtocol

@property (nonatomic, readonly) _Bool supportHEVC;
@property (nonatomic, readonly) _Bool vcpSupportsHEVCEncoder;
@property (nonatomic, readonly) int screenWidth;
@property (nonatomic, readonly) int screenHeight;
@property (nonatomic, readonly) long long deviceClass;
@property (nonatomic, readonly) long long chipId;
@property (nonatomic, readonly) long long videoEncoderType;
@property (nonatomic, readonly) _Bool useSoftFramerateSwitching;
@property (nonatomic, readonly) unsigned int maxActiveVideoEncoders;
@property (nonatomic, readonly) unsigned int maxActiveVideoDecoders;
@property (nonatomic, readonly) _Bool isDeviceLargeScreen;
@property (nonatomic, readonly) _Bool hasAppleNeuralEngine;
@property (nonatomic, readonly) _Bool supportsHEIFEncoding;
@property (nonatomic, readonly) _Bool isSecondDisplaySupportEnabled;

@end
