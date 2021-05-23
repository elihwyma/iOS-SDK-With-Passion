/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUReviewScrubberCell : UICollectionViewCell

{
    _Bool _favorite;
    _Bool _suggested;
    _Bool _wantsSmallSuggestionIndicators;
    UIImage *_image;
    UIImageView *__thumbnailImageView;
    UIImageView *__checkmarkImageView;
    UIImageView *__suggestedImageView;
}

@property (nonatomic, readonly) UIImageView *_thumbnailImageView;
@property (nonatomic, readonly) UIImageView *_checkmarkImageView;
@property (nonatomic, readonly) UIImageView *_suggestedImageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic, getter=isSuggested) _Bool suggested;
@property (nonatomic) _Bool wantsSmallSuggestionIndicators;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_commonPUReviewScrubberCellInitialization;
- (void)setFavorite:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSuggested:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateThumbnailImageView;
- (void)_updateFavoriteView;
- (void)_updateSuggestedView;

@end
