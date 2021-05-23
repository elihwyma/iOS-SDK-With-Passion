/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class SKUIStarRatingControl;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingControlViewController : UIViewController

{
    SKUIStarRatingControl *_ratingControl;
}

@property (retain, nonatomic) SKUIStarRatingControl *ratingControl;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)_repeatedTemplateImageForImage:(id)arg1;

@end
