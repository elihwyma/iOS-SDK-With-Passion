/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class UIAlertController, UIWindow, UIWindowScene;

@interface MFAlertOverlayController : NSObject

{
    UIWindowScene *_scene;
    UIWindow *_overlayWindow;
}

@property (retain, nonatomic) UIWindow *overlayWindow;
@property (weak, nonatomic, readonly) UIWindowScene *scene;
@property (nonatomic, readonly) _Bool isPresentingAlert;
@property (nonatomic, readonly) UIAlertController *topmostPresentedAlert;

+ (id)log;

- (void)dealloc;
- (id)initWithWindowScene:(id)arg1;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_teardownOverlayWindow;
- (id)_topmostViewController;
- (void)_setupOverlayWindowWithScene:(id)arg1;
- (void)_handlePresentationDismissalNotification:(id)arg1;
- (id)_bottomPresentedAlert;

@end
