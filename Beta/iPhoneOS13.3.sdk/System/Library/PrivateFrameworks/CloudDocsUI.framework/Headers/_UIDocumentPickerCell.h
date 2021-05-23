/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UICollectionViewTableCell.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentCollectionViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCell : UICollectionViewTableCell

{
    _Bool _transitioningLayout;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_subtitle2Label;
    UILabel *_subtitleJoiner;
    UIImageView *_tagView;
    UIImageView *_thumbnailView;
    UIProgressView *_progressView;
    long long _cellStyle;
    NSArray *_actions;
    _UIDocumentPickerDocumentCollectionViewController *_collectionView;
    _UIDocumentPickerContainerItem *_item;
    NSLayoutConstraint *_thumbnailCenterWidthConstraint;
    NSLayoutConstraint *_thumbnailCenterHeightConstraint;
    NSArray *_gridConstraints;
    NSArray *_tableConstraints;
    NSArray *_indentedConstraints;
    NSArray *_activeConstraints;
    UIView *_indentationHelperView;
    NSLayoutConstraint *_indentationConstraint;
    UIImageView *_selectionView;
    UIView *_selectionViewsThumbnailView;
    NSMutableArray *_selectionViewConstraints;
    UILongPressGestureRecognizer *_pickableDiagnosticGestureRecognizer;
    UILongPressGestureRecognizer *_actionGestureRecognizer;
    NSArray *_availableActions;
    UIView *_cachedSelectedBackgroundView;
}

@property (retain, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint;
@property (retain, nonatomic) NSArray *gridConstraints;
@property (retain, nonatomic) NSArray *tableConstraints;
@property (retain, nonatomic) NSArray *indentedConstraints;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic, getter=isTransitioningLayout) _Bool transitioningLayout;
@property (retain, nonatomic) UIView *indentationHelperView;
@property (retain, nonatomic) NSLayoutConstraint *indentationConstraint;
@property (retain, nonatomic) UIImageView *selectionView;
@property (retain, nonatomic) UIView *selectionViewsThumbnailView;
@property (retain, nonatomic) NSMutableArray *selectionViewConstraints;
@property (retain, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer;
@property (retain, nonatomic) NSArray *availableActions;
@property (retain, nonatomic) UIView *cachedSelectedBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *subtitle2Label;
@property (retain, nonatomic) UILabel *subtitleJoiner;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UIProgressView *progressView;
@property (nonatomic) long long cellStyle;
@property (retain, nonatomic) NSArray *actions;
@property (weak, nonatomic) _UIDocumentPickerDocumentCollectionViewController *collectionView;
@property (retain, nonatomic) _UIDocumentPickerContainerItem *item;

+ (id)_titleFontForTable:(_Bool)arg1;
+ (id)_subtitleFontForTable:(_Bool)arg1;
+ (struct CGSize)thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2;
+ (struct CGSize)defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)setSelected:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)_updateFonts;
- (void)_updateSeparatorInset;
- (void)_deleteAction:(id)arg1;
- (void)_showPickableDiagnostic;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_updateIconSize;
- (void)_updateConstraintsForCellStyle;
- (void)updateForEditingState:(_Bool)arg1;
- (void)_updateSelectionState:(_Bool)arg1;
- (void)_updateAccessoryType;
- (void)updateActionGestureRecognizer;
- (void)_udpateLabelAlpha;
- (void)reloadItem:(_Bool)arg1;
- (void)_showActions:(id)arg1;
- (void)_moreAction:(id)arg1;
- (void)_renameAction:(id)arg1;
- (void)_activityAction:(id)arg1;
- (void)_moveAction:(id)arg1;
- (void)_infoAction:(id)arg1;

@end
