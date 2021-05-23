/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADColorContext, OADColorMap, OADColorScheme, OADFontScheme, OADStyleMatrix;

@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OADDrawingTheme : NSObject

{
    OADStyleMatrix *mStyleMatrix;
    OADFontScheme *mFontScheme;
    OADColorContext *mColorContext;
}

@property (nonatomic, readonly) OADStyleMatrix *styleMatrix;
@property (nonatomic, readonly) OADFontScheme *fontScheme;
@property (nonatomic, readonly) OADColorContext *colorContext;
@property (nonatomic, readonly) OADColorScheme *colorScheme;
@property (nonatomic, readonly) OADColorMap *colorMap;
@property (nonatomic, readonly) id <OADColorPalette> colorPalette;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;

@end
