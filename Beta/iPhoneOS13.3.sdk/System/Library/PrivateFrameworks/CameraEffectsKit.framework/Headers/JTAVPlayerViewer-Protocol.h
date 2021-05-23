/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/Swift-Protocol.h>

@class AVPlayer, NSString;

@protocol JTAVPlayerViewerDelegate;

@protocol JTAVPlayerViewer <Swift>

@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic, readonly) struct CGSize displaySize;
@property (nonatomic, readonly) struct CGRect videoBounds;
@property (nonatomic, readonly, getter=isReadyForDisplay) _Bool readyForDisplay;
@property (weak, nonatomic) id <JTAVPlayerViewerDelegate> playerViewDelegate;

@end
