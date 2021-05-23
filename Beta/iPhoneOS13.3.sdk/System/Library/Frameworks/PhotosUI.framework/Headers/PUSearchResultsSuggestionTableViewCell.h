/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsSuggestionTableViewCell : UITableViewCell

{
    UILabel *_resultTitleLabel;
    UILabel *_resultAuxSubtitleLabel;
}

@property (retain, nonatomic) UILabel *resultTitleLabel;
@property (retain, nonatomic) UILabel *resultAuxSubtitleLabel;

+ (id)_symbolConfigurationForFont:(id)arg1;

- (void)prepareForReuse;
- (struct UIEdgeInsets)edgeInsets;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)shouldUseAccessibilityLayout;
- (_Bool)hasAccessory;
- (void)_setupSubviews;
- (void)_preferredContentSizeChanged:(id)arg1;
- (struct CGSize)imageViewSize;
- (id)_setupResultTitleLabel;
- (id)_setupResultAuxSubtitleLabel;
- (void)setAttributedTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3;
- (void)setAttributedTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3;
- (void)setTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3;

@end
