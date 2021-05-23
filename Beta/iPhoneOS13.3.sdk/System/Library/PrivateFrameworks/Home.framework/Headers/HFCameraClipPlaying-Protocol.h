/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class AVPlayer, HFCameraClipPosition, HMCameraProfile, NSArray, NSError;

@protocol HFCameraClipPlayerDelegate, HFCameraClipScrubbing;

@protocol HFCameraClipPlaying <Swift>

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSArray *clips;
@property (weak, nonatomic) id <HFCameraClipPlayerDelegate> delegate;
@property (weak, nonatomic) id <HFCameraClipScrubbing> scrubber;
@property (copy, nonatomic) HFCameraClipPosition *currentPosition;
@property (nonatomic, readonly) long long timeControlStatus;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _Bool hasFatalError;
@property (nonatomic, getter=isScrubbing) _Bool scrubbing;

- (unsigned short)pause;
- (unsigned short)play;
- (unsigned short)removeTimeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)addPeriodicTimeObserverForInterval:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)endScrubbingWithOffset: /* Error: Ran out of types for this method. */;

@end
