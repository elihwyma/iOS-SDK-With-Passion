/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoVolumeObserving <Swift>

@property (nonatomic, readonly) _Bool muted;
@property (nonatomic, readonly) float volume;
@property (copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock;
@property (copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock;

@end
