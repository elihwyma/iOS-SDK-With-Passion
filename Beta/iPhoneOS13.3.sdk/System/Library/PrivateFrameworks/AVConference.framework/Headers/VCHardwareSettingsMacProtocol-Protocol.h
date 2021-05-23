/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSString;

@protocol VCHardwareSettingsMacProtocol

@property (nonatomic, readonly) _Bool supportHEVC;
@property (nonatomic, readonly) _Bool vcpSupportsHEVCEncoder;
@property (nonatomic, readonly) NSString *machineName;
@property (nonatomic, readonly) int hardwareScore;
@property (nonatomic, readonly) _Bool canDoHiDefEncoding;
@property (nonatomic, readonly) _Bool canDoHiDefDecoding;
@property (nonatomic, readonly) _Bool canDoHEVC;
@property (nonatomic, readonly) _Bool isMacBookWVGA;
@property (nonatomic, readonly) _Bool isMacPro;
@property (nonatomic, readonly) _Bool isIMac;
@property (nonatomic, readonly) _Bool useSoftFramerateSwitching;
@property (nonatomic, readonly) unsigned int hwEncoderExitBitrate;
@property (nonatomic, readonly) unsigned int hwEncoderEnterBitrate;
@property (nonatomic, readonly) unsigned int maxActiveVideoEncoders;
@property (nonatomic, readonly) unsigned int maxActiveVideoDecoders;
@property (nonatomic, readonly) _Bool isDeviceLargeScreen;
@property (nonatomic, readonly) _Bool supportsHEIFEncoding;

@end
