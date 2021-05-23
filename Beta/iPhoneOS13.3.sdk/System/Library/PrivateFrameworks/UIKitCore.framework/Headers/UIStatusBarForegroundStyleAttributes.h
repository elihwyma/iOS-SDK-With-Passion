/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundStyleAttributes : NSObject <Swift>

{
    double _height;
    long long _legibilityStyle;
    long long _idiom;
    NSMutableDictionary *_cachedFonts;
    _Bool _isTintColorBlack;
    _Bool _hasBusyBackground;
    NSString *_cachedUniqueIdentifier;
    _Bool _canShowBreadcrumbs;
    UIColor *_tintColor;
}

@property (nonatomic) _Bool canShowBreadcrumbs;
@property (retain, nonatomic, readonly) UIColor *tintColor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)scale;
- (id)uniqueIdentifier;
- (double)height;
- (long long)idiom;
- (id)imageNamed:(id)arg1;
- (id)generateUniqueIdentifier;
- (id)textForNetworkType:(int)arg1;
- (_Bool)usesVerticalLayout;
- (double)standardPadding;
- (double)middlePadding;
- (double)leftEdgePadding;
- (double)rightEdgePadding;
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
- (long long)activityIndicatorStyleWithSyncActivity:(_Bool)arg1;
- (id)makeTextFontForStyle:(long long)arg1;
- (double)textOffsetForStyle:(long long)arg1;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4 idiom:(long long)arg5;
- (id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(_Bool)arg4;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(_Bool)arg4;
- (id)batteryColorForCapacity:(int)arg1 style:(unsigned long long)arg2 usingTintColor:(_Bool)arg3;
- (double)_roundDimension:(double)arg1;
- (id)bluetoothBatteryColorForCapacity:(double)arg1 usingTintColor:(_Bool)arg2;
- (id)textFontForStyle:(long long)arg1;
- (id)textColorForStyle:(long long)arg1;
- (void)_drawText:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6;
- (void)drawTextInRect:(struct CGRect)arg1 withColor:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3;
- (id)expandedNameForImageName:(id)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;
- (void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5;
- (id)_cachedImageNamed:(id)arg1;
- (id)uncachedImageNamed:(id)arg1;
- (void)_cacheImage:(id)arg1 named:(id)arg2;
- (id)untintedImageNamed:(id)arg1;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 shouldCache:(_Bool)arg6;
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 shouldCache:(_Bool)arg10;
- (id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5;
- (void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(struct CGSize)arg7 textHeight:(double)arg8;
- (_Bool)_shouldUseBoldFontForStyle:(long long)arg1;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4;
- (long long)legibilityStyle;
- (double)batteryAccessoryMargin;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3;
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(double)arg2;
- (double)shadowPadding;
- (id)accessibilityHUDImageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9;
- (id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7;
- (double)baselineOffsetForStyle:(long long)arg1;
- (double)bluetoothBatteryExtraPadding;
- (double)sizeForMoonMaskVisible:(_Bool)arg1;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;
- (_Bool)supportsShowingBuildVersion;

@end
