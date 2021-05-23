/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <AVFoundation/AVPlayerItem.h>

@class AVPlayerItemTrack;

@interface AVPlayerItem (TLExtensions)

@property (nonatomic, readonly) AVPlayerItemTrack *tl_hapticPlayerItemTrack;

@end
