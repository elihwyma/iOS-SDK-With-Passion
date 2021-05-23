/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView

{
    int _signalStrengthRaw;
    int _signalStrengthBars;
    _Bool _enableRSSI;
    _Bool _showRSSI;
    _Bool _showFailure;
    _Bool _useSmallBars;
}

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)_stringForRSSI;
- (_Bool)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(_Bool)arg3 showFailure:(_Bool)arg4 useSmallBars:(_Bool)arg5;
- (id)_signalStrengthBarsImageName;

@end
