/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class UIView;

@protocol PXTrimToolPlayerObserver;

@protocol PXTrimToolPlayerWrapper <Swift>

@property (weak, nonatomic) id <PXTrimToolPlayerObserver> playerObserver;
@property (nonatomic, readonly) UIView *loupePlayerView;
@property (nonatomic, readonly, getter=isReadyToPlay) _Bool readyToPlay;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (unsigned short)pause;
- (unsigned short)play;
- (unsigned short)seekToTime: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateComposition;
- (unsigned short)seekToTime:untrimmed:exact: /* Error: Ran out of types for this method. */;
- (unsigned short)applyTrimTimeRange: /* Error: Ran out of types for this method. */;
- (unsigned short)requestPlayerItemWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startPeriodicTimeObserver;
- (unsigned short)stopPeriodicTimeObserver;

@end
