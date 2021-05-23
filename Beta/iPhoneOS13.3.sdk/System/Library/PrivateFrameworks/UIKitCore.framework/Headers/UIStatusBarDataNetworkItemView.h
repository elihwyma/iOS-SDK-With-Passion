/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView

{
    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    _Bool _wifiLinkWarning;
    _Bool _enableRSSI;
    _Bool _showRSSI;
}

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (_Bool)_updateWithData:(CDStruct_0942cde0 *)arg1 networkType:(int)arg2;
- (id)_stringForRSSI;
- (id)_dataNetworkImage;
- (id)_dataNetworkImageName;
- (double)maximumOverlap;

@end
