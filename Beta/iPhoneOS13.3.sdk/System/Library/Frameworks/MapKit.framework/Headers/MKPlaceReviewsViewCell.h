/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class MKPlaceReviewAvatarGenerator, NSDate, NSLayoutConstraint, NSString, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView

{
    UIImageView *_pictureView;
    _MKUILabel *_detailLabel;
    _MKUILabel *_reviewLabel;
    NSLayoutConstraint *_reviewLabelTopConstraint;
    NSLayoutConstraint *_reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
    _Bool _isLastReview;
    MKPlaceReviewAvatarGenerator *_avatarGenerator;
    unsigned long long _rating;
    NSString *_author;
    NSDate *_date;
}

@property (nonatomic) unsigned long long rating;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) _Bool isLastReview;
@property (retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_contentSizeDidChange;
- (void)setReview:(id)arg1;
- (void)setReviewText:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)_updatePictureTheme:(id)arg1;
- (void)_updateBaselineConstraints;
- (id)detailLabelText;
- (void)infoCardThemeChanged;
- (unsigned long long)maxCharacters;

@end
