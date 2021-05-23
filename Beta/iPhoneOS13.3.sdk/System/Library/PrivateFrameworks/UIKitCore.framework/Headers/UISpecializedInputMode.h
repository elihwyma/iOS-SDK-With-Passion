/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardInputMode.h>

@interface UISpecializedInputMode : UIKeyboardInputMode

{
    Class _viewControllerClass;
}

@property (retain, nonatomic) Class viewControllerClass;

- (void)dealloc;
- (_Bool)isSpecializedInputMode;
- (id)hardwareLayout;
- (_Bool)includeBarHeight;

@end
