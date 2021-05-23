/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideo;

@protocol SVPlaybackTransitionContext <Swift>

@property (nonatomic, readonly) id <SVVideo> fromVideo;
@property (nonatomic, readonly) id <SVVideo> toVideo;

- (unsigned short)completeTransition: /* Error: Ran out of types for this method. */;

@end
