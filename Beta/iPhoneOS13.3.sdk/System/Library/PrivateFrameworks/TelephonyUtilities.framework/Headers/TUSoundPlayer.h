/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class TURepeatingActor;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUSoundPlayer : NSObject

{
    unsigned int _soundID;
    NSObject<OS_dispatch_queue> *_queue;
    TURepeatingActor *_repeatingActor;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) TURepeatingActor *repeatingActor;
@property (nonatomic) unsigned int soundID;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (id)init;
- (void)stopPlaying;
- (void)playSound:(unsigned int)arg1;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)playSoundIndefinitely:(unsigned int)arg1 pauseDurationBetweenIterations:(double)arg2;

@end
