/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class NSArray, NSLayoutConstraint, NSMutableDictionary, UIButton, UIColor, UIImageView, _UIBackButtonContainerView, _UIModernBarButton;

@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider

{
    NSMutableDictionary *_currentConstraints;
    NSMutableDictionary *_oldConstraints;
    UIButton *_backIndicatorButton;
    _UIBackButtonContainerView *_titleContainer;
    _UIModernBarButton *_titleButton;
    _UIModernBarButton *_imageButton;
    UIImageView *_backgroundImage;
    UIImageView *_selectedImage;
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    NSArray *_barButtonTitleAttributes;
    NSArray *_finalTitleAttributes;
    UIColor *_tintColor;
    NSMutableDictionary *_backgroundImages;
    NSArray *_titleContent;
    NSMutableDictionary *_titleLookup;
    NSLayoutConstraint *_backButtonTitleMaxWidthConstraint;
    struct {
        unsigned int imageHasBaseline:1;
        unsigned int style:3;
    } _flags;
}

@property (nonatomic) _Bool backButtonMaskEnabled;

- (id)contentView;
- (id)tintColor;
- (void)_setTitle:(id)arg1;
- (_Bool)supportsBackButtons;
- (id)backIndicatorView;
- (_Bool)buttonSelectionState:(id)arg1 forRequestedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)updateButton:(id)arg1 appearance:(id)arg2;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;
- (void)button:(id)arg1 traitCollectionDidChange:(id)arg2;
- (void)resetButtonHasHighlighted;
- (id)_imageWithActiveStylesFromImage:(id)arg1 tintColor:(id)arg2;
- (void)_computeTextAttributes;
- (void)_removeTitleButton;
- (id)symbolConfigurationCompact:(_Bool)arg1;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 compact:(_Bool)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 compact:(_Bool)arg2;
- (struct UIOffset)backButtonBackgroundVerticalAdjustmentForCompact:(_Bool)arg1;
- (void)_addConstraintsForBackgroundImageWithOffset:(double)arg1 isBackButton:(_Bool)arg2 resizesImage:(_Bool)arg3;
- (void)addActiveConstraint:(id)arg1 named:(id)arg2;
- (struct UIOffset)backgroundVerticalAdjustmentForCompact:(_Bool)arg1;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)activateWidthMinimizer;
- (double)_defaultPaddingForInsets:(struct UIEdgeInsets)arg1;
- (void)activateHeightMinimizer;
- (void)_addHorizontalConstraintsForImageWithInsets:(struct UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (void)_addVerticalConstraintsForImageWithInsets:(struct UIEdgeInsets)arg1;
- (void)_addHorizontalConstraintsForTextWithOffset:(double)arg1 additionalPadding:(struct UIEdgeInsets)arg2;
- (void)_addVerticalConstraintsForTextWithOffset:(double)arg1;
- (void)_addHorizontalConstraintsForContentButton:(id)arg1 titleOffset:(double)arg2 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg3;
- (void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg2;
- (id)_titleContentForTitle:(id)arg1;
- (void)_computeTextAttributesForBarButtonItem:(id)arg1;
- (void)_configureImageOrTitleFromBarButtonItem:(id)arg1 compact:(_Bool)arg2;
- (id)_backIndicatorImageForCompact:(_Bool)arg1;
- (id)_backIndicatorMaskForCompact:(_Bool)arg1;
- (struct UIEdgeInsets)_insetsForCompact:(_Bool)arg1;
- (double)_defaultBackIndicatorBaselineInsetCompact:(_Bool)arg1;
- (struct UIEdgeInsets)_imageInsetsForBarButtonItem:(id)arg1 compact:(_Bool)arg2 isBackButton:(_Bool)arg3;
- (void)_configureImageBackButtonWithImageInsets:(struct UIEdgeInsets)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg2;
- (struct UIOffset)backButtonTitlePositionOffsetForCompact:(_Bool)arg1;
- (void)_configureTextBackButtonWithTitlePositionAdjustment:(struct UIOffset)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg2;
- (void)_setupAlternateTitlesFromBarButtonItem:(id)arg1;
- (void)_configureBackButtonWithBackButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg1;
- (void)_configureImageWithInsets:(struct UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (struct UIOffset)titlePositionOffsetForCompact:(_Bool)arg1;
- (void)_configureTextWithOffset:(struct UIOffset)arg1 additionalPadding:(struct UIEdgeInsets)arg2;
- (void)_configureBackgroundFromBarButtonItem:(id)arg1 isBackButton:(_Bool)arg2;
- (void)updateActiveConstraints:(CDUnknownBlockType)arg1;
- (id)textButton;
- (id)imageButton;
- (id)backgroundImageView;

@end
