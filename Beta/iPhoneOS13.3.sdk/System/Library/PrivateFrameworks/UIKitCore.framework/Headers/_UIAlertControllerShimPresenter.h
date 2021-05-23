/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertController, UIAlertView, UIPopoverController, UIViewController, _UIAlertControllerShimPresenterWindow;

@protocol UIPopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenter : NSObject

{
    UIPopoverController *_popoverController;
    id <UIPopoverControllerDelegate> _popoverDelegate;
    UIViewController *_inPopoverViewController;
    _UIAlertControllerShimPresenterWindow *_window;
    UIAlertController *_alertController;
    UIAlertView *_legacyAlert;
}

@property (weak, nonatomic) UIAlertController *alertController;
@property (nonatomic) UIAlertView *legacyAlert;
@property (nonatomic, readonly) _UIAlertControllerShimPresenterWindow *window;
@property (weak, nonatomic) id <UIPopoverControllerDelegate> popoverDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_cancelPendingTouchesIfAppropriateForWindow:(id)arg1;
+ (void)_addPresenter:(id)arg1;
+ (_Bool)_shouldPresentActionSheetsFullscreen;
+ (void)_removePresenter:(id)arg1;
+ (id)_currentFullScreenAlertPresenters;

- (void)dealloc;
- (void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentAlertControllerFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_dismissAlertControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createWindowIfNecessaryWithScene:(id)arg1;
- (void)_presentAlertControllerAnimated:(_Bool)arg1 hostingScene:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentAlertControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_popoverController;
- (void)_tearDownInPopoverViewController;

@end
