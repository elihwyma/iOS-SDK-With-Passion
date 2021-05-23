/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIBarButtonItem.h>

@class UIActivityIndicatorView;

@interface PSBarButtonSpinnerView : UIBarButtonItem

{
    UIActivityIndicatorView *_spinner;
}

- (id)init;
- (void)startAnimating;
- (void)stopAnimating;

@end
