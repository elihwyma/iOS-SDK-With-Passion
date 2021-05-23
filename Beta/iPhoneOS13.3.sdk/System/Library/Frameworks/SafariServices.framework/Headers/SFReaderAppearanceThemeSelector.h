/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class UIButton, UIStackView;

__attribute__((visibility("hidden")))
@interface SFReaderAppearanceThemeSelector : UIView

{
    UIStackView *_stackView;
    UIButton *_whiteButton;
    UIButton *_sepiaButton;
    UIButton *_grayButton;
    UIButton *_nightButton;
    long long _selectedTheme;
    CDUnknownBlockType _selectedThemeChangedBlock;
}

@property (nonatomic) long long selectedTheme;
@property (copy, nonatomic) CDUnknownBlockType selectedThemeChangedBlock;

+ (double)requiredHeight;
+ (id)themeSelectorWithBlock:(CDUnknownBlockType)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_createThemeButtons;
- (void)_updateSelectedTheme;
- (id)_buttonForTheme:(long long)arg1;
- (id)_imageForTheme:(long long)arg1 selected:(_Bool)arg2;
- (void)_themeButtonAction:(id)arg1;
- (id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(_Bool)arg3;
- (long long)_themeForButton:(id)arg1;
- (void)_changeSelectionForTheme:(long long)arg1 selected:(_Bool)arg2;

@end
