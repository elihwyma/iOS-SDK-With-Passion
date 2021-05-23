/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIActivityIndicatorView, UILabel;

@interface PMEditorMenuTableViewCell : UITableViewCell

{
    _Bool _showingActivityIndicator;
    NSString *_detailText;
    NSString *_secondaryDetailText;
    NSLayoutConstraint *_labelLeadingConstraint;
    UILabel *_titleLabel;
    UILabel *_upperDetailsLabel;
    UILabel *_centerDetailsLabel;
    UILabel *_lowerDetailsLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *upperDetailsLabel;
@property (retain, nonatomic) UILabel *centerDetailsLabel;
@property (retain, nonatomic) UILabel *lowerDetailsLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *secondaryDetailText;
@property (nonatomic, getter=isShowingActivityIndicator) _Bool showingActivityIndicator;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;

+ (double)dynamicTypeHeight;

- (void)prepareForReuse;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_disclosureChevronImage:(_Bool)arg1;
- (void)_updateFonts;

@end
