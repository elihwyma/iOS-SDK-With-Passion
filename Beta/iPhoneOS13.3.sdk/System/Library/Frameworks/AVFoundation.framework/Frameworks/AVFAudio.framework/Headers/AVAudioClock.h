/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioTime;

__attribute__((visibility("hidden")))
@interface AVAudioClock : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) AVAudioTime *currentTime;

- (id)init;
- (void)dealloc;
- (id)initWithNode:(struct AVAudioNodeImplBase *)arg1;
- (struct AudioTimeStamp)currentAudioTimeStamp;
- (long long)currentIONumberFrames;
- (id)awaitIOCycle:(unsigned int *)arg1;

@end
