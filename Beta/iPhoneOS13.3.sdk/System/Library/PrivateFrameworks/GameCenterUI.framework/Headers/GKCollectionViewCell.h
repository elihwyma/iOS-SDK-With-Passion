/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CALayer, GKEditActionsView, GKHairlineView, GKStaticRenderContentView, NSArray, NSLayoutConstraint, UIView;

@interface GKCollectionViewCell : UICollectionViewCell

{
    _Bool _shouldDisplaySwipeToEditAccessories;
    double _contentOriginX;
    _Bool _doesAbutLeftEdge;
    id _representedItem;
    UIView *_staticContentView;
    NSArray *_editActions;
    GKEditActionsView *_editActionsView;
    GKStaticRenderContentView *_contentRenderView;
    CALayer *_leftGradientMask;
    GKHairlineView *_topHairline;
    GKHairlineView *_bottomHairline;
    NSArray *_editActionsConstraints;
    NSArray *_hairlineConstraints;
    NSLayoutConstraint *_contentLeftConstraint;
    double _leadingMargin;
    double _trailingMargin;
}

@property (nonatomic, readonly) GKEditActionsView *editActionsView;
@property (retain, nonatomic) UIView *staticContentView;
@property (retain, nonatomic) GKStaticRenderContentView *contentRenderView;
@property (retain, nonatomic) CALayer *leftGradientMask;
@property (nonatomic) _Bool doesAbutLeftEdge;
@property (retain, nonatomic) GKHairlineView *topHairline;
@property (retain, nonatomic) GKHairlineView *bottomHairline;
@property (retain, nonatomic) NSArray *editActionsConstraints;
@property (retain, nonatomic) NSArray *hairlineConstraints;
@property (retain, nonatomic) NSLayoutConstraint *contentLeftConstraint;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (retain, nonatomic) id representedItem;
@property (nonatomic, readonly) UIView *interactiveContentView;
@property (nonatomic, readonly) struct CGRect alignmentRectForText;
@property (retain, nonatomic) NSArray *editActions;
@property (nonatomic) double editingContentOriginX;

+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (void)dealloc;
- (void)beginEditing;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setNeedsDisplay;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)applyLayoutAttributes:(id)arg1;
- (id)popoverSourceView;
- (void)finishEditing;
- (void)_gkEnumerateSubviewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)prepareEditActionsConstraintsIfNeeded;
- (void)setShouldDisplaySwipeToEditAccessories:(_Bool)arg1;
- (void)prepareHairlineConstraintsIfNeeded;
- (void)applyGradientMaskIfNeeded;
- (void)resetEditingContentOrigin;
- (void)didUpdateModel;
- (void)setEditActionsVisibleWidth:(double)arg1;
- (double)contentViewOriginXWhileEditing;
- (double)editActionsVisibleWidth;
- (void)animateOutSwipeToEditAccessories;
- (void)setUserInteractionEnabledForEditing:(_Bool)arg1;
- (_Bool)userInteractionEnabledForEditing;
- (_Bool)touchWithinEditActions:(id)arg1;
- (void)closeForDelete;
- (void)shutActionPaneAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
