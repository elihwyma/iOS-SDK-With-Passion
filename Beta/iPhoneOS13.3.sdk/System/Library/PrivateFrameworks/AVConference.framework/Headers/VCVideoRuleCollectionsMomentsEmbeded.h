/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoRuleCollectionsMoments.h>

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments

{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (int)getMomentsCapabilities;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;
- (id)initWithHardwareSettings:(id)arg1;
- (_Bool)isSupportedDeviceClass;
- (_Bool)isSupportedChipID;

@end
