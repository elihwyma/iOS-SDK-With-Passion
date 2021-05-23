/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSUtility/TSUColor.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@interface TSUColor (TSSAdditions) <Swift>

@property (nonatomic, readonly) NSString *presetKind;

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)highContrastBackgroundColorForPreset:(id)arg1;

- (_Bool)isThemeEquivalent:(id)arg1;

@end
