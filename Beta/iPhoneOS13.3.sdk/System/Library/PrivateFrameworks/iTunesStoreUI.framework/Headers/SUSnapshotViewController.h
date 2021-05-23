/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UIImageView;

@interface SUSnapshotViewController : UIViewController

{
    UIViewController *_originalViewController;
    long long _originalOrientation;
    UIActivityIndicatorView *_activityIndicatorView;
    UIImageView *_imageView;
}

@property (nonatomic) long long originalOrientation;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIViewController *originalViewController;

- (id)initWithOriginal:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (long long)_currentOrientation;
- (id)_snapshotOfView:(id)arg1;

@end
