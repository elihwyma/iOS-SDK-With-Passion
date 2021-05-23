/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary

{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (unsigned int)tilesPerFrame:(int)arg1;
- (id)initWithHardwareSettings:(id)arg1;
- (void)initSupportedPayloads;
- (_Bool)setupRules;
- (_Bool)setupH264Rules;
- (_Bool)setupHEVCRules;

@end
