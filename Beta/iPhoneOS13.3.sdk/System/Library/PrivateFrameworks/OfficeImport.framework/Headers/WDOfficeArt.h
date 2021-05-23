/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDOfficeArt : WDRunWithCharacterProperties

{
    OADDrawable *mDrawable;
    _Bool mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;

- (id)description;
- (_Bool)isFloating;
- (void)setFloating:(_Bool)arg1;
- (id)imageName;
- (id)imageData;
- (id)initWithParagraph:(id)arg1;
- (id)drawable;
- (_Bool)isDrawableOverridden;
- (int)runType;
- (void)checkForFloating:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;
- (id)overrideDrawable;
- (void)clearDrawable;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)arg1;
- (void)propagateTextTypeToDrawables;

@end
