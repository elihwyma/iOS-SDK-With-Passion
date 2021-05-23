/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingControl : UIControl

{
    long long _previousUserRating;
    UIImageView *_emptyStarsImageView;
    UIImageView *_filledStarsImageView;
    long long _userRating;
    float _starSpacing;
    float _starWidth;
}

@property (retain, nonatomic) UIImage *emptyStarsImage;
@property (retain, nonatomic) UIImage *filledStarsImage;
@property (nonatomic) long long userRating;
@property (nonatomic) float starSpacing;
@property (nonatomic) float starWidth;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_isRTL;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_updateUserRatingWithTouch:(id)arg1;
- (double)_unfilledStarsMinX;
- (unsigned long long)_ratingForUIDirection:(unsigned long long)arg1;
- (double)_unfilledStarsWidth;
- (unsigned long long)_firstStar;
- (unsigned long long)_lastStar;

@end
