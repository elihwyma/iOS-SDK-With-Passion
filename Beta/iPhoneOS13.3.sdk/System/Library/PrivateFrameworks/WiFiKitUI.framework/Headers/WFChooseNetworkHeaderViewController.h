/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface WFChooseNetworkHeaderViewController : UIViewController

{
    _Bool _animating;
    NSString *_title;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool animating;
@property (weak, nonatomic) UILabel *label;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
