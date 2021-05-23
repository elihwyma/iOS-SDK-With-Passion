/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView;

@protocol VSLoadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSLoadingViewController_iOS : UIViewController

{
    _Bool _cancellationAllowed;
    id <VSLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_loadingIndicator;
}

@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <VSLoadingViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_cancelButtonPressed:(id)arg1;

@end
