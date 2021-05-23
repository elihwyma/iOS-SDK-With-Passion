/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUGradientButton.h>

@class NSString, UIImageView;

@interface SUReviewsButton : SUGradientButton

{
    UIImageView *_disclosureView;
    float _userRating;
    long long _userRatingCount;
    NSString *_userRatingCountString;
}

@property (nonatomic) float userRating;
@property (nonatomic) long long userRatingCount;
@property (retain, nonatomic) NSString *userRatingCountString;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)reloadView;

@end
