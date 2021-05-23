/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreen

{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)arg1;
- (void)initSupportedPayloads;
- (_Bool)setupH264Rules;
- (_Bool)setupMacDecodingOnlyRules;
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;
- (id)initForMacDecodingOnly;

@end
