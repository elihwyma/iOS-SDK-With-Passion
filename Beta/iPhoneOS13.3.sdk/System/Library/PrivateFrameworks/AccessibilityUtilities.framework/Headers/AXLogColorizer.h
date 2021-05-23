/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXLogColorizer : NSObject

{
    _Bool _active;
    _Bool _managedBySettings;
    _Bool _preferDarkColors;
    struct AXLogColorTheme _colorTheme;
}

@property (nonatomic, getter=isManagedBySettings) _Bool managedBySettings;
@property (nonatomic) struct AXLogColorTheme colorTheme;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) _Bool preferDarkColors;

+ (id)defaultColorizer;
+ (char *)ansiColorSeqForAXLogColor:(long long)arg1;
+ (id)coloredString:(id)arg1 withColor:(long long)arg2;
+ (struct AXLogColorTheme)defaultLightColorsTheme;
+ (struct AXLogColorTheme)defaultDarkColorsTheme;
+ (id)colorizeStringIfEnabled:(id)arg1 withColor:(long long)arg2;

- (id)init;
- (id)description;
- (id)errorString:(id)arg1;
- (id)warningString:(id)arg1;
- (id)debugString:(id)arg1;
- (id)infoString:(id)arg1;
- (id)redString:(id)arg1;
- (id)greenString:(id)arg1;
- (id)yellowString:(id)arg1;
- (id)blueString:(id)arg1;
- (id)cyanString:(id)arg1;
- (id)magentaString:(id)arg1;
- (id)_initAndManageWithSettings:(_Bool)arg1;
- (void)_updateSettingsFromUserPrefs;
- (id)whiteOrBlackString:(id)arg1;
- (id)greyString:(id)arg1;

@end
