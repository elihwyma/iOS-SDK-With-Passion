/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXVideoVolumeObserving <Swift>

@property (nonatomic, readonly) _Bool muted;
@property (nonatomic, readonly) float volume;
@property (copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock;
@property (copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock;

@end
