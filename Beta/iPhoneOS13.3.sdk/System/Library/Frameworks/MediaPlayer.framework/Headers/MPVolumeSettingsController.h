/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class NSString, UIAlertController, UIWindow;

@interface MPVolumeSettingsController : UIViewController

{
    NSString *_audioCategory;
    UIAlertController *_alertController;
    UIWindow *_hostingWindow;
    UIWindow *_previousWindow;
}

@property (weak, nonatomic) UIWindow *hostingWindow;
@property (weak, nonatomic) UIWindow *previousWindow;

- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithAudioCategory:(id)arg1;
- (void)presentAlertControllerInWindow:(id)arg1;
- (void)dismissAlertController;
- (void)_keyWindowDidChange:(id)arg1;
- (void)_flip;

@end
