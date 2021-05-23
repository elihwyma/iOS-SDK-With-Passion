/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoPlaybackPolicy;

@protocol SVVideoPlaybackPolicyObserving <Swift>

@property (copy, nonatomic, setter=onRequestStateChange:) CDUnknownBlockType requestStateChangeBlock;
@property (copy, nonatomic, setter=onAllowedStateChange:) CDUnknownBlockType allowedStateChangeBlock;
@property (nonatomic, readonly) id <SVVideoPlaybackPolicy> policy;

@end
