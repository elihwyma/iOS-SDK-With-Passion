/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView

{
    int _capacity;
    int _accessibilityCachedHUDCapacity;
    UIImage *_accessibilityCachedHUDImage;
}

- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)_normalizedCapacity;
- (struct UIEdgeInsets)_accessibilityHUDBatteryInsidesInsets;
- (double)extraLeftPadding;

@end
