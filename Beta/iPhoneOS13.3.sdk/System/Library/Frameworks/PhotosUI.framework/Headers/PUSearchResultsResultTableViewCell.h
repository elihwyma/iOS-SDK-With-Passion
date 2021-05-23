/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsResultTableViewCell : UITableViewCell

{
    unsigned long long _imageCropStyle;
    UIImageView *_resultImageView;
    UILabel *_resultTitleLabel;
    UILabel *_resultSubtitleLabel;
    UILabel *_resultAuxSubtitleLabel;
}

@property (retain, nonatomic) UIImageView *resultImageView;
@property (retain, nonatomic) UILabel *resultTitleLabel;
@property (retain, nonatomic) UILabel *resultSubtitleLabel;
@property (retain, nonatomic) UILabel *resultAuxSubtitleLabel;
@property (nonatomic) unsigned long long imageCropStyle;

- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateCornerRadius;
- (void)_setupSubviews;
- (void)_preferredContentSizeChanged:(id)arg1;
- (id)_setupResultTitleLabel;
- (id)_setupResultAuxSubtitleLabel;
- (void)setAttributedTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3;
- (id)_setupResultSubtitleLabel;
- (id)_setupResultImageView;

@end
