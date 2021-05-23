/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class SBLockScreenPlugin, SBLockScreenPluginOverlayViewController, SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController

{
    SBLockScreenPlugin *_plugin;
    SBLockScreenPluginOverlayViewController *_overlayController;
    SBLoginAppContainerOverlayWrapperView *_overlayWrapperView;
    SBLoginAppContainerPluginWrapperView *_containerView;
}

@property (retain, nonatomic, readonly) SBLockScreenPlugin *plugin;

- (void)loadView;
- (id)initWithPlugin:(id)arg1;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleVolumeDownButtonPress;

@end
