/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, SKUIReviewList, SKUIReviewsHistogramView, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIReviewsHistogramViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    SKUIReviewsHistogramView *_histogramView;
    SKUIReviewList *_reviewList;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIReviewList *reviewList;
@property (copy, nonatomic) NSString *versionString;
@property (nonatomic, readonly) UIControl *segmentedControl;
@property (copy, nonatomic) NSArray *segmentedControlTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, readonly) UIControl *starRatingControl;
@property (nonatomic) long long personalStarRating;
@property (nonatomic, readonly) UIControl *appSupportButton;
@property (nonatomic, readonly) UIControl *writeAReviewButton;

- (void)loadView;
- (id)_histogramView;
- (void)_reloadHistogram;

@end
