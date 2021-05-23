/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingButtonViewController : UIViewController

{
    _Bool _enabled;
    NSString *_titleString;
    unsigned long long _style;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2;

@end
