/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface BFFSplashButton : NSObject

{
    UIButton *_button;
    long long _style;
    CDUnknownBlockType _action;
}

@property (retain) UIButton *button;
@property long long style;
@property (copy) CDUnknownBlockType action;

@end
