/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage, UIView, _UILegibilityImageSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarBatteryItemView : UIStatusBarItemView

{
    int _capacity;
    int _state;
    _Bool _batterySaverModeActive;
    UIView *_accessoryView;
    _Bool _cachedImageHasAccessoryImage;
    int _cachedCapacity;
    int _cachedAXHUDCapacity;
    _UILegibilityImageSet *_cachedImageSet;
    unsigned long long _cachedBatteryStyle;
    unsigned long long _cachedAXHUDStyle;
    UIImage *_cachedAXHUDImage;
}

@property (retain, nonatomic) _UILegibilityImageSet *cachedImageSet;
@property (nonatomic) int cachedCapacity;
@property (nonatomic) _Bool cachedImageHasAccessoryImage;
@property (nonatomic) unsigned long long cachedBatteryStyle;
@property (nonatomic) int cachedAXHUDCapacity;
@property (nonatomic) unsigned long long cachedAXHUDStyle;
@property (retain, nonatomic) UIImage *cachedAXHUDImage;

- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (void)_updateAccessoryImage;
- (_Bool)_needsAccessoryImage;
- (id)_accessoryImage;
- (struct CGSize)_batteryOffsetWithBackground:(id)arg1;
- (id)_contentsImage;
- (double)extraRightPadding;
- (double)legibilityStrength;

@end
