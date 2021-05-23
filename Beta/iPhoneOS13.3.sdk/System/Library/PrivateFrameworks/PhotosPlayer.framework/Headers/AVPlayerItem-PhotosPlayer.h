/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <AVFoundation/AVPlayerItem.h>

@interface AVPlayerItem (PhotosPlayer)

@property (nonatomic, readonly, getter=is_isHighFramerate) _Bool is_highFramerate;

- (void)is_enableColorMatching;

@end
