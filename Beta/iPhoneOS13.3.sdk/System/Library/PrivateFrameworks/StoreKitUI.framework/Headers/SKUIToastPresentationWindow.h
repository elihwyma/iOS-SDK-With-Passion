/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIApplicationRotationFollowingWindow.h>

__attribute__((visibility("hidden")))
@interface SKUIToastPresentationWindow : UIApplicationRotationFollowingWindow

- (id)init;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentationViewController;
- (_Bool)isInternalWindow;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
