/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorAudioConfiguration : NSObject

{
    unsigned int _ssrc;
    _Bool _allowAudioSwitching;
    _Bool _allowAudioRecording;
    _Bool _useSBR;
    unsigned int _audioUnitNumber;
    NSMutableSet *_audioPayloads;
    NSMutableSet *_secondaryPayloads;
}

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) _Bool allowAudioSwitching;
@property (nonatomic) _Bool allowAudioRecording;
@property (nonatomic) _Bool useSBR;
@property (nonatomic) unsigned int audioUnitNumber;
@property (nonatomic, readonly) NSSet *audioPayloads;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAllowAudioSwitching:(_Bool)arg1 allowAudioRecording:(_Bool)arg2 useSBR:(_Bool)arg3 ssrc:(unsigned int)arg4 audioUnitNumber:(unsigned int)arg5 audioRuleCollection:(id)arg6;
- (id)initWithAllowAudioSwitching:(_Bool)arg1 allowAudioRecording:(_Bool)arg2 useSBR:(_Bool)arg3 ssrc:(unsigned int)arg4 audioUnitNumber:(unsigned int)arg5;
- (void)addAudioPayload:(int)arg1 isSecondary:(_Bool)arg2;
- (_Bool)isSecondaryPayload:(int)arg1;

@end
