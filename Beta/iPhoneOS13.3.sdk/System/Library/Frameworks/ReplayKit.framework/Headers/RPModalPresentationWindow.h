/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIApplicationRotationFollowingWindow.h>

@interface RPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (id)init;
- (void)dealloc;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentationViewController;
- (_Bool)isInternalWindow;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mainWindow;

@end
