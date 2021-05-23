/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class UIColor;

@interface _TVModalPageBezelViewController : UIViewController

{
    double _bezelCornerRadius;
    UIColor *_bezelBackgroundColor;
    UIViewController *_contentViewController;
    struct CGSize _contentSize;
}

@property (nonatomic) double bezelCornerRadius;
@property (retain, nonatomic) UIColor *bezelBackgroundColor;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) struct CGSize contentSize;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end
