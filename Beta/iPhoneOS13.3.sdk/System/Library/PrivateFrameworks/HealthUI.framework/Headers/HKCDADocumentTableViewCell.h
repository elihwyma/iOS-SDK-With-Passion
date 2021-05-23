/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class HKAdjustableTapTargetButton, NSArray, UILabel, UIStackView, _HKDocumentImageView;

@protocol HKCDADocumentTableViewCellDelegate;

@interface HKCDADocumentTableViewCell : UITableViewCell

{
    _HKDocumentImageView *_documentImageView;
    UILabel *_titleLabel;
    NSArray *_cellLabels;
    UIStackView *_imageLabelStack;
    _Bool _showsCheckbox;
    id <HKCDADocumentTableViewCellDelegate> _delegate;
    HKAdjustableTapTargetButton *_checkboxButton;
}

@property (retain, nonatomic) HKAdjustableTapTargetButton *checkboxButton;
@property (nonatomic) _Bool showsCheckbox;
@property (nonatomic, getter=isChecked) _Bool checked;
@property (weak, nonatomic) id <HKCDADocumentTableViewCellDelegate> delegate;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateForCurrentSizeCategory;
- (void)setCellValuesForDocumentSample:(id)arg1;
- (void)_setupCellStructure;
- (void)_setDocumentLabelWithTag:(long long)arg1 text:(id)arg2 view:(id)arg3;
- (void)_selectedCheckbox:(id)arg1;
- (id)_createDocumentCellLabelWithTag:(long long)arg1 fontSizePts:(double)arg2 flexibleHeight:(_Bool)arg3;

@end
