/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera

{
    unsigned int _encodeScore;
    unsigned int _decodeScore;
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (_Bool)useSoftFramerateSwitching;
- (id)initWithHardwareSettings:(id)arg1;
- (void)initSupportedPayloads;
- (_Bool)setupRules;
- (_Bool)setupH264Rules;
- (_Bool)setupHEVCRules;
- (void)computeEncodingScore;
- (void)computeDecodingScore;
- (_Bool)setupH264WifiRules;
- (void)resetEncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2;

@end
