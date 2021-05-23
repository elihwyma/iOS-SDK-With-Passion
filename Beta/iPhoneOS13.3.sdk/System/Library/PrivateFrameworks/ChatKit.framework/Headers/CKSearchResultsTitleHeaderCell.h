/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CALayer, NSString, UIButton, UILabel;

@protocol CKSearchResultsTitleHeaderCellDelegate;

@interface CKSearchResultsTitleHeaderCell : UICollectionViewCell

{
    id <CKSearchResultsTitleHeaderCellDelegate> _delegate;
    unsigned long long _sectionIndex;
    UIButton *_showAllButton;
    UILabel *_sectionTitle;
    CALayer *_topHairline;
    double _titleTopPadding;
    double _titleBottomPadding;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) UILabel *sectionTitle;
@property (retain, nonatomic) UIButton *showAllButton;
@property (retain, nonatomic) CALayer *topHairline;
@property (nonatomic) double titleTopPadding;
@property (nonatomic) double titleBottomPadding;
@property (weak, nonatomic) id <CKSearchResultsTitleHeaderCellDelegate> delegate;
@property (nonatomic) unsigned long long sectionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
+ (double)desiredZPosition;

- (void)setTitle:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_showAllButtonTapped:(id)arg1;

@end
