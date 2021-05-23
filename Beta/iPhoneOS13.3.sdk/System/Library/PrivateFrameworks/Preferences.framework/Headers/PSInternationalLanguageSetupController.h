/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSLanguageSelector;

@interface PSInternationalLanguageSetupController

{
    PSLanguageSelector *_languageSelector;
}

@property (retain, nonatomic) PSLanguageSelector *languageSelector;

- (void)commit;
- (void)setupController;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;

@end
