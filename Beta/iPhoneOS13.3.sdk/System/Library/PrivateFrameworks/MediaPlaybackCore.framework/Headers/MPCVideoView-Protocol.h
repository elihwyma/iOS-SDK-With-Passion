/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class AVPlayerLayer, NSString;

@protocol MPCVideoView <Swift>

@property (nonatomic, readonly, getter=isReadyForDisplay) _Bool readyForDisplay;
@property (nonatomic, readonly) struct CGSize preferredContentSize;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

@end
