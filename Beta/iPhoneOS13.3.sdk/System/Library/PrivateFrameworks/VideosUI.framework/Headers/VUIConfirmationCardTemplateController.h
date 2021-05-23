/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSTimer, VUIConfirmationCardView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationCardTemplateController : UIViewController

{
    _Bool _setTimer;
    IKViewElement *_viewElement;
    NSTimer *_dismissTimer;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic, readonly) NSTimer *dismissTimer;
@property (nonatomic, readonly) VUIConfirmationCardView *cardView;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_setupTimer;
- (void)updateWithViewElement:(id)arg1;
- (void)_dismissConfirmation:(id)arg1;

@end
