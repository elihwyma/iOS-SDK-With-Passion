/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HUGridLayoutOptions, NSArray, UIImageView, UILabel, UIScrollView, UIView;

@protocol HUAboutResidentDeviceViewControllerDelegate;

@interface HUAboutResidentDeviceViewController : UIViewController

{
    id <HUAboutResidentDeviceViewControllerDelegate> _delegate;
    unsigned long long _style;
    HUGridLayoutOptions *_layoutOptions;
    NSArray *_constraints;
    UIView *_statusBarBackgroundView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_atvImageView;
    UIImageView *_homePodImageView;
    UILabel *_homeHubTextLabel;
    UIImageView *_iPadImageView;
    UILabel *_iPadTextLabel;
}

@property (nonatomic, readonly) unsigned long long style;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIView *statusBarBackgroundView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *atvImageView;
@property (retain, nonatomic) UIImageView *homePodImageView;
@property (retain, nonatomic) UILabel *homeHubTextLabel;
@property (retain, nonatomic) UIImageView *iPadImageView;
@property (retain, nonatomic) UILabel *iPadTextLabel;
@property (weak, nonatomic) id <HUAboutResidentDeviceViewControllerDelegate> delegate;

+ (double)subtitleBaselineToATVImageConstant;
+ (double)scrollViewTopToATVImageConstant;
+ (double)atvImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1;
+ (double)atvTextBaselineToiPadImageConstant;
+ (double)iPadImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1;

- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_backgroundColor;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateViews;
- (void)_createSubviews;
- (void)_done:(id)arg1;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize)arg1;
- (void)_setNavigationBarVisibility;
- (void)updateViewsAndConstraints;

@end
