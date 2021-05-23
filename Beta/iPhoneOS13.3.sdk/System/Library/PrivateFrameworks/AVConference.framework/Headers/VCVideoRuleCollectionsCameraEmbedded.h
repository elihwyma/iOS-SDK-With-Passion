/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera

{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)description;
- (double)preferredAspectRatio;
- (id)initWithHardwareSettings:(id)arg1;
- (void)initSupportedPayloads;
- (_Bool)setupRules;
- (_Bool)setupH264Rules;
- (_Bool)setupHEVCRules;
- (struct _VCBitrateConfiguration *)bitrateConfiguration;
- (struct _VCHardwareConfiguration *)hardwareConfigurationForPayload:(int)arg1 transportType:(unsigned char)arg2;
- (_Bool)setupVideoRulesForPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 formatList:(struct _VCVideoFormat *)arg4 formatListCount:(unsigned int)arg5 preferredFormat:(id)arg6 supportsHighDef:(_Bool *)arg7;
- (_Bool)supportsHEVCWifiDecoding;
- (_Bool)supportsHEVCWifiEncoding;

@end
