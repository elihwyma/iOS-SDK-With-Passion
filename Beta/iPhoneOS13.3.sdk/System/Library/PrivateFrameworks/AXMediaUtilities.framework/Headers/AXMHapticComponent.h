/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMOutputComponent.h>

@class CHHapticEngine, NSObject;

@protocol CHHapticPatternPlayer, OS_dispatch_queue;

@interface AXMHapticComponent : AXMOutputComponent

{
    NSObject<OS_dispatch_queue> *_queue;
    CHHapticEngine *_engine;
    id <CHHapticPatternPlayer> _player;
    _Bool _supportsHaptics;
    _Bool _supportsAudio;
    _Bool _autoShutdownEnabled;
    id <CHHapticPatternPlayer> __levelPlayer;
}

@property (retain, nonatomic) id <CHHapticPatternPlayer> _levelPlayer;
@property (nonatomic, getter=isAutoShutdownEnabled) _Bool autoShutdownEnabled;

+ (_Bool)isSupported;

- (id)init;
- (_Bool)canHandleRequest:(id)arg1;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopCurrentHaptics;

@end
