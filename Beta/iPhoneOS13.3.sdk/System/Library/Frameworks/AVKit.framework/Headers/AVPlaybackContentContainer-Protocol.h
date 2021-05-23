/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/Swift-Protocol.h>

@class AVPlaybackContentContainerView, MISSING_TYPE;

@protocol AVPlaybackContentContainer <Swift>

@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) _Bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) struct CGRect videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;

- (MISSING_TYPE *)initWithFrame:activeContentView: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setVideoGravity:removingAllSubayerTransformAnimations: /* Error: Ran out of types for this method. */;

@end
