/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class UIScreen;

@interface SBUIPluginActivationContext : NSObject

{
    UIScreen *_screen;
    int _activationEvent;
}

@property (retain, nonatomic) UIScreen *screen;
@property (nonatomic) int activationEvent;

@end
