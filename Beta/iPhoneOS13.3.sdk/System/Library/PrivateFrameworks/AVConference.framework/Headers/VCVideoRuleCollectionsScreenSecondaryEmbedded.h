/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary

{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (unsigned int)tilesPerFrame:(int)arg1;
- (id)initWithHardwareSettings:(id)arg1;
- (void)initSupportedPayloads;
- (_Bool)setupRules;
- (_Bool)setupH264Rules;
- (_Bool)setupHEVCRules;
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;

@end
