/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDSlideBase.h>

@class OADColorMap, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface PDSlideChild : PDSlideBase

{
    _Bool mShowMasterPlaceholderAnimations;
    _Bool mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)init;
- (id)description;
- (id)colorMap;
- (id)colorScheme;
- (id)styleMatrix;
- (id)fontScheme;
- (_Bool)showMasterShapes;
- (id)drawingTheme;
- (id)themeOverrides;
- (void)doneWithContent;
- (void)setColorMapOverride:(id)arg1;
- (void)setShowMasterShapes:(_Bool)arg1;
- (id)defaultTextListStyle;
- (id)colorMapOverride;
- (_Bool)showMasterPlaceholderAnimations;
- (void)setShowMasterPlaceholderAnimations:(_Bool)arg1;

@end
