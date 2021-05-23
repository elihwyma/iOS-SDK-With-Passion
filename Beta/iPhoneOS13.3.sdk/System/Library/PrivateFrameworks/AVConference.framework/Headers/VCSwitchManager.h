/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSwitchManager : NSObject

{
    unsigned int _localSwitches;
    unsigned int _remoteSwitches;
    unsigned int _negotiatedSwitches;
}

@property unsigned int localSwitches;
@property unsigned int remoteSwitches;
@property unsigned int negotiatedSwitches;

- (id)description;
- (void)initializeLocalSwitches;
- (_Bool)isLocalSwitchEnabled:(unsigned int)arg1;
- (void)negotiateSwitches;
- (_Bool)isSwitchEnabled:(unsigned int)arg1;
- (void)setupLocalSwitchesIndividually;
- (void)updateDuplicationEnhancementSwitches;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalVideoTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalABTestSwitches;

@end
