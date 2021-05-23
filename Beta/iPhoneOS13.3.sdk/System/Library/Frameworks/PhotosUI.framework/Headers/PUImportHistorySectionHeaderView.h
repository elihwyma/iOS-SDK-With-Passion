/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIButton, UILabel, UITraitCollection, UIVisualEffectView;

@protocol PUImportHistorySectionHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface PUImportHistorySectionHeaderView : UICollectionReusableView

{
    struct {
        unsigned int headerViewDidPressActionButton:1;
    } _delegateFlags;
    _Bool _showsActionButton;
    _Bool _actionButtonEnabled;
    _Bool _shouldBlurBackground;
    _Bool _supportsMultipleLinesInCompactLayout;
    _Bool _inLayoutTransition;
    id <PUImportHistorySectionHeaderViewDelegate> _delegate;
    NSString *_actionText;
    NSString *_backdropViewGroupName;
    UILabel *_primaryLabel;
    UILabel *_spacerLabel;
    UILabel *_secondaryLabel;
    UIButton *_actionButton;
    UIVisualEffectView *_visualEffectView;
    UITraitCollection *_selfSizingTraits;
    struct PXSimpleIndexPath _sectionIndexPath;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *spacerLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;
@property (nonatomic) _Bool inLayoutTransition;
@property (retain, nonatomic) UITraitCollection *selfSizingTraits;
@property (nonatomic, readonly) long long layoutMode;
@property (weak, nonatomic) id <PUImportHistorySectionHeaderViewDelegate> delegate;
@property (nonatomic) struct PXSimpleIndexPath sectionIndexPath;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) _Bool showsActionButton;
@property (nonatomic) _Bool actionButtonEnabled;
@property (copy, nonatomic) NSString *actionText;
@property (nonatomic) _Bool shouldBlurBackground;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) _Bool supportsMultipleLinesInCompactLayout;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateBackground;
- (void)applyLayoutAttributes:(id)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (_Bool)_disableRasterizeInAnimations;
- (void)_actionButtonPressed:(id)arg1;
- (void)_updateLabelFonts;
- (void)_updateBackdropViewGroupName;
- (void)_updateActionButtonVisibility;
- (void)setActionButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateActionButtonEnabledAnimated:(_Bool)arg1;
- (void)_updateActionButtonText;
- (double)heightForSizeClass:(long long)arg1 width:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (void)_updateWithCurrentTraits;
- (void)_updateLabelLineNumbers;
- (void)_updateSpacerLabelHiddenState;

@end
