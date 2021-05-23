/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStreamMultiwayConfig.h>

@class VCAudioRuleCollection;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfigAudio : VCMediaStreamMultiwayConfig

{
    VCAudioRuleCollection *_audioRules;
}

@property (retain, nonatomic) VCAudioRuleCollection *audioRules;

- (void)dealloc;

@end
