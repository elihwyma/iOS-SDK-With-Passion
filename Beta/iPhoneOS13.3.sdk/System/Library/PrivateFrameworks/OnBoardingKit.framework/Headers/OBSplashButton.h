/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface OBSplashButton : NSObject

{
    UIButton *_button;
    long long _style;
    CDUnknownBlockType _action;
}

@property (retain) UIButton *button;
@property long long style;
@property (copy) CDUnknownBlockType action;

@end
