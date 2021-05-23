/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIViewController.h>

@class MFComposeColorPickerController, MFComposeFontSelectorButton, MFComposeStyleSelectorButton, MFComposeTextColorButton, MFRoundedCornersStackView, NSString, UIStackView;

@protocol MFComposeStyleSelectorViewControllerDelegate;

@interface MFComposeStyleSelectorViewController : UIViewController

{
    id <MFComposeStyleSelectorViewControllerDelegate> _styleDelegate;
    UIStackView *_containerStackView;
    MFComposeColorPickerController *_colorPicker;
    UIStackView *_fontTextAttributeStackView;
    UIStackView *_fontAttributeStackView;
    MFRoundedCornersStackView *_textAttributeStackView;
    UIStackView *_quoteIndentListJustifyStackView;
    UIStackView *_listJustifyStackView;
    MFRoundedCornersStackView *_listStackView;
    MFRoundedCornersStackView *_indentStackView;
    UIStackView *_quoteIndentStackView;
    MFRoundedCornersStackView *_justifyStackView;
    MFRoundedCornersStackView *_quoteLevelStackView;
    MFComposeFontSelectorButton *_fontSelectorButton;
    MFComposeStyleSelectorButton *_decreaseFontSizeButton;
    MFComposeStyleSelectorButton *_increaseFontSizeButton;
    MFComposeTextColorButton *_textColorButton;
    MFComposeStyleSelectorButton *_boldButton;
    MFComposeStyleSelectorButton *_italicsButton;
    MFComposeStyleSelectorButton *_underlineButton;
    MFComposeStyleSelectorButton *_strikethroughButton;
    MFComposeStyleSelectorButton *_bulletListButton;
    MFComposeStyleSelectorButton *_numberedListButton;
    MFComposeStyleSelectorButton *_justifyLeftButton;
    MFComposeStyleSelectorButton *_justifyCenterButton;
    MFComposeStyleSelectorButton *_justifyRightButton;
    MFComposeStyleSelectorButton *_increaseQuoteButton;
    MFComposeStyleSelectorButton *_decreaseQuoteButton;
    MFComposeStyleSelectorButton *_indentLeftButton;
    MFComposeStyleSelectorButton *_indentRightButton;
    long long _currentFontSize;
}

@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) MFComposeColorPickerController *colorPicker;
@property (retain, nonatomic) UIStackView *fontTextAttributeStackView;
@property (retain, nonatomic) UIStackView *fontAttributeStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *textAttributeStackView;
@property (retain, nonatomic) UIStackView *quoteIndentListJustifyStackView;
@property (retain, nonatomic) UIStackView *listJustifyStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *listStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *indentStackView;
@property (retain, nonatomic) UIStackView *quoteIndentStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *justifyStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *quoteLevelStackView;
@property (retain, nonatomic) MFComposeFontSelectorButton *fontSelectorButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *decreaseFontSizeButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *increaseFontSizeButton;
@property (retain, nonatomic) MFComposeTextColorButton *textColorButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *boldButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *italicsButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *underlineButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *strikethroughButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *bulletListButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *numberedListButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyLeftButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyCenterButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyRightButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *increaseQuoteButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *decreaseQuoteButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *indentLeftButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *indentRightButton;
@property (nonatomic) long long currentFontSize;
@property (weak, nonatomic) id <MFComposeStyleSelectorViewControllerDelegate> styleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)fontPickerViewControllerDidCancel:(id)arg1;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (void)_setupButtons;
- (void)colorPickerDidCancel:(id)arg1;
- (void)colorPicker:(id)arg1 didChangeSelectedColor:(id)arg2;
- (id)_roundedEquallyFilledHorizontalStackView;
- (void)pickFontAction:(id)arg1;
- (void)_updateFontsButton:(id)arg1;
- (void)pickTextColor:(id)arg1;
- (void)_setupContainer;
- (void)closeStyleSelector:(id)arg1;
- (void)styleSelectorAction:(id)arg1;
- (id)_composeStyleSelectorButtonForAttributeType:(long long)arg1;
- (void)changeFontSizeAction:(id)arg1;
- (void)updateStateUsingFontAttributes:(id)arg1;

@end
