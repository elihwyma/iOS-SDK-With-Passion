/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCell.h>

@class HFItem, HUGridActionSetTitleAndDescriptionView, HUGridSceneCellLayoutOptions, HUIconView, HUPieProgressView, NAFuture, NSArray, NSString, UIView;

@interface HUGridActionSetCell : HUGridCell

{
    HFItem *_item;
    NAFuture *_executeActionSetFuture;
    UIView *_accessoryView;
    HUGridActionSetTitleAndDescriptionView *_titleAndDescriptionView;
    HUGridSceneCellLayoutOptions *_sceneCellLayoutOptions;
    HUIconView *_iconView;
    HUPieProgressView *_progressView;
    NSArray *_actionSetCellConstraints;
    NAFuture *_internalExecuteActionSetFuture;
}

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) HUGridActionSetTitleAndDescriptionView *titleAndDescriptionView;
@property (retain, nonatomic) HUPieProgressView *progressView;
@property (retain, nonatomic) NSArray *actionSetCellConstraints;
@property (retain, nonatomic) NAFuture *internalExecuteActionSetFuture;
@property (retain, nonatomic) NAFuture *executeActionSetFuture;
@property (retain, nonatomic) UIView *accessoryView;
@property (weak, nonatomic) HUGridSceneCellLayoutOptions *sceneCellLayoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_updateLabels;
- (void)_invalidateConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)layoutOptionsDidChange;
- (void)_setupActionSetCell;
- (void)_updateLabelsWithTitle:(id)arg1 description:(id)arg2;

@end
