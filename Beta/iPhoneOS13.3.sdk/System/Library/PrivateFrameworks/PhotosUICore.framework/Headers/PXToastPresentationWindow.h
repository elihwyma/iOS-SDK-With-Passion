/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIApplicationRotationFollowingWindow.h>

@interface PXToastPresentationWindow : UIApplicationRotationFollowingWindow

- (id)init;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentationViewController;
- (_Bool)isInternalWindow;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
