/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <SFSafariViewController.h>

@class ADHomeButtonHandler;

@protocol ADWebViewActionViewControllerDelegate;

@interface ADWebViewActionViewController : SFSafariViewController

{
    ADHomeButtonHandler *_homeButtonHandler;
    id _notificationObserver;
}

@property (retain, nonatomic) ADHomeButtonHandler *homeButtonHandler;
@property (retain, nonatomic) id notificationObserver;
@property (nonatomic) id <ADWebViewActionViewControllerDelegate> delegate;

- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dismissView;
- (void)dismissViewForHomeButton;

@end
