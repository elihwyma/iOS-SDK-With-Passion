/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarBatteryPercentItemView : UIStatusBarItemView

{
    NSString *_percentString;
}

- (long long)textStyle;
- (id)accessibilityHUDRepresentation;
- (long long)textAlignment;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)extraRightPadding;
- (_Bool)animatesDataChange;

@end
