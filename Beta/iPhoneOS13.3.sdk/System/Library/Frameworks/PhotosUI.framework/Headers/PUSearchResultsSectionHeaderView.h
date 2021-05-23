/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSArray, NSLayoutConstraint, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsSectionHeaderView : UITableViewHeaderFooterView

{
    _Bool _largeTextSizeConstraintsAreActive;
    UILabel *_titleLabel;
    UIButton *_button;
    NSArray *_smallAndMediumTextSizeConstraints;
    NSArray *_largeTextSizeConstraints;
    NSLayoutConstraint *_titleCompactLeadingConstraint;
    NSLayoutConstraint *_titleRegularLeadingConstraint;
    NSLayoutConstraint *_buttonCompactTrailingConstraint;
    NSLayoutConstraint *_buttonRegularTrailingConstraint;
}

@property (retain, nonatomic) NSArray *smallAndMediumTextSizeConstraints;
@property (retain, nonatomic) NSArray *largeTextSizeConstraints;
@property (retain, nonatomic) NSLayoutConstraint *titleCompactLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleRegularLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonCompactTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonRegularTrailingConstraint;
@property (nonatomic) _Bool largeTextSizeConstraintsAreActive;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIButton *button;

+ (id)reuseIdentifier;
+ (double)headerViewHeight;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setupConstraintsForTextSize;
- (void)setupLargeTextConstaints;
- (void)setupSmallAndMediumTextConstraints;

@end
