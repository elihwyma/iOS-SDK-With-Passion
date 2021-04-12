//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFBaseLibraryWorkflowCell.h>

@class UIBezierPath, UIButton, UILabel, WFLibraryLayoutMetrics, WFLibraryWorkflowCellSelectionView;

@interface WFLibraryWorkflowCell : WFBaseLibraryWorkflowCell
{
    BOOL _jittering;
    BOOL _hideEditButton;
    UIButton *_editButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    WFLibraryWorkflowCellSelectionView *_selectionView;
    long long _dragState;
}

+ (id)jitterRotationAnimation;
+ (id)jitterYTranslationAnimation;
+ (id)jitterXTranslationAnimation;
@property(nonatomic) long long dragState; // @synthesize dragState=_dragState;
@property(readonly, nonatomic) __weak WFLibraryWorkflowCellSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL hideEditButton; // @synthesize hideEditButton=_hideEditButton;
@property(nonatomic, getter=isJittering) BOOL jittering; // @synthesize jittering=_jittering;
@property(readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityPath;
- (BOOL)accessibilityEditWorkflow;
- (BOOL)accessibilityDeleteWorkflow;
- (BOOL)accessibilityDuplicateWorkflow;
- (BOOL)accessibilityRenameWorkflow;
- (BOOL)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (NSUInteger)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)dragStateDidChange:(long long)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateEditButtonVisibility;
- (void)updateSelectionState;
@property(copy, nonatomic) WFLibraryLayoutMetrics *layoutMetrics; // @dynamic layoutMetrics;
- (void)setWorkflowDescription:(id)arg1;
- (void)setWorkflowName:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)editButtonPressed:(id)arg1;
@property(readonly, nonatomic) UIBezierPath *visiblePathForDragging;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (long long)lineCountForLabel:(id)arg1 labelType:(NSUInteger)arg2;
- (id)textAttributesForLabelType:(NSUInteger)arg1 shouldTruncate:(BOOL)arg2;
- (double)subtitleLineHeightMultiple;
- (double)titleLineHeightMultiple;
- (id)subtitleFont;
- (id)titleFont;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

