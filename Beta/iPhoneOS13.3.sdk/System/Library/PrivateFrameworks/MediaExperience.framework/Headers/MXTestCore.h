/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <MediaExperience/MXTestSessionFactory.h>

__attribute__((visibility("hidden")))
@interface MXTestCore : MXTestSessionFactory

{
    unsigned char mIsInterruptionResumable;
    int mInterruptionError;
}

- (int)testSimultaneousPlaybackOfMixableAndNonMixableSessions:(struct opaqueCMSession *)arg1 nonMixableSession:(struct opaqueCMSession *)arg2;
- (int)testIsRecording:(struct opaqueCMSession *)arg1;
- (int)testInterruption:(struct opaqueCMSession *)arg1 andInterruptor:(struct opaqueCMSession *)arg2 interruptionTypeResumable:(unsigned char)arg3;
- (int)testIsActive:(struct opaqueCMSession *)arg1;
- (int)testIsPlaying:(struct opaqueCMSession *)arg1;
- (int)testSimultaneousPlaybackOfMixableSessions:(struct opaqueCMSession *)arg1 otherSession:(struct opaqueCMSession *)arg2;
- (int)testNavigationApp:(struct opaqueCMSession *)arg1;
- (int)testPreIntegrate;
- (int)testCPMS;
- (int)testDucking;
- (int)testPriorityBasedInterruption;
- (int)testNowPlayingApp;
- (int)testSystemSounds;

@end
