/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HFItem, HUGridCellBackgroundView, HUGridHeadlineCellLayoutOptions, NSArray, NSString, UIImageView, UILabel, UIView;

@protocol HUResizableCellDelegate;

@interface HUGridHeadlineCell : UICollectionViewCell

{
    _Bool _cellContentsHidden;
    _Bool _editing;
    HUGridHeadlineCellLayoutOptions *_layoutOptions;
    HFItem *_item;
    UILabel *_headlineLabel;
    UIView *_editingBackgroundContainerView;
    HUGridCellBackgroundView *_editingBackgroundView;
    UIView *_editingBackgroundDarkeningView;
    UIImageView *_editingChevronImageView;
    NSArray *_headlineCellConstraints;
}

@property (retain, nonatomic) UILabel *headlineLabel;
@property (retain, nonatomic) UIView *editingBackgroundContainerView;
@property (retain, nonatomic) HUGridCellBackgroundView *editingBackgroundView;
@property (retain, nonatomic) UIView *editingBackgroundDarkeningView;
@property (retain, nonatomic) UIImageView *editingChevronImageView;
@property (retain, nonatomic) NSArray *headlineCellConstraints;
@property (retain, nonatomic) HUGridHeadlineCellLayoutOptions *layoutOptions;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic, readonly) struct CGRect unpaddedContentFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden;
@property (nonatomic, getter=isRearranging) _Bool rearranging;

+ (_Bool)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_setupCommonCellAppearance;
- (void)_updateHeadlineLabel;

@end
