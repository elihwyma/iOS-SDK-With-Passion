/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont, UIImage, UIView;

@interface CNFRegAppearanceController : NSObject

@property (nonatomic, readonly) long long keyboardAppearance;
@property (nonatomic, readonly) UIColor *customBackgroundColor;
@property (nonatomic, readonly) UIColor *userInteractionColor;
@property (nonatomic, readonly) _Bool styleUsesCustomTableStyle;
@property (retain, nonatomic, readonly) UIColor *tableBackgroundColor;
@property (retain, nonatomic, readonly) UIColor *tableSectionBorderColor;
@property (retain, nonatomic, readonly) UIImage *tableSectionShadowImage;
@property (retain, nonatomic, readonly) UIColor *tableCellBackgroundColor;
@property (retain, nonatomic, readonly) UIColor *tableCellTextLabelColor;
@property (retain, nonatomic, readonly) UIColor *tableCellTextLabelBackgroundColor;
@property (retain, nonatomic, readonly) UIColor *tableCellDetailLabelColor;
@property (retain, nonatomic, readonly) UIColor *tableCellDetailLabelBackgroundColor;
@property (retain, nonatomic, readonly) UIImage *tableCellButtonImage;
@property (retain, nonatomic, readonly) UIImage *tableCellButtonImageSelected;
@property (retain, nonatomic, readonly) UIColor *tableCellEditableTextColor;
@property (retain, nonatomic, readonly) UIColor *tableCellEditableTextPlaceholderColor;
@property (retain, nonatomic, readonly) UIColor *tableCellEditableInsertionPointColor;
@property (retain, nonatomic, readonly) UIImage *tableCellEditableTextFieldClearButton;
@property (retain, nonatomic, readonly) UIImage *tableCellEditableTextFieldClearButtonPressed;
@property (nonatomic, readonly) _Bool styleUsesCustomAccessoryView;
@property (retain, nonatomic, readonly) UIView *tableCellCustomAccessoryViewDisclosureIndicator;
@property (retain, nonatomic, readonly) UIImage *tableCellCheckmarkImage;
@property (retain, nonatomic, readonly) UIImage *tableCellCheckmarkImageSelected;
@property (retain, nonatomic, readonly) UIImage *tableCellCheckmarkImageDisabled;
@property (nonatomic, readonly) _Bool styleUsesCustomSeparatorStyle;
@property (nonatomic, readonly) long long tableSeparatorStyle;
@property (nonatomic, readonly) UIColor *tableSeparatorColor;
@property (nonatomic, readonly) UIColor *tableSeparatorTopShadowColor;
@property (nonatomic, readonly) UIColor *tableSeparatorBottomShadowColor;
@property (retain, nonatomic, readonly) UIColor *tableHeaderTextColor;
@property (retain, nonatomic, readonly) UIColor *tableHeaderTextColorSelected;
@property (retain, nonatomic, readonly) UIColor *tableHeaderTextShadowColor;
@property (nonatomic, readonly) struct CGSize tableHeaderTextShadowOffset;
@property (retain, nonatomic, readonly) UIFont *tableHeaderFont;
@property (retain, nonatomic, readonly) UIFont *tableFooterFont;
@property (retain, nonatomic, readonly) UIColor *tableFooterTextColor;
@property (nonatomic, readonly) long long tableHeaderTextAlignment;
@property (nonatomic, readonly) long long tableFooterTextAlignment;
@property (nonatomic, readonly) _Bool styleUsesCustomSearchResultsStyle;
@property (nonatomic, readonly) long long searchResultsTableSeparatorStyle;
@property (nonatomic, readonly) UIColor *searchResultsTableSeparatorColor;
@property (nonatomic, readonly) UIColor *searchResultsTableSeparatorTopShadowColor;
@property (nonatomic, readonly) UIColor *searchResultsTableSeparatorBottomShadowColor;
@property (nonatomic, readonly) long long modalPresentationStyle;
@property (retain, nonatomic, readonly) UIView *webViewBackgroundView;
@property (retain, nonatomic, readonly) UIColor *webViewBackgroundColor;
@property (nonatomic, readonly) _Bool webViewIsOpaque;
@property (nonatomic, readonly) _Bool webViewDrawsShadows;
@property (nonatomic, readonly) _Bool splashScreenShowsIcon;
@property (retain, nonatomic, readonly) UIColor *splashTitleLabelTextColor;
@property (retain, nonatomic, readonly) UIColor *splashEntryFieldTextColor;
@property (retain, nonatomic, readonly) UIColor *splashEntryPlaceholderTextColor;
@property (retain, nonatomic, readonly) UIColor *splashEntryFieldLabelTextColor;
@property (retain, nonatomic, readonly) UIColor *splashSignInFieldsBorderColor;
@property (retain, nonatomic, readonly) UIColor *splashSignInFieldsBackgroundColor;
@property (nonatomic, readonly) long long splashSignInProgressIndicatorColor;
@property (nonatomic, readonly) long long navigationBarStyle;
@property (nonatomic, readonly) _Bool navigationBarIsTranslucent;
@property (nonatomic, readonly) long long navigationBarActivityIndicatorStyle;
@property (nonatomic, readonly) _Bool firstNavigationBarHidden;
@property (nonatomic, readonly) _Bool navigationBarHidesTitle;
@property (nonatomic, readonly) _Bool navigationBarHidesShadow;
@property (retain, nonatomic, readonly) UIColor *navigationBarTintColor;
@property (nonatomic, readonly) _Bool navigationBarTranslucent;
@property (retain, nonatomic, readonly) UIImage *navigationBarBackgroundImage;
@property (retain, nonatomic, readonly) UIColor *learnMoreTextColor;
@property (retain, nonatomic, readonly) UIColor *learnMoreTextColorSelected;
@property (retain, nonatomic, readonly) UIColor *learnMoreShadowColor;
@property (retain, nonatomic, readonly) UIImage *learnMoreArrowImage;
@property (retain, nonatomic, readonly) UIImage *learnMoreArrowImagePressed;
@property (nonatomic, readonly) _Bool learnMoreButtonDrawsUnderline;
@property (nonatomic, readonly) _Bool actionSheetsUsePopoverStyle;

+ (id)globalAppearanceController;
+ (id)appearanceControllerForStyle:(long long)arg1;
+ (id)stripedAppearanceController;
+ (id)gradientAppearanceController;
+ (id)modernAppearanceController;
+ (id)modernTransparentLightAppearanceController;
+ (id)modernTransparentDarkAppearanceController;
+ (id)defaultAppearanceController;

@end
