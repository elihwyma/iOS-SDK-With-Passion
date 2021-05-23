/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface PXPeopleProgressFooterView : UIView

{
    _Bool _usesEmphasizedTitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) _Bool usesEmphasizedTitle;

- (id)initWithFrame:(struct CGRect)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)_setupViews;
- (void)_setupConstraints;

@end
