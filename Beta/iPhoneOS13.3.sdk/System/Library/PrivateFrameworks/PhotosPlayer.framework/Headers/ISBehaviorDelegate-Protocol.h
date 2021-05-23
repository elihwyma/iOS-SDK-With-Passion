/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/Swift-Protocol.h>

@protocol ISBehaviorDelegate <Swift>

- (unsigned short)behaviorIsVideoReadyForDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:didSetOutputInfo:withTransitionOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:setVideoPlayRate: /* Error: Ran out of types for this method. */;
- (unsigned short)videoPlayRate;
- (unsigned short)behavior:seekVideoPlayerToTime:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:seekVideoPlayerToTime:toleranceBefore:toleranceAfter:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:prerollVideoAtRate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:setVideoForwardPlaybackEndTime: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:setVideoVolume: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:addBoundaryTimeObserverForTimes:queue:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:removeTimeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)behavior:playVideoToTime:initialRate:overDuration:progressHandler: /* Error: Ran out of types for this method. */;

@end
