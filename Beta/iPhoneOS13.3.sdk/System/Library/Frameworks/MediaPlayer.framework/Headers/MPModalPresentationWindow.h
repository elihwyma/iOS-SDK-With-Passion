/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIApplicationRotationFollowingWindow.h>

@interface MPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (id)init;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentationViewController;
- (_Bool)isInternalWindow;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
