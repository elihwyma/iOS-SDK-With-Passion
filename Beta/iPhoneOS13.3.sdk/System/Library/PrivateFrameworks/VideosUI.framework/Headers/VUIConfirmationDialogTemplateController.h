/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSTimer, VUIConfirmationDialogTemplateView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationDialogTemplateController : UIViewController

{
    _Bool _setTimer;
    NSTimer *_dismissTimer;
}

@property (nonatomic, readonly) NSTimer *dismissTimer;
@property (nonatomic, readonly) VUIConfirmationDialogTemplateView *templateView;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_setupTimer;
- (void)updateWithViewElement:(id)arg1;
- (void)_dismissConfirmation:(id)arg1;

@end
