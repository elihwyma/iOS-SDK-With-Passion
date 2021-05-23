/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoRuleCollectionsMoments.h>

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments

{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (int)getMomentsCapabilities;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;
- (id)initWithHardwareSettings:(id)arg1;

@end
