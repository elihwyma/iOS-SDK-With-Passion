/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBLockScreenPlugin;

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController

{
    SBLockScreenPlugin *_plugin;
}

+ (_Bool)_pluginNeedsOverlay:(id)arg1;

- (void)loadView;
- (id)initWithPlugin:(id)arg1;
- (id)_newOverlayView;

@end
