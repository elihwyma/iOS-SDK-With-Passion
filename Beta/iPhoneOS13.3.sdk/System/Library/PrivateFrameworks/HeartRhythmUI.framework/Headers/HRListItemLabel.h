/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface HRListItemLabel : UIView

{
    _Bool _centerItemViewToFirstLine;
    _Bool _boldText;
    UIView *_itemView;
    UILabel *_textLabel;
    NSString *_text;
    NSLayoutConstraint *_itemViewTextAlignmentConstraint;
    NSLayoutConstraint *_topToTextLabelFirstBaselineConstraint;
    struct CGSize _itemViewSize;
}

@property (nonatomic) struct CGSize itemViewSize;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *itemViewTextAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topToTextLabelFirstBaselineConstraint;
@property (nonatomic) _Bool centerItemViewToFirstLine;
@property (nonatomic) _Bool boldText;

- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_setUpConstraints;
- (id)_textLabelFont;
- (void)_setUpUI;
- (void)_updateTextLabelFont;
- (id)_textLabelBoldFont;
- (id)_textLabelFontStyle;
- (void)_updateItemViewTextAlignmentConstraint;
- (double)_topToTextLabelFirstBaseline;
- (double)_textLabelLastBaselineToBottom;
- (id)initWithView:(id)arg1 size:(struct CGSize)arg2 text:(id)arg3;

@end
