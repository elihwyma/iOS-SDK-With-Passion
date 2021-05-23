/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, VUILabel, VUIRentalExpirationLabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUILibraryLockupViewCell : UICollectionViewCell

{
    _Bool _hideTitleLabel;
    _TVImageView *_imageView;
    double _imageAspectRatio;
    VUILabel *_titleLabel;
    VUIRentalExpirationLabel *_expirationLabel;
}

@property (retain, nonatomic) _TVImageView *imageView;
@property (nonatomic) double imageAspectRatio;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUIRentalExpirationLabel *expirationLabel;
@property (nonatomic) _Bool hideTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 forMetrics:(_Bool)arg4;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;

@end
