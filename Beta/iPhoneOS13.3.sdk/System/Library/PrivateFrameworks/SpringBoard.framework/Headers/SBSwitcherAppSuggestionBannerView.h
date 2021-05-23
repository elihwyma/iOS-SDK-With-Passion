/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PlatterKit/PLPlatterView.h>

@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView

{
    SBBestAppSuggestion *_suggestion;
    UIImageView *_iconView;
    UILabel *_appLabel;
    UILabel *_descriptionLabel;
    unsigned long long _style;
    _Bool _highlighted;
    UIView *_highlightDarkeningView;
}

@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) SBBestAppSuggestion *representedAppSuggestion;
@property (nonatomic, readonly) unsigned long long style;

- (id)_textStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_titleFont;
- (id)initWithRecipe:(long long)arg1;
- (id)_descriptionFont;
- (void)_configureConstraints;
- (id)initWithFrame:(struct CGRect)arg1 appSuggestion:(id)arg2 style:(unsigned long long)arg3;
- (void)_createAppLabelForSuggestion:(id)arg1;
- (void)_createIconViewForSuggestion:(id)arg1;
- (void)_createDescriptionLabelForSuggestion:(id)arg1;
- (void)_createDarkeningView;
- (void)_updateAppearanceForCurrentUserInterfaceStyle;
- (_Bool)_isSingleLine;
- (id)_appTitleForSuggestion:(id)arg1;
- (id)_meCardShortName;
- (id)_firstWakeGreetingString;
- (id)_descriptionStringForSuggestion:(id)arg1;
- (id)_iconImageFromAppWithBundleIdentifier:(id)arg1 withIconImageCache:(id)arg2;

@end
