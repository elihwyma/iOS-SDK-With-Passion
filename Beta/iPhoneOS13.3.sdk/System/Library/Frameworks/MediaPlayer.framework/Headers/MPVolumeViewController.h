/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class MPVolumeView;

@interface MPVolumeViewController : UIViewController

{
    MPVolumeView *_volumeView;
}

@property (nonatomic, readonly) MPVolumeView *volumeView;

- (id)init;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;

@end
