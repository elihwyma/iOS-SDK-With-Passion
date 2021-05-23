/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class UINavigationController, _MPAudioAndSubtitlesController;

@interface MPAudioAndSubtitlesController : UIViewController

{
    _MPAudioAndSubtitlesController *_viewController;
    UINavigationController *_navController;
    UIViewController *_viewControllerForOrientation;
}

@property (weak, nonatomic) UIViewController *viewControllerForOrientation;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithAVItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
