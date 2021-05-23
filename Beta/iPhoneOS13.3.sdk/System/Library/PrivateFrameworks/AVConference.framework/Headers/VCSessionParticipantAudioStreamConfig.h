/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCAudioStreamConfig.h>

@class VCAudioRuleCollection;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig

{
    VCAudioRuleCollection *_audioRules;
    VCAudioRuleCollection *_audioRulesNegotiated;
}

@property (retain, nonatomic) VCAudioRuleCollection *audioRules;
@property (retain, nonatomic) VCAudioRuleCollection *audioRulesNegotiated;

- (void)dealloc;

@end
