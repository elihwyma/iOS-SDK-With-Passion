/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnly : NSObject

{
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

@property id <AVAudioSessionDelegateMediaPlayerOnly> delegate;
@property (readonly) NSString *category;
@property (readonly) NSString *mode;
@property (readonly) double preferredHardwareSampleRate;
@property (readonly) double preferredIOBufferDuration;
@property (readonly) _Bool inputIsAvailable;
@property (readonly) double currentHardwareSampleRate;
@property (readonly) long long currentHardwareInputNumberOfChannels;
@property (readonly) long long currentHardwareOutputNumberOfChannels;
@property (readonly) _Bool canEnterPIPMode;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (id)_weakReference;
- (void)_attachToPlayer:(id)arg1;
- (void)_addFPListeners;
- (void)_removeFPListeners;
- (_Bool)setActive:(_Bool)arg1 withFlags:(long long)arg2 error:(id *)arg3;
- (void)setApplicationAudioSession:(_Bool)arg1;
- (_Bool)setActivationContext:(id)arg1 error:(id *)arg2;
- (_Bool)setUsingLongFormAudio:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setPreferredHardwareSampleRate:(double)arg1 error:(id *)arg2;
- (_Bool)isApplicationAudioSession;

@end
