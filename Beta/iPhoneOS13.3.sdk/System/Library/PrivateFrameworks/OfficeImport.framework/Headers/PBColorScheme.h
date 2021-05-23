/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBColorScheme : NSObject

+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1;
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 colorTransform:(CDUnknownFunctionPointerType)arg3 atIndex:(int)arg4 inScheme:(id)arg5;
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 atIndex:(int)arg3 inScheme:(id)arg4;
+ (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1;
+ (void)readFromColorScheme:(struct PptColorSchemeAtom *)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;

@end
