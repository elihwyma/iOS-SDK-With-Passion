/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent

{
    AVAudioEngine *_engine;
    AVAudioPlayerNode *_oneShotSoundPlayer;
    NSMutableArray *_activeSounds;
    id _configChangedObserverToken;
}

@property (retain, nonatomic) id configChangedObserverToken;

+ (_Bool)isSupported;

- (id)init;
- (void)dealloc;
- (_Bool)canHandleRequest:(id)arg1;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_startEngineIfNeeded:(id *)arg1;
- (void)_scheduleOneShotSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_scheduleActiveSound:(id)arg1;
- (void)_stopActiveSound:(id)arg1;
- (void)_logAudioFileInfo:(id)arg1;

@end
