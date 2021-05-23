/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothItemView : UIStatusBarItemView

{
    _Bool _connected;
    _Bool _shouldAnimateConnection;
}

- (void)setVisible:(_Bool)arg1;
- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)alphaForConnected:(_Bool)arg1;
- (void)performPendedActions;

@end
