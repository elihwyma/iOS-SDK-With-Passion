/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFBaseLibraryWorkflowCell.h>

@class UIBezierPath, UIButton, UILabel, WFLibraryLayoutMetrics, WFLibraryWorkflowCellSelectionView;

@protocol WFLibraryWorkflowCellDelegate;

@interface WFLibraryWorkflowCell : WFBaseLibraryWorkflowCell

{
    _Bool _jittering;
    _Bool _hideEditButton;
    UIButton *_editButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    WFLibraryWorkflowCellSelectionView *_selectionView;
    long long _dragState;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UIButton *editButton;
@property (weak, nonatomic, readonly) WFLibraryWorkflowCellSelectionView *selectionView;
@property (nonatomic) long long dragState;
@property (weak, nonatomic) id <WFLibraryWorkflowCellDelegate> delegate;
@property (copy, nonatomic) WFLibraryLayoutMetrics *layoutMetrics;
@property (nonatomic, getter=isJittering) _Bool jittering;
@property (nonatomic) _Bool hideEditButton;
@property (nonatomic, readonly) UIBezierPath *visiblePathForDragging;

+ (id)jitterRotationAnimation;
+ (id)jitterYTranslationAnimation;
+ (id)jitterXTranslationAnimation;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityPath;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dragStateDidChange:(long long)arg1;
- (id)titleFont;
- (id)subtitleFont;
- (void)cancelButtonPressed:(id)arg1;
- (double)titleLineHeightMultiple;
- (double)subtitleLineHeightMultiple;
- (id)textAttributesForLabelType:(unsigned long long)arg1 shouldTruncate:(_Bool)arg2;
- (long long)lineCountForLabel:(id)arg1 labelType:(unsigned long long)arg2;
- (void)editButtonPressed:(id)arg1;
- (void)setWorkflowName:(id)arg1;
- (void)setWorkflowDescription:(id)arg1;
- (void)updateSelectionState;
- (void)updateEditButtonVisibility;
- (_Bool)accessibilityRenameWorkflow;
- (_Bool)accessibilityDuplicateWorkflow;
- (_Bool)accessibilityDeleteWorkflow;
- (_Bool)accessibilityEditWorkflow;

@end
