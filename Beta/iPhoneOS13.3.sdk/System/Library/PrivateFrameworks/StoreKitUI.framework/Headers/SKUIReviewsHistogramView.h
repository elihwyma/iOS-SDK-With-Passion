/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, NSString, SKUIClientContext, SKUIColorScheme, SKUIStarRatingControl, UIButton, UIControl, UIImageView, UILabel, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface SKUIReviewsHistogramView : UIView

{
    UIButton *_appSupportButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    UILabel *_countLabel;
    long long _numberOfUserRatings;
    NSMutableDictionary *_ratings;
    UISegmentedControl *_segmentedControl;
    SKUIStarRatingControl *_starRatingControl;
    UILabel *_starRatingControlLabel;
    UILabel *_titleLabel;
    double _userRating;
    UIImageView *_userRatingStarsView;
    NSString *_versionString;
    UIButton *_writeAReviewButton;
    UIView *_bottomSeparatorView;
    UIImageView *_histogramImageView;
    NSArray *_histogramValues;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) double userRating;
@property (copy, nonatomic) NSString *versionString;
@property (retain, nonatomic) NSArray *histogramValues;
@property (nonatomic, readonly) UIControl *segmentedControl;
@property (copy, nonatomic) NSArray *segmentedControlTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, readonly) UIControl *starRatingControl;
@property (nonatomic) long long personalStarRating;
@property (nonatomic, readonly) UIControl *appSupportButton;
@property (nonatomic, readonly) UIControl *writeAReviewButton;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithClientContext:(id)arg1;
- (id)_histogramImageForValues:(id)arg1;
- (id)_countLabelString;

@end
