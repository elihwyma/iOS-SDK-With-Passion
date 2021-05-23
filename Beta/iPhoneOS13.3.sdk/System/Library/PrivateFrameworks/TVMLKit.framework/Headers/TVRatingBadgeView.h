/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class TVRatingBadgeLayout;

@interface TVRatingBadgeView : UIView

{
    TVRatingBadgeLayout *_ratingBadgeLayout;
    double _ratingValue;
}

@property (retain, nonatomic) TVRatingBadgeLayout *ratingBadgeLayout;
@property (nonatomic) double ratingValue;

+ (id)ratingBadgeViewWithValue:(double)arg1 layout:(id)arg2 existingBadgeView:(id)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_tintColor;
- (void)drawRect:(struct CGRect)arg1;
- (double)_interitemSpacing;
- (id)_halfStarImage;
- (double)_circleRadius;
- (id)_starImage;
- (id)_ratingStyle;
- (struct CGSize)_starSize;
- (double)_starHeight;

@end
