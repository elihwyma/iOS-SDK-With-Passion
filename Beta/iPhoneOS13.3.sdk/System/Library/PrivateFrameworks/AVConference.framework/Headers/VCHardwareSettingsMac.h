/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac

{
    _Bool _hiDefEncoding;
    int _hardwareScore;
    int _numProcessors;
    int _mhrtz;
    int _isG5;
    int _machineType;
    int _cpuFamily;
    NSString *_cpuType;
    NSString *_machineName;
    _Bool _isGVAEncoderAvailableInitialized;
    _Bool _isGVAEncoderAvailable;
}

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

+ (id)sharedInstance;
+ (long long)deviceClass;

- (id)init;
- (void)dealloc;
- (int)_getCPUFamilyType;
- (id)_getCPUTypeStringForMachineType:(int)arg1;
- (_Bool)isGVAEncoderAvailable;
- (_Bool)_isModel:(id)arg1;
- (_Bool)_isMachineNewerThanSandybridge:(int)arg1;

@end
