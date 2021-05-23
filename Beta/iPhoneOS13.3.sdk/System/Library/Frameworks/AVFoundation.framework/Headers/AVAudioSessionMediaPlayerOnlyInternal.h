/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSDictionary, NSString;

@protocol AVAudioSessionDelegateMediaPlayerOnly;

__attribute__((visibility("hidden")))
@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject

{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *figPlayer;
    _Bool isAppAudioSession;
    _Bool isActive;
    NSString *category;
    NSString *mode;
    NSDictionary *activationContext;
    _Bool usingLongFormAudio;
    id <AVAudioSessionDelegateMediaPlayerOnly> delegate;
}

@end
