/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <UIKitCore/UIViewController.h>

@class DOCViewServiceErrorView, NSString;

@protocol DOCViewServiceErrorViewControllerDelegate;

@interface DOCViewServiceErrorViewController : UIViewController

{
    DOCViewServiceErrorView *_errorView;
    id <DOCViewServiceErrorViewControllerDelegate> _delegate;
}

@property (weak) id <DOCViewServiceErrorViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *errorTitle;
@property (retain, nonatomic) NSString *errorSubtitle;

- (void)loadView;
- (void)didTapTryAgainInErrorView:(id)arg1;

@end
