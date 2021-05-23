/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSTabBar;

@protocol IKAppTabBarController;

@interface IKAppTabBar : NSObject

{
    id <IKAppTabBarController> _controller;
    IKJSTabBar *_jsTabBar;
}

@property (weak, nonatomic) IKJSTabBar *jsTabBar;
@property (weak, nonatomic, readonly) id <IKAppTabBarController> controller;

- (void)onSelect;
- (id)initWithTabBarController:(id)arg1;

@end
