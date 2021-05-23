/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow

{
    UIAlertController *_alertController;
}

@property (retain, nonatomic, readonly) UIAlertController *alertController;

- (id)init;
- (id)initWithWindowScene:(id)arg1;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_presentationViewController;

@end
