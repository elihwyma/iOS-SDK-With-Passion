/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

#import <Preferences/PSViewController.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _PSSpinnerViewController : PSViewController

{
    UIActivityIndicatorView *_spinner;
}

- (void)loadView;
- (void)updateViewConstraints;

@end
