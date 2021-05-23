/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface ICPaperStyleHeaderView : UICollectionReusableView

{
    UILabel *_label;
    NSLayoutConstraint *_labelConstraintLeading;
    NSLayoutConstraint *_labelConstraintTrailing;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintLeading;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintTrailing;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double titleInset;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)contentSizeCategoryDidChange;

@end
