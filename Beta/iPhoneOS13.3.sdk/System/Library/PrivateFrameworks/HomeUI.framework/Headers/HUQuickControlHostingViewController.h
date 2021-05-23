/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HUQuickControlViewProfile, NSString, UIView;

@protocol HUQuickControlInteractiveView;

@interface HUQuickControlHostingViewController : UIViewController

{
    HUQuickControlViewProfile *_profile;
    UIViewController *_contraption;
}

@property (nonatomic, readonly) HUQuickControlViewProfile *profile;
@property (nonatomic, readonly) UIViewController *contraption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *view;

- (void)loadView;
- (void)viewDidLoad;
- (id)initWithViewController:(id)arg1 profile:(id)arg2;

@end
