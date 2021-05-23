/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSDateFormatter, NSLocale, NSString, PHImageRequestOptions, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUVideoListItemView : UIView

{
    UIImageView *_videoThumbnailView;
    NSLocale *_locale;
    NSDateFormatter *_dateFormatter;
    _Bool _needsUpdateConstraints;
    _Bool _isPerformingUpdates;
    PHImageRequestOptions *__imageRequestOptions;
    UIImage *_videoThumbnail;
    NSString *_title;
    NSString *_subtitle;
    NSString *_sizeInGB;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_sizeLabel;
    NSArray *_constraints;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) UIImage *videoThumbnail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *sizeInGB;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;
@property (nonatomic, readonly) PHImageRequestOptions *_imageRequestOptions;
@property (nonatomic, readonly) UIImageView *videoThumbnailView;

- (id)_dateFormatter;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)_currentLocale;
- (void)_invalidateConstraints;
- (void)_updateConstraintsIfNeeded;
- (void)updateItemViewWithAsset:(id)arg1;
- (_Bool)isSubtitleDisplayable;
- (id)_titleFromDate:(id)arg1;
- (id)_subtitleForAsset:(id)arg1;
- (id)_createTextLabel;

@end
