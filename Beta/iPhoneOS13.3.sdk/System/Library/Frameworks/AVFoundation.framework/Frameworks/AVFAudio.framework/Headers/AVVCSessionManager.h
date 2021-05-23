/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVVCSessionManager : NSObject

{
    _Bool mShouldDuckOthers;
    _Bool mIsMiniDuckingEnabled;
    _Bool mShouldEnableMiniDucking;
    _Bool mShouldDisableMiniDucking;
    _Bool mSessionNeedsVolumeControl;
    _Bool mSessionNeedsRoutingControl;
    _Bool mSessionOutputIsWirelessSplitter;
    _Bool mIsOtherAudioPlaying;
    _Bool mRouteHasDoAPSupport;
    _Bool mOutputSupportsSWVolume;
    _Bool mDeviceIsIOSAccessory;
    _Bool mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    long long mPreviousActivationMode;
}

- (id)init;
- (int)setupOneTimeSessionSettings;
- (int)setSessionActivationContext:(id)arg1;
- (void)shouldEnableMiniDucking:(_Bool)arg1;
- (_Bool)isMiniDuckingEnabled;
- (void)getHypotheticalRouteAndUpdateStates;
- (int)setSessionCategoryModeOptionsForActivationMode:(long long)arg1;
- (int)setSessionAudioHWControlFlagsForActivationMode:(long long)arg1;
- (int)setSessionSampleRateForActivationMode:(long long)arg1;
- (int)setSessionBufferSizeForRecordingEngine:(struct AVVCRecordingEngine *)arg1;
- (void)changeDuckOthersOption:(_Bool)arg1;
- (_Bool)isSessionOutputInWirelessSplitterMode;
- (unsigned int)getSessionActivationOptions;
- (void)setSessionActivationOptions:(unsigned int)arg1;
- (_Bool)isAirplayOneOfTheOutputRoutes:(id)arg1;

@end
