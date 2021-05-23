/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCCapabilities;

__attribute__((visibility("hidden")))
@interface AVConferenceCallState : NSObject

{
    _Bool _audioIsPaused;
    VCCapabilities *_capabilities;
    _Bool _isVideoPaused;
    _Bool _isAudioSending;
}

@property (nonatomic, getter=isAudioPaused) _Bool audioIsPaused;
@property (nonatomic, getter=isVideoPaused) _Bool isVideoPaused;
@property (nonatomic, getter=isAudioSending) _Bool isAudioSending;
@property (retain, nonatomic) VCCapabilities *capabilities;

- (void)dealloc;

@end
