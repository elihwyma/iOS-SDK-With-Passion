/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <AVKit/AVPlayerViewController.h>

@class AVPlayer, NSString;

@protocol JTAVPlayerViewerDelegate;

@interface JTAVPlayerViewController : AVPlayerViewController

{
    id <JTAVPlayerViewerDelegate> playerViewDelegate;
}

@property (weak, nonatomic) id <JTAVPlayerViewerDelegate> playerViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic, readonly) struct CGSize displaySize;
@property (nonatomic, readonly) struct CGRect videoBounds;
@property (nonatomic, readonly, getter=isReadyForDisplay) _Bool readyForDisplay;

- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;

@end
