/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, AVAudioSession, NSArray, NSData, NSDictionary, NSURL;

@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AudioPlayerImpl : NSObject

{
    id <AVAudioPlayerDelegate> _delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    AVAudioFormat *_format;
    _Bool _playRetain;
    NSArray *_channelAssignments;
    AVAudioSession *_audioSession;
    _Bool _sessionListenerWasSet;
    unsigned long long _endInterruptionFlags;
    struct AVAudioPlayerCpp *_localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}

- (id)init;
- (void)dealloc;

@end
