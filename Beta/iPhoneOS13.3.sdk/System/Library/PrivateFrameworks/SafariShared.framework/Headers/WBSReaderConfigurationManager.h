/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, WBSReaderFontManager;

@interface WBSReaderConfigurationManager : NSObject

{
    long long _textZoomIndex;
    long long _theme;
    long long _darkModeTheme;
    NSMutableDictionary *_fontFamilyNameForLanguageTag;
    WBSReaderFontManager *_fontManager;
    _Bool _prefersLargerDefaultFontSize;
    _Bool _javaScriptEnabled;
    _Bool _darkModeEnabled;
    _Bool _isOLEDDisplay;
}

@property (nonatomic, readonly) NSDictionary *configurationToSave;
@property (nonatomic, readonly) NSDictionary *configurationToSendToWebPage;
@property (nonatomic) _Bool javaScriptEnabled;
@property (nonatomic) _Bool darkModeEnabled;
@property (nonatomic) _Bool isOLEDDisplay;
@property (nonatomic, readonly) _Bool canMakeTextBigger;
@property (nonatomic, readonly) _Bool canMakeTextSmaller;
@property (nonatomic, readonly) _Bool resettingTextSizeWouldHaveEffect;

- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 prefersLargerDefaultFontSize:(_Bool)arg3;
- (void)setFont:(id)arg1 forLanguageTag:(id)arg2;
- (void)setTheme:(long long)arg1 forAppearance:(long long)arg2;
- (void)makeTextBigger;
- (void)makeTextSmaller;
- (void)resetTextSize;
- (id)fontForLanguageTag:(id)arg1;
- (long long)themeForAppearance:(long long)arg1;
- (long long)_defaultTextZoomIndex;
- (void)_migrateToVersion5IfNecessary;
- (long long)_effectiveTextZoomIndex;
- (long long)_defaultThemeForAppearance:(long long)arg1;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2;

@end
