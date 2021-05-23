/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIEventEnvironmentClearTouchesContext : NSObject

{
    UIView *_view;
    UIWindow *_window;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIWindow *window;

- (id)initWithView:(id)arg1 window:(id)arg2;

@end
