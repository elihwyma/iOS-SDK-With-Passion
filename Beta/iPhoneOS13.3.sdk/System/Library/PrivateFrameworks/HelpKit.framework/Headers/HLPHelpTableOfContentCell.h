/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <UIKit/UITableViewCell.h>

@class HLPHelpItem, NSLayoutConstraint, TPSURLSessionItem, UIImageView, UILabel;

@interface HLPHelpTableOfContentCell : UITableViewCell

{
    NSLayoutConstraint *_arrowImageViewLeadingConstraint;
    NSLayoutConstraint *_sectionImageWidthConstraint;
    NSLayoutConstraint *_sectionImageLeadingConstraint;
    NSLayoutConstraint *_labelToArrowViewLeadingConstraint;
    _Bool _showFirstLevelIcon;
    _Bool _ignoreLevels;
    _Bool _closed;
    _Bool _updateSeparatorInsetAutomatically;
    _Bool _RTL;
    HLPHelpItem *_helpItem;
    UIImageView *_arrowImageView;
    UILabel *_nameLabel;
    UIImageView *_sectionImageView;
    TPSURLSessionItem *_sectionImageURLSessionItem;
}

@property (nonatomic) _Bool RTL;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *sectionImageView;
@property (retain, nonatomic) TPSURLSessionItem *sectionImageURLSessionItem;
@property (nonatomic) _Bool showFirstLevelIcon;
@property (nonatomic) _Bool ignoreLevels;
@property (nonatomic) _Bool closed;
@property (nonatomic) _Bool updateSeparatorInsetAutomatically;
@property (retain, nonatomic) HLPHelpItem *helpItem;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)dealloc;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)toggle;
- (void)cancelIconRequest;
- (struct CGAffineTransform)arrowTransform;
- (long long)itemLevel;
- (void)updateToggleImageAnimated:(_Bool)arg1;

@end
