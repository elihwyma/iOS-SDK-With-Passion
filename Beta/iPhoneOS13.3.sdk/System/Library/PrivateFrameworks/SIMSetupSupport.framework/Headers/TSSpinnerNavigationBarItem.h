/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <UIKitCore/UIBarButtonItem.h>

@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem

{
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain) UIActivityIndicatorView *activityIndicator;

- (id)init;
- (void)startAnimating;
- (void)stopAnimating;

@end
