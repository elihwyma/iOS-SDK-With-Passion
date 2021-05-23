/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class UIViewController;

@interface _MKUIViewControllerRootView : UIView

{
    UIViewController *_viewController;
}

@property (weak, nonatomic) UIViewController *viewController;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithViewController:(id)arg1;

@end
